/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSDate, MicroPaymentQueueRequest, NSString;

@interface LoadMicroPaymentQueueCountOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSDate* _lastQueueCheckDate;
	int _queueItemCount;
	MicroPaymentQueueRequest* _request;
	NSString* _urlBagKey;

}

@property (assign) int queueItemCount;                              //@synthesize queueItemCount=_queueItemCount - In the implementation block
@property (retain) NSDate * lastQueueCheckDate;                     //@synthesize lastQueueCheckDate=_lastQueueCheckDate - In the implementation block
@property (copy) MicroPaymentQueueRequest * request;                //@synthesize request=_request - In the implementation block
@property (retain) NSString * URLBagKey;                            //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)lastQueueCheckDate;
-(char)_loadCountReturningError:(id*)arg1 ;
-(char)_setCountWithResponse:(id)arg1 error:(id*)arg2 ;
-(void)setQueueItemCount:(int)arg1 ;
-(void)setLastQueueCheckDate:(NSDate *)arg1 ;
-(int)queueItemCount;
-(void)dealloc;
-(MicroPaymentQueueRequest *)request;
-(void)run;
-(void)setRequest:(MicroPaymentQueueRequest *)arg1 ;
-(void)setURLBagKey:(NSString *)arg1 ;
-(NSString *)URLBagKey;
@end

