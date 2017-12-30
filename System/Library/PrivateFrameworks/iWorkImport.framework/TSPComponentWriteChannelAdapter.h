/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUFileIOChannel, NSError, NSString;

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _queue;
	TSUFileIOChannel* _channel;
	/*^block*/id _handler;
	NSError* _error;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithChannel:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)close;
-(void)_close;
-(void)writeData:(id)arg1 ;
-(void)setError:(id)arg1 ;
@end
