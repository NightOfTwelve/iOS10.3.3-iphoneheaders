/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/0AppMigrator.migrator/0AppMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSDictionary, NSURL, NSArray, NSString;

@interface MIGlobalConfiguration : NSObject {

	char _codeSigningEnforcementIsDisabled;
	char _lowerInstallPriority;
	char _skipDeviceFamilyCheck;
	char _skipThinningCheck;
	char _allowPatchWithoutSinf;
	NSSet* _allFrameworksDirectories;
	NSDictionary* _coreServicesAppBundleIDToInfoMap;
	NSDictionary* _systemAppBundleIDToInfoMap;
	NSDictionary* _internalAppBundleIDToInfoMap;
	NSSet* _builtInFrameworkBundleIDs;
	long _nSimultaneousInstallations;
	unsigned _uid;
	unsigned _gid;
	NSURL* _installdPath;
	NSURL* _mobilePath;
	NSURL* _rootPath;

}

@property (nonatomic,readonly) NSURL * installdPath;                                              //@synthesize installdPath=_installdPath - In the implementation block
@property (nonatomic,readonly) NSURL * mobilePath;                                                //@synthesize mobilePath=_mobilePath - In the implementation block
@property (nonatomic,readonly) NSURL * rootPath;                                                  //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) char lowerInstallPriority;                                         //@synthesize lowerInstallPriority=_lowerInstallPriority - In the implementation block
@property (nonatomic,readonly) char skipDeviceFamilyCheck;                                        //@synthesize skipDeviceFamilyCheck=_skipDeviceFamilyCheck - In the implementation block
@property (nonatomic,readonly) char skipThinningCheck;                                            //@synthesize skipThinningCheck=_skipThinningCheck - In the implementation block
@property (nonatomic,readonly) char allowPatchWithoutSinf;                                        //@synthesize allowPatchWithoutSinf=_allowPatchWithoutSinf - In the implementation block
@property (nonatomic,readonly) char codeSigningEnforcementIsDisabled;                             //@synthesize codeSigningEnforcementIsDisabled=_codeSigningEnforcementIsDisabled - In the implementation block
@property (nonatomic,readonly) long nSimultaneousInstallations;                                   //@synthesize nSimultaneousInstallations=_nSimultaneousInstallations - In the implementation block
@property (nonatomic,readonly) NSURL * stagingRoot; 
@property (nonatomic,readonly) NSURL * logDirectory; 
@property (nonatomic,readonly) NSURL * coreServicesDirectory; 
@property (nonatomic,readonly) NSURL * systemAppsDirectory; 
@property (nonatomic,readonly) NSURL * internalAppsDirectory; 
@property (nonatomic,readonly) NSURL * developerAppsDirectory; 
@property (nonatomic,readonly) NSURL * factoryMountDirectory; 
@property (nonatomic,readonly) NSURL * systemFrameworksRootDirectory; 
@property (nonatomic,readonly) NSURL * internalFrameworksRootDirectory; 
@property (nonatomic,readonly) NSURL * developerFrameworksRootDirectory; 
@property (nonatomic,copy,readonly) NSSet * allFrameworksDirectories;                             //@synthesize allFrameworksDirectories=_allFrameworksDirectories - In the implementation block
@property (nonatomic,readonly) NSURL * dataDirectory; 
@property (nonatomic,readonly) NSURL * cachesDirectory; 
@property (nonatomic,copy,readonly) NSArray * appBundleMetadataItemNames; 
@property (nonatomic,copy,readonly) NSArray * appUserDataItemNames; 
@property (nonatomic,copy,readonly) NSSet * installationBlacklist; 
@property (nonatomic,copy,readonly) NSSet * builtInApplicationBundleIDs; 
@property (nonatomic,copy,readonly) NSSet * builtInFrameworkBundleIDs;                            //@synthesize builtInFrameworkBundleIDs=_builtInFrameworkBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * systemAppBundleIDToInfoMap;                    //@synthesize systemAppBundleIDToInfoMap=_systemAppBundleIDToInfoMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * coreServicesAppBundleIDToInfoMap;              //@synthesize coreServicesAppBundleIDToInfoMap=_coreServicesAppBundleIDToInfoMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * internalAppBundleIDToInfoMap;                  //@synthesize internalAppBundleIDToInfoMap=_internalAppBundleIDToInfoMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * diskImageAppBundleIDToInfoMap; 
@property (nonatomic,readonly) unsigned uid;                                                      //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) unsigned gid;                                                      //@synthesize gid=_gid - In the implementation block
@property (nonatomic,readonly) NSURL * oldContainerPath; 
@property (nonatomic,readonly) NSURL * oldInstallMapPath; 
@property (nonatomic,readonly) NSURL * oldDataDirectoryPath; 
@property (nonatomic,readonly) NSURL * oldLoggingPath; 
@property (nonatomic,readonly) NSURL * oldArchiveDirectory; 
@property (nonatomic,readonly) NSURL * dataDirectoryPath; 
@property (nonatomic,readonly) NSURL * roleUserMigrationMarkerFilePath; 
@property (assign,nonatomic) char haveUpdatedPluginContainersWithParentID; 
@property (nonatomic,copy,readonly) NSString * alternateThinningModelIdentifier; 
@property (nonatomic,copy,readonly) NSArray * diskImageApplicationsDirectories; 
+(id)sharedInstance;
-(NSURL *)installdPath;
-(NSURL *)mobilePath;
-(NSURL *)oldInstallMapPath;
-(NSURL *)oldDataDirectoryPath;
-(NSArray *)appUserDataItemNames;
-(NSURL *)dataDirectoryPath;
-(NSArray *)diskImageApplicationsDirectories;
-(NSURL *)internalFrameworksRootDirectory;
-(id)_bundleIDMapForBundlesInDirectory:(id)arg1 withExtension:(id)arg2 ;
-(NSURL *)coreServicesDirectory;
-(id)_bundleIDMapForAppsInDirectory:(id)arg1 ;
-(NSURL *)systemAppsDirectory;
-(NSURL *)internalAppsDirectory;
-(NSSet *)allFrameworksDirectories;
-(NSURL *)oldLoggingPath;
-(NSURL *)systemFrameworksRootDirectory;
-(NSURL *)stagingRoot;
-(id)_mountFromToOnMap;
-(id)_mountPointForDevice:(unsigned)arg1 mountFromToOnMap:(id)arg2 ;
-(NSURL *)developerAppsDirectory;
-(id)diskImageMountPoints;
-(NSURL *)oldContainerPath;
-(char)codeSigningEnforcementIsDisabled;
-(NSURL *)oldArchiveDirectory;
-(NSURL *)roleUserMigrationMarkerFilePath;
-(NSURL *)factoryMountDirectory;
-(NSURL *)developerFrameworksRootDirectory;
-(NSArray *)appBundleMetadataItemNames;
-(NSSet *)installationBlacklist;
-(NSSet *)builtInApplicationBundleIDs;
-(NSDictionary *)systemAppBundleIDToInfoMap;
-(NSDictionary *)internalAppBundleIDToInfoMap;
-(NSDictionary *)diskImageAppBundleIDToInfoMap;
-(NSDictionary *)coreServicesAppBundleIDToInfoMap;
-(NSSet *)builtInFrameworkBundleIDs;
-(void)reScanSystemApps;
-(void)reScanCoreServicesApps;
-(void)reScanInternalApps;
-(char)haveUpdatedPluginContainersWithParentID;
-(void)setHaveUpdatedPluginContainersWithParentID:(char)arg1 ;
-(NSString *)alternateThinningModelIdentifier;
-(char)lowerInstallPriority;
-(char)skipDeviceFamilyCheck;
-(char)skipThinningCheck;
-(char)allowPatchWithoutSinf;
-(long)nSimultaneousInstallations;
-(NSURL *)cachesDirectory;
-(id)init;
-(unsigned)uid;
-(NSURL *)logDirectory;
-(NSURL *)dataDirectory;
-(NSURL *)rootPath;
-(unsigned)gid;
@end
