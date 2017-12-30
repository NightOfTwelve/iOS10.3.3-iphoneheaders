/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/SoftwareUpdateServicesUIPlugin.servicebundle/SoftwareUpdateServicesUIPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServicesUIPlugin/SUSUISoftwareUpdateAlertModelDelegate.h>
#import <SoftwareUpdateServicesUIPlugin/SUAutoInstallOperationDelegate.h>
#import <SoftwareUpdateServicesUIPlugin/SUSUILayoutStateMonitorObserver.h>
#import <SoftwareUpdateServicesUIPlugin/BSPowerMonitorObserver.h>
#import <libobjc.A.dylib/SUKeybagInterfaceObserver.h>
#import <SoftwareUpdateServicesUIPlugin/SUManagerClientDelegate.h>
#import <libobjc.A.dylib/SUNetworkObserver.h>

@protocol OS_dispatch_queue, SUInvalidatable;
@class PCPersistentTimer, SUManagerClient, SUDownload, SUAutoInstallOperation, SUSUISoftwareUpdateAlertModel, SUSUISoftwareUpdateInstallOptions, SUSUIFullScreenAlertPresentationManager, SUSUIAlertPresentationManager, SUSUILayoutStateMonitor, SUKeybagInterface, SUSUIAuthenticationInterface, _SUSUIPostUpdateAlertController, NSHashTable, SUSUISoftwareUpdateDefaults, SUSUIExternalSettingsAppDefaults, NSObject, FBSSystemService, NSString;

@interface SUSUISoftwareUpdateController : NSObject <SUSUISoftwareUpdateAlertModelDelegate, SUAutoInstallOperationDelegate, SUSUILayoutStateMonitorObserver, BSPowerMonitorObserver, SUKeybagInterfaceObserver, SUManagerClientDelegate, SUNetworkObserver> {

	PCPersistentTimer* _installTimer;
	SUManagerClient* _client;
	SUDownload* _updateToInstall;
	SUAutoInstallOperation* _scheduledTryTonightAutoInstallOperation;
	SUSUISoftwareUpdateAlertModel* _alertModel;
	char _scheduleInstallAlertWhenAble;
	char _scheduleInstallOnNextUnlock;
	SUSUISoftwareUpdateInstallOptions* _pendingInstallOptions;
	SUSUIFullScreenAlertPresentationManager* _fullScreenAlertPresentationManager;
	SUSUIAlertPresentationManager* _alertPresentationManager;
	SUSUILayoutStateMonitor* _layoutStateMonitor;
	SUSUILayoutStateMonitor* _uiLockedLayoutStateMonitor;
	SUKeybagInterface* _keybagInterface;
	SUSUIAuthenticationInterface* _authInterface;
	_SUSUIPostUpdateAlertController* _postUpdateController;
	NSHashTable* _observers;
	SUSUISoftwareUpdateDefaults* _suDefaults;
	SUSUIExternalSettingsAppDefaults* _settingsAppDefaults;
	NSObject*<OS_dispatch_queue> _badgingQueue;
	FBSSystemService* _badgingQueue_systemService;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	id<SUInvalidatable> _installationConstraintObserver;
	char _registeredForInstallationConstraintChanges;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)installNowFromSource:(unsigned)arg1 options:(id)arg2 ;
-(void)_presentAlert:(id)arg1 ;
-(void)installNowFromSource:(unsigned)arg1 ;
-(char)_shouldShowOrScheduleInstallAlert;
-(void)_dismissInstallAlertsWithReason:(id)arg1 includingInstallTonight:(char)arg2 withRealertStrategy:(unsigned)arg3 ;
-(void)_resetStateForReason:(id)arg1 ;
-(void)_autoDownloadUnknownToUserFailedForDescriptor:(id)arg1 error:(id)arg2 ;
-(void)_toggleSettingsBadge:(char)arg1 ;
-(void)_reboot:(char)arg1 ;
-(void)_setTryTonightAutoInstallOperation:(id)arg1 cancelIfNecessary:(char)arg2 ;
-(void)_realertWithStrategy:(unsigned)arg1 andReason:(id)arg2 ;
-(id)_computeNextLastPredictedUnlockDateMinus4HoursFromNow;
-(int)_delayDaysForSkips:(int)arg1 ;
-(void)_unregisterForUnlockNotifications;
-(id)_computeDefaultRealertDate;
-(void)_registerForUnlockNotifications;
-(void)_registerForInstallationConstraintChangedNotifications;
-(void)_sendInstallTonightDidCompleteToObservers;
-(void)_autoInstallOperationWasCancelled:(id)arg1 withRepopStrategy:(unsigned)arg2 ;
-(void)_autoInstallOperationDidExpire:(id)arg1 withRepopStrategy:(unsigned)arg2 ;
-(void)_setUpdateToInstall:(id)arg1 ;
-(void)layoutStateMonitorStateDidChange:(id)arg1 ;
-(void)_badgingQueue_savePreferencesBadgeEnabled:(char)arg1 ;
-(char)_badgingQueue_isBadgedForSoftwareUpdate;
-(void)_badgingQueue_badgeSettingsWithValue:(int)arg1 ;
-(void)_presentAuthenticationUIForInstallation:(/*^block*/id)arg1 withInstallType:(unsigned)arg2 withInstallOperation:(id)arg3 ;
-(id)_getNextLastPredictedUnlockDateFromDuet:(id)arg1 ;
-(id)_computeNextLastPredictedUnlockDateMinus4HoursFromStartDate:(id)arg1 ;
-(void)_installUpdate:(unsigned)arg1 withInstallOperation:(id)arg2 source:(unsigned)arg3 options:(id)arg4 ;
-(void)installTonightWithOperation:(id)arg1 options:(id)arg2 ;
-(void)presentAuthenticationAlert:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unregisterForInstallationConstraintChangeNotifications;
-(void)_showOrScheduleNextInstallAlertFromTimer:(id)arg1 ;
-(void)_showSUAvailableAlertForDescriptor:(id)arg1 ;
-(id)_stringForCurrentVersionPreference;
-(void)_saveLastKnownVersionPreference:(id)arg1 ;
-(void)_clearLegacyBadgeIfNecessary:(id)arg1 ;
-(void)_savePreferencesBadgeFlag:(char)arg1 ;
-(void)_setSettingsBadgeToValue:(int)arg1 ;
-(void)alertModel:(id)arg1 alertFlowDidChangeFrom:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)repopInstallAlertWithDefaultDurationFromNowForReason:(id)arg1 ;
-(id)_stringForInstallNotAllowableReason:(unsigned)arg1 ;
-(char)_showNextInstallAlertWithReasons:(int)arg1 orScheduleIfNecessary:(char)arg2 ;
-(void)_isUpdateInstallable:(/*^block*/id)arg1 ;
-(void)_handleInstallError:(id)arg1 ;
-(void)_setPendingInstallOptions:(id)arg1 ;
-(void)installTonightWithOperation:(id)arg1 ;
-(void)_installationConstraintsDidChange:(unsigned)arg1 changed:(unsigned)arg2 error:(id)arg3 ;
-(void)_showInstallAlertWithInstallOptions:(id)arg1 ;
-(id)_waitableReasonsForShowingInstallAlert;
-(char)_doesStateContainNonInstallableReasons:(int)arg1 reasonsToCheck:(id)arg2 outMatchingReasonsString:(id*)arg3 ;
-(id)_allNonInstallableReasons;
-(void)_initializeState;
-(void)_showOrScheduleNextInstallAlert;
-(void)_migrateForNewOSVersionIfNecessary;
-(void)layoutStateMonitorUILockStateDidChange:(id)arg1 ;
-(void)_createInstallTonightOperationWithResult:(/*^block*/id)arg1 ;
-(void)presentEmergencyCallAlert:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)repopInstallAlertWithWeekDurationFromNowForReason:(id)arg1 ;
-(void)_scheduleInstallAlertReminderWithDate:(id)arg1 repopStrategy:(unsigned)arg2 forReason:(id)arg3 ;
-(char)_showNextInstallAlertWithReasons:(int)arg1 orScheduleIfNecessary:(char)arg2 withInstallOptions:(id)arg3 ;
-(void)_dismissInstallFailureAlertsWithoutRepop;
-(void)_doInstallNowWithOptions:(id)arg1 ;
-(void)_doInstallTonight:(id)arg1 consent:(char)arg2 ;
-(void)powerMonitorSystemWillSleep:(id)arg1 ;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2 ;
-(void)client:(id)arg1 downloadDidStart:(id)arg2 ;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2 ;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2 withInstallPolicy:(id)arg3 ;
-(void)client:(id)arg1 installDidStart:(id)arg2 ;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 installDidFinish:(id)arg2 ;
-(void)client:(id)arg1 installPolicyDidChange:(id)arg2 ;
-(void)autoInstallOperationDidConsent:(id)arg1 ;
-(void)autoInstallOperationWasCancelled:(id)arg1 ;
-(void)autoInstallOperationDidExpire:(id)arg1 ;
-(void)autoInstallOperationIsReadyToInstall:(id)arg1 withResponse:(/*^block*/id)arg2 ;
-(void)isDownloading:(/*^block*/id)arg1 ;
-(id)_download;
-(char)canDeferInstallation;
@end
