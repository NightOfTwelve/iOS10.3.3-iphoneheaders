/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:47 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface SYDCredentials : NSObject {

	NSString* _user;
	NSString* _userName;
	NSDictionary* _accountProperties;

}

@property (nonatomic,readonly) NSString * user;                        //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * userName;                    //@synthesize userName=_userName - In the implementation block
@property (nonatomic,readonly) NSString * apsEnvironment; 
-(id)initWithUser:(id)arg1 userName:(id)arg2 accountProperties:(id)arg3 ;
-(id)publicURLForConfigurationWithService:(id)arg1 ;
-(NSString *)userName;
-(NSString *)apsEnvironment;
-(NSString *)user;
@end

