/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:47 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UMUserSyncTask, SYDApplication, NSDictionary, NSString;

@interface SYDSyncTask : NSObject {

	UMUserSyncTask* _userSyncTask;
	SYDApplication* _app;
	int _reason;
	NSDictionary* _changes;
	unsigned _syncIdentifier;
	unsigned long long _rank;

}

@property (nonatomic,retain) SYDApplication * app;                         //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) int reason;                                   //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                      //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * storeIdentifier; 
@property (nonatomic,retain) NSDictionary * changes;                       //@synthesize changes=_changes - In the implementation block
@property (assign,nonatomic) unsigned syncIdentifier;                      //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (nonatomic,readonly) UMUserSyncTask * userSyncTask; 
-(id)initWithApplication:(id)arg1 reason:(int)arg2 rank:(unsigned long long)arg3 ;
-(void)endUserSyncTask;
-(void)setSyncIdentifier:(unsigned)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(int)reason;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(void)setApp:(SYDApplication *)arg1 ;
-(NSString *)storeIdentifier;
-(SYDApplication *)app;
-(void)setReason:(int)arg1 ;
-(void)beginUserSyncTask;
-(UMUserSyncTask *)userSyncTask;
-(NSDictionary *)changes;
-(void)setChanges:(NSDictionary *)arg1 ;
-(unsigned)syncIdentifier;
@end
