/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@protocol OS_dispatch_queue, TSUReadChannel;
@class TSPData, NSObject, NSString;

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	TSPData* _data;
	long long _dataLength;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _requestHandlingQueue;
	id<TSUReadChannel> _readChannel;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_provideContentInformationToLoadingRequest:(id)arg1 ;
-(void)_provideDataToLoadingRequest:(id)arg1 ;
-(void)_provideNextDataBlockToLoadingRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)delegateQueue;
-(char)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
@end

