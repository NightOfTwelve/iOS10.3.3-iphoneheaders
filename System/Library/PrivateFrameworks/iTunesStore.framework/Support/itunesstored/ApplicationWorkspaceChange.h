/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ApplicationHandle;

@interface ApplicationWorkspaceChange : NSObject {

	int _changeType;
	ApplicationHandle* _applicationHandle;

}

@property (assign,nonatomic) int changeType;                                   //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy) ApplicationHandle * applicationHandle;              //@synthesize applicationHandle=_applicationHandle - In the implementation block
-(void)setApplicationHandle:(ApplicationHandle *)arg1 ;
-(ApplicationHandle *)applicationHandle;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
@end
