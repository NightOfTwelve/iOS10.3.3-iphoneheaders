/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSUReadChannel.h>

@protocol OS_dispatch_queue, TSUReadChannel, TSUStreamReadChannel, OS_dispatch_data;
@class NSObject, NSError, NSArray, NSString;

@interface TSUBufferedReadChannel : NSObject <TSUReadChannel> {

	NSObject*<OS_dispatch_queue> _readQueue;
	id<TSUReadChannel> _sourceReadChannel;
	unsigned long _sourceReadBufferSize;
	long long _sourceOffset;
	unsigned long _sourceLength;
	NSError* _sourceReadChannelError;
	NSArray* _blockInfos;
	/*^block*/id _streamReadChannelBlock;
	id<TSUStreamReadChannel> _streamReadChannel;
	/*^block*/id _streamReadChannelSourceHandler;
	char _isStreamOutputDone;
	long long _streamOutputOffset;
	unsigned long _streamOutputOutstandingLength;
	unsigned long _streamOutputLength;
	NSObject*<OS_dispatch_data> _currentStreamOutputData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isValid; 
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(/*^block*/id)arg3 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setLowWater:(unsigned long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(/*^block*/id)arg4 ;
-(void)_closeStreamReadChannel;
-(void)_readFromOffset:(long long)arg1 length:(unsigned long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long)arg2 ;
-(id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long)arg2 isReadDone:(char*)arg3 ;
-(void)setStreamReadChannelSourceHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(char)isValid;
-(void)close;
-(void)_close;
@end

