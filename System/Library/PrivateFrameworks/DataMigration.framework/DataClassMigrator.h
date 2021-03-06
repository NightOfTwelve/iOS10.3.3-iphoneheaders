/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface DataClassMigrator : NSObject {

	NSDictionary* _context;
	char _didUpgrade;

}

@property (nonatomic,retain) NSDictionary * context;                                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char didUpgrade;                                         //@synthesize didUpgrade=_didUpgrade - In the implementation block
@property (nonatomic,readonly) char didRestoreFromBackup; 
@property (nonatomic,readonly) char didMigrateBackupFromDifferentDevice; 
@property (nonatomic,readonly) char didRestoreFromCloudBackup; 
@property (nonatomic,readonly) char shouldPreserveSettingsAfterRestore; 
@property (nonatomic,readonly) char wasPasscodeSetInBackup; 
+(id)dataClassMigratorForBundleAtPath:(id)arg1 ;
-(float)migrationProgress;
-(char)didUpgrade;
-(char)didRestoreFromBackup;
-(char)didMigrateBackupFromDifferentDevice;
-(char)didRestoreFromCloudBackup;
-(char)shouldPreserveSettingsAfterRestore;
-(char)wasPasscodeSetInBackup;
-(void)setDidUpgrade:(char)arg1 ;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(float)estimatedDuration;
-(id)dataClassName;
-(char)performMigration;
@end

