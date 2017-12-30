/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:49 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSUDownloadTaskProgress : NSObject {

	char _isActive;
	long long _totalBytesDownloaded;
	long long _totalBytesExpectedToBeDownloaded;

}

@property (assign,nonatomic) char isActive;                                           //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) long long totalBytesDownloaded;                          //@synthesize totalBytesDownloaded=_totalBytesDownloaded - In the implementation block
@property (assign,nonatomic) long long totalBytesExpectedToBeDownloaded;              //@synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded - In the implementation block
-(long long)totalBytesExpectedToBeDownloaded;
-(void)setTotalBytesExpectedToBeDownloaded:(long long)arg1 ;
-(void)setTotalBytesDownloaded:(long long)arg1 ;
-(long long)totalBytesDownloaded;
-(id)description;
-(char)isActive;
-(void)setIsActive:(char)arg1 ;
@end
