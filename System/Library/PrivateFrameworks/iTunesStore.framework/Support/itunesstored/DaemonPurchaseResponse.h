/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSPurchaseResponse.h>

@class StoreDownloadQueueResponse;

@interface DaemonPurchaseResponse : SSPurchaseResponse {

	StoreDownloadQueueResponse* _decodedResponse;

}

@property (nonatomic,retain) StoreDownloadQueueResponse * decodedResponse;              //@synthesize decodedResponse=_decodedResponse - In the implementation block
-(StoreDownloadQueueResponse *)decodedResponse;
-(void)setDecodedResponse:(StoreDownloadQueueResponse *)arg1 ;
-(void)dealloc;
@end
