/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class MCProfileInfo, NSArray, LSApplicationWorkspace, NSObject, NSString;

@interface MCUIDataManager : NSObject <LSApplicationWorkspaceObserverProtocol> {

	MCProfileInfo* _mdmProfile;
	NSArray* _configurationProfiles;
	NSArray* _freeDeveloperAppSigners;
	NSArray* _enterpriseAppSigners;
	NSArray* _blockedApplications;
	LSApplicationWorkspace* _appWorkspace;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	NSObject*<OS_dispatch_queue> _memberQueue;
	int _appsChangedNotifyToken;
	int _provisioningProfileInstalledToken;
	int _provisioningProfileRemovedToken;

}

@property (nonatomic,retain) LSApplicationWorkspace * appWorkspace;                 //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reloadQueue;              //@synthesize reloadQueue=_reloadQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;              //@synthesize memberQueue=_memberQueue - In the implementation block
@property (assign,nonatomic) int appsChangedNotifyToken;                            //@synthesize appsChangedNotifyToken=_appsChangedNotifyToken - In the implementation block
@property (assign,nonatomic) int provisioningProfileInstalledToken;                 //@synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken - In the implementation block
@property (assign,nonatomic) int provisioningProfileRemovedToken;                   //@synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken - In the implementation block
@property (nonatomic,retain) MCProfileInfo * mdmProfile;                            //@synthesize mdmProfile=_mdmProfile - In the implementation block
@property (nonatomic,retain) NSArray * configurationProfiles;                       //@synthesize configurationProfiles=_configurationProfiles - In the implementation block
@property (nonatomic,retain) NSArray * freeDeveloperAppSigners;                     //@synthesize freeDeveloperAppSigners=_freeDeveloperAppSigners - In the implementation block
@property (nonatomic,retain) NSArray * enterpriseAppSigners;                        //@synthesize enterpriseAppSigners=_enterpriseAppSigners - In the implementation block
@property (nonatomic,retain) NSArray * blockedApplications;                         //@synthesize blockedApplications=_blockedApplications - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(char)isProfileSectionRestricted;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)itemCount;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(char)isProfileSectionEmpty;
-(unsigned)profileCount;
-(id)configurationProfilesWithOutMDMProfile:(id*)arg1 outEnterpriseAppSigners:(id*)arg2 outFreeDevAppSigners:(id*)arg3 outBlockedApplications:(id*)arg4 ;
-(NSArray *)configurationProfiles;
-(void)setBlockedApplications:(NSArray *)arg1 ;
-(void)setEnterpriseAppSigners:(NSArray *)arg1 ;
-(NSArray *)blockedApplications;
-(NSArray *)enterpriseAppSigners;
-(int)provisioningProfileInstalledToken;
-(void)setProvisioningProfileInstalledToken:(int)arg1 ;
-(int)provisioningProfileRemovedToken;
-(void)setProvisioningProfileRemovedToken:(int)arg1 ;
-(void)configurationProfilesChanged:(id)arg1 ;
-(void)reloadAppSignersAndBlockedAppsInBackground;
-(void)reloadDataInBackgroundIncludingProfiles:(char)arg1 appSigners:(char)arg2 blockedApplications:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)reloadProfilesInBackground;
-(void)reloadAllDataInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadQueueReloadDataInBackgroundIncludingProfiles:(char)arg1 appSigners:(char)arg2 blockedApplications:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)reloadAppSignersAndBlockedAppsInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)appSignerCount;
-(MCProfileInfo *)mdmProfile;
-(NSArray *)freeDeveloperAppSigners;
-(void)reloadAllDataInBackground;
-(void)reloadProfilesInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(void)setMdmProfile:(MCProfileInfo *)arg1 ;
-(void)setConfigurationProfiles:(NSArray *)arg1 ;
-(void)setFreeDeveloperAppSigners:(NSArray *)arg1 ;
-(int)appsChangedNotifyToken;
-(void)setAppsChangedNotifyToken:(int)arg1 ;
-(LSApplicationWorkspace *)appWorkspace;
-(void)setAppWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)setReloadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)reloadQueue;
@end
