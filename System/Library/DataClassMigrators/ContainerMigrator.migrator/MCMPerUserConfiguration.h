/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/ContainerMigrator.migrator/ContainerMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface MCMPerUserConfiguration : NSObject {

	unsigned _userId;
	NSURL* _userBaseDirectory;
	NSURL* _transientDirectory;
	NSURL* _stagingDirectory;
	NSURL* _systemContainerBackupBaseDirectory;
	NSURL* _systemContainerBackupDirectory;
	NSURL* _systemGroupContainerBackupDirectory;
	NSURL* _userHomeDirectory;

}

@property (readonly) NSURL * transientDirectory; 
@property (readonly) NSURL * stagingDirectory; 
@property (nonatomic,readonly) NSURL * userHomeDirectory;                      //@synthesize userHomeDirectory=_userHomeDirectory - In the implementation block
@property (readonly) NSURL * systemContainerBackupBaseDirectory; 
@property (readonly) NSURL * systemContainerBackupDirectory; 
@property (readonly) NSURL * systemGroupContainerBackupDirectory; 
@property (readonly) NSURL * oldLibraryDirectoryPath; 
@property (readonly) NSURL * oldLoggingPath; 
-(NSURL *)stagingDirectory;
-(NSURL *)oldLibraryDirectoryPath;
-(char)existsUserBaseDirectory;
-(id)userBaseDirectory;
-(NSURL *)systemContainerBackupBaseDirectory;
-(id)containerDirectoryURLForContentClass:(unsigned long long)arg1 transient:(char)arg2 ;
-(NSURL *)systemGroupContainerBackupDirectory;
-(NSURL *)systemContainerBackupDirectory;
-(id)initWithUserId:(unsigned)arg1 ;
-(NSURL *)transientDirectory;
-(NSURL *)oldLoggingPath;
-(NSURL *)userHomeDirectory;
@end
