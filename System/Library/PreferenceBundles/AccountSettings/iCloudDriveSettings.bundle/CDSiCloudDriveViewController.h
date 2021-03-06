/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/iCloudDriveSettings.bundle/iCloudDriveSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <iCloudDriveSettings/CDSUpgradeViewControllerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class PSSpecifier, NSMutableArray, NSArray, CDSServiceAccessCache, ACAccount, NSObject;

@interface CDSiCloudDriveViewController : ACUIViewController <CDSUpgradeViewControllerDelegate> {

	PSSpecifier* _iCloudDriveSpecifier;
	PSSpecifier* _statusInfoSpecifier;
	NSMutableArray* _appSpecifiers;
	NSArray* _cellularSpecifiers;
	NSArray* _logsSpecifiers;
	CDSServiceAccessCache* _accessCache;
	ACAccount* _appleAccount;
	char _isFirstSetup;
	id _uiApplicationDidBecomeActiveObserver;
	id _brDidUpdateLastSyncStatusObserver;
	id _brUbiquityIdentityTokenStatusObserver;
	id _brContainersListChangedNotification;
	NSObject*<OS_dispatch_source> _containerPriorityHintingSource;
	NSObject*<OS_dispatch_queue> _containerPriorityHintingQueue;

}
+(id)_sanitizeForDiagnoseName:(id)arg1 ;
-(id)_appSpecifiersForTCCServices;
-(void)_setDocumentsAndDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_documentsAndDataEnabled:(id)arg1 ;
-(void)_loadCloudKitSettingsBundleIfNeeded;
-(id)_appSpecifierWithBundleID:(id)arg1 ;
-(id)_appAccessGrantedForBundleID:(id)arg1 ;
-(void)_setAppAccessGranted:(id)arg1 forBundleID:(id)arg2 ;
-(void)_setAppAccessGranted:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_appAccessGrantedForSpecifier:(id)arg1 ;
-(id)_useCellular:(id)arg1 ;
-(id)_collectBRLogs;
-(void)_upgradeButtonWasTapped:(id)arg1 ;
-(void)upgradeViewControllerDidCancel:(id)arg1 ;
-(void)upgradeViewControllerDidSucceed:(id)arg1 ;
-(void)_reloadAppleAccount;
-(id)_createSpecifiersForCellularSwitchCell;
-(id)_createSpecifiersForDiagnostics;
-(id)_createSpecifierForUpgradeButton;
-(id)_specifierForCloudKit;
-(void)_setUseCellular:(id)arg1 forSpecifier:(id)arg2 ;
-(void)diagnoseDocumentsAndData:(id)arg1 ;
-(void)_setDocumentsAndDataEnabled:(char)arg1 ;
-(id)_numberOfAppsUsingCloudKit;
-(id)_valueForCloudKitSpecifier:(id)arg1 ;
-(void)_reloadSpecifiersThatDependOnDocumentsAndDataSwitchState;
-(id)_diagnosePathForBR;
-(void)_registerContainerPriorityHinting;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(void)_refresh:(id)arg1 ;
-(id)_appleAccount;
-(id)specifiers;
@end

