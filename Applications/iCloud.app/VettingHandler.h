/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iCloud.app/iCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKAccountInfo, NSURL;

@interface VettingHandler : NSObject {

	CKAccountInfo* _accountInfoOverride;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) CKAccountInfo * accountInfoOverride;              //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
-(id)initWithCloudKitURL:(id)arg1 ;
-(void)fetchVettingRecordWithVettingToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)completeVettingWithCompletionHandler:(/*^block*/id)arg1 willIssueCompletionOperationHandler:(/*^block*/id)arg2 ;
-(NSURL *)url;
-(CKAccountInfo *)accountInfoOverride;
-(void)setAccountInfoOverride:(CKAccountInfo *)arg1 ;
@end
