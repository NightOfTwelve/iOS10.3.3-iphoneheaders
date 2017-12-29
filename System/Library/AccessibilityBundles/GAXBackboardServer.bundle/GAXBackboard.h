/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
#import <GAXBackboardServer/GAXAppManagerDelegate.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>
#import <GAXBackboardServer/GAXProfileManagerDelegate.h>
#import <GAXBackboardServer/GAXBackboardServerDelegate.h>
#import <GAXBackboardServer/GAXTimeRestrictionManagerDelegate.h>
#import <GAXBackboardServer/GAXEventProcessorDelegate.h>
#import <GAXBackboardServer/GAXVerifierDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, GAXBackboardServer, AXUIClient, GAXAppManager, GAXProfileManager, GAXTimeRestrictionManager, GAXAccessibilityFeatureManager, GAXVerifier, AXAccessQueueTimer, GAXEventProcessor, NSString, NSArray, NSMutableArray, AXAssertion, AXDispatchTimer, NSMutableSet, NSMutableDictionary, GAXSettings;

@interface GAXBackboard : NSObject <GAXAppManagerDelegate, AXUIClientDelegate, GAXProfileManagerDelegate, GAXBackboardServerDelegate, GAXTimeRestrictionManagerDelegate, GAXEventProcessorDelegate, GAXVerifierDelegate> {

	NSObject*<OS_dispatch_queue> _gaxStateAccessQueue;
	SCD_Struct_GA3 _gaxState;
	char _locked;
	char _shouldStartSessionUponFrontmostAppChanged;
	char _wasEverActiveInCurrentFrontmostApp;
	char _checkingASAMValidity;
	GAXBackboardServer* _backboardServer;
	AXUIClient* _userInterfaceClient;
	id _springboardDiedObserverToken;
	GAXAppManager* _appManager;
	GAXProfileManager* _profileManager;
	GAXTimeRestrictionManager* _timeRestrictionManager;
	GAXAccessibilityFeatureManager* _axFeatureManager;
	GAXVerifier* _integrityVerifier;
	unsigned _desiredModeAfterSuccessfulPasscodeEntry;
	unsigned _passcodeEntryFailedCount;
	AXAccessQueueTimer* _substantialTransitionTimer;
	GAXEventProcessor* _eventProcessor;
	NSString* _eventTapIdentifier;
	NSArray* _ignoredTouchRegions;
	NSMutableArray* _modeHistory;
	int _activeInterfaceOrientation;
	AXAssertion* _disableSystemGesturesAssertion;
	AXDispatchTimer* _unmanagedASAMFailsafeTimer;
	AXDispatchTimer* _appLaunchFailureDetectionTimer;
	NSMutableSet* _reasonsToBlockAllEvents;
	unsigned _appLaunchGeneration;
	NSMutableDictionary* _clientPortsToBundleIds;
	double _lastLockoutStartedTimeInterval;
	double _lastAlertDisplayedTimeInterval;

}

@property (nonatomic,retain) GAXBackboardServer * backboardServer;                            //@synthesize backboardServer=_backboardServer - In the implementation block
@property (nonatomic,retain) AXUIClient * userInterfaceClient;                                //@synthesize userInterfaceClient=_userInterfaceClient - In the implementation block
@property (nonatomic,retain) id springboardDiedObserverToken;                                 //@synthesize springboardDiedObserverToken=_springboardDiedObserverToken - In the implementation block
@property (nonatomic,retain) GAXAppManager * appManager;                                      //@synthesize appManager=_appManager - In the implementation block
@property (nonatomic,retain) GAXProfileManager * profileManager;                              //@synthesize profileManager=_profileManager - In the implementation block
@property (nonatomic,retain) GAXTimeRestrictionManager * timeRestrictionManager;              //@synthesize timeRestrictionManager=_timeRestrictionManager - In the implementation block
@property (nonatomic,retain) GAXAccessibilityFeatureManager * axFeatureManager;               //@synthesize axFeatureManager=_axFeatureManager - In the implementation block
@property (nonatomic,retain) GAXVerifier * integrityVerifier;                                 //@synthesize integrityVerifier=_integrityVerifier - In the implementation block
@property (assign,getter=isLocked,nonatomic) char locked;                                     //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) char shouldStartSessionUponFrontmostAppChanged;                  //@synthesize shouldStartSessionUponFrontmostAppChanged=_shouldStartSessionUponFrontmostAppChanged - In the implementation block
@property (assign,nonatomic) unsigned desiredModeAfterSuccessfulPasscodeEntry;                //@synthesize desiredModeAfterSuccessfulPasscodeEntry=_desiredModeAfterSuccessfulPasscodeEntry - In the implementation block
@property (assign,nonatomic) unsigned passcodeEntryFailedCount;                               //@synthesize passcodeEntryFailedCount=_passcodeEntryFailedCount - In the implementation block
@property (assign,nonatomic) double lastLockoutStartedTimeInterval;                           //@synthesize lastLockoutStartedTimeInterval=_lastLockoutStartedTimeInterval - In the implementation block
@property (assign,nonatomic) char wasEverActiveInCurrentFrontmostApp;                         //@synthesize wasEverActiveInCurrentFrontmostApp=_wasEverActiveInCurrentFrontmostApp - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * substantialTransitionTimer;                 //@synthesize substantialTransitionTimer=_substantialTransitionTimer - In the implementation block
@property (nonatomic,retain) GAXEventProcessor * eventProcessor;                              //@synthesize eventProcessor=_eventProcessor - In the implementation block
@property (nonatomic,copy) NSString * eventTapIdentifier;                                     //@synthesize eventTapIdentifier=_eventTapIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * ignoredTouchRegions;                                   //@synthesize ignoredTouchRegions=_ignoredTouchRegions - In the implementation block
@property (nonatomic,retain) NSMutableArray * modeHistory;                                    //@synthesize modeHistory=_modeHistory - In the implementation block
@property (assign,nonatomic) double lastAlertDisplayedTimeInterval;                           //@synthesize lastAlertDisplayedTimeInterval=_lastAlertDisplayedTimeInterval - In the implementation block
@property (assign,nonatomic) int activeInterfaceOrientation;                                  //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) GAXSettings * settings; 
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;                    //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * unmanagedASAMFailsafeTimer;                    //@synthesize unmanagedASAMFailsafeTimer=_unmanagedASAMFailsafeTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * appLaunchFailureDetectionTimer;                //@synthesize appLaunchFailureDetectionTimer=_appLaunchFailureDetectionTimer - In the implementation block
@property (assign,nonatomic) char checkingASAMValidity;                                       //@synthesize checkingASAMValidity=_checkingASAMValidity - In the implementation block
@property (nonatomic,retain) NSMutableSet * reasonsToBlockAllEvents;                          //@synthesize reasonsToBlockAllEvents=_reasonsToBlockAllEvents - In the implementation block
@property (assign,nonatomic) unsigned appLaunchGeneration;                                    //@synthesize appLaunchGeneration=_appLaunchGeneration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientPortsToBundleIds;                    //@synthesize clientPortsToBundleIds=_clientPortsToBundleIds - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isInWorkspace,nonatomic,readonly) char inWorkspace; 
@property (nonatomic,readonly) char isPasscodeViewVisible; 
@property (nonatomic,readonly) char allowsMotion; 
@property (nonatomic,readonly) char allowsTripleClickSheet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(char)allowsMotion;
-(char)allowsTripleClickSheet;
-(char)_hasPasscode;
-(void)_updateMode:(unsigned)arg1 ;
-(void)setModeHistory:(NSMutableArray *)arg1 ;
-(GAXEventProcessor *)eventProcessor;
-(char)isInWorkspace;
-(id)_passcode;
-(void)_setPasscode:(id)arg1 ;
-(NSMutableArray *)modeHistory;
-(GAXBackboardServer *)backboardServer;
-(SCD_Struct_GA3)gaxState;
-(GAXProfileManager *)profileManager;
-(void)setAppManager:(GAXAppManager *)arg1 ;
-(void)backboardServer:(id)arg1 clientWentInvalid:(unsigned)arg2 ;
-(void)backboardServer:(id)arg1 passcodeDidChange:(id)arg2 ;
-(void)backboardServer:(id)arg1 gaxClientAppDidBecomeActive:(id)arg2 pid:(int)arg3 ;
-(void)backboardServer:(id)arg1 gaxClientDidLoad:(id)arg2 pid:(int)arg3 port:(unsigned)arg4 ;
-(void)deviceWasUnlockedWithBackboardServer:(id)arg1 ;
-(void)deviceWasLockedWithBackboardServer:(id)arg1 ;
-(void)backboardServer:(id)arg1 tripleClickSheetDidShow:(unsigned)arg2 ;
-(void)backboardServer:(id)arg1 voiceOverItemChooserDidShow:(unsigned)arg2 ;
-(void)backboardServer:(id)arg1 lockscreenUIIsShowing:(char)arg2 ;
-(void)backboardServer:(id)arg1 whitelistedLockscreenUIIsShowing:(char)arg2 withIdentifier:(id)arg3 ;
-(void)backboardServer:(id)arg1 sbMiniAlertIsShowing:(char)arg2 ;
-(void)backboardServer:(id)arg1 isMakingEmergencyCall:(char)arg2 ;
-(void)backboardServerPresentGuidedAccessActiveBanner:(id)arg1 ;
-(int)activeAppInterfaceOrientationWithBackboardServer:(id)arg1 ;
-(void)backboardServer:(id)arg1 didFinishLaunchingApplicationWithConfiguration:(unsigned)arg2 appLaunchGeneration:(unsigned)arg3 errorMessage:(id)arg4 ;
-(void)systemDidRestartDueToLowBatteryWithBackboardServer:(id)arg1 ;
-(int)backboardServer:(id)arg1 restrictionStateForIdentifier:(id)arg2 ;
-(char)backboardServer:(id)arg1 isRectInIgnoredRegion:(CGRect)arg2 rectContextId:(unsigned)arg3 ;
-(char)areKeyboardsDisabledForViewServicesWithBackboardServer:(id)arg1 ;
-(unsigned)appLaunchGenerationWithBackboardServer:(id)arg1 ;
-(void)didFinishVerificationWithIntegrityVerifier:(id)arg1 ;
-(void)willBeginVerificationWithIntegrityVerifier:(id)arg1 ;
-(char)shouldProceedWithVerificationForIntegrityVerifier:(id)arg1 ;
-(char)deviceIsInLostModeForIntegrityVerifier:(id)arg1 ;
-(char)frontmostAppIsAcceptableForSessionAppWithIntegrityVerifier:(id)arg1 ;
-(char)willStartSessionWhenFrontmostAppChangesForIntegrityVerifier:(id)arg1 ;
-(char)appLayoutIsMultiAppForIntegrityVerifier:(id)arg1 ;
-(char)sessionAppGAXClientDidCheckInForIntegrityVerifier:(id)arg1 ;
-(id)expectedSessionAppIdentifierForIntegrityVerifier:(id)arg1 ;
-(SCD_Struct_GA3)gaxStateForIntegrityVerifier:(id)arg1 ;
-(void)attemptAppRelaunchWithIntegrityVerifier:(id)arg1 ;
-(char)sessionAppIsRelaunchableForIntegrityVerifier:(id)arg1 ;
-(char)sessionAppIsPreferencesForIntegrityVerifier:(id)arg1 ;
-(char)hasSystemPasscodeForIntegrityVerifier:(id)arg1 ;
-(unsigned)sessionAppRelaunchAttemptsForIntegrityVerifier:(id)arg1 ;
-(void)didVerifyEvent:(unsigned)arg1 withOutcome:(unsigned)arg2 withIntegrityVerifier:(id)arg3 ;
-(id)profileManagerSessionAppID:(id)arg1 ;
-(void)didExitSingleAppModeWithProfileManager:(id)arg1 ;
-(void)didExitAppSelfLockModeWithProfileManager:(id)arg1 ;
-(void)didEnterAppSelfLockModeWithProfileManager:(id)arg1 ;
-(void)didEnterSingleAppModeWithProfileManager:(id)arg1 ;
-(void)appDidChangeForSingleAppModeWithProfileManager:(id)arg1 ;
-(void)appDidChangeForAppSelfLockModeWithProfileManager:(id)arg1 ;
-(void)applyUnmanagedSelfLockStaticRestrictionsWithProfileManager:(id)arg1 ;
-(void)removeUnmanagedSelfLockStaticRestrictionsWithProfileManager:(id)arg1 ;
-(void)timeRestrictionWasCancelled:(id)arg1 ;
-(void)timeDidExpireForTimeRestriction:(id)arg1 ;
-(void)timeAlarmDidOccurForTimeRestriction:(id)arg1 ;
-(SCD_Struct_GA3)gaxStateWithGAXEventProcessor:(id)arg1 ;
-(id)reasonsToBlockAllEventsWithEventProcessor:(id)arg1 ;
-(void)eventProcessor:(id)arg1 transitionToMode:(unsigned)arg2 ;
-(void)unlockDeviceWithEventProcessor:(id)arg1 ;
-(void)eventProcessor:(id)arg1 showAlertWithType:(int)arg2 ;
-(void)monitorForTouchIDWithEventProcessor:(id)arg1 showAlertOnFailure:(char)arg2 ;
-(void)eventProcessor:(id)arg1 updateAssistiveTouchBootstrapPort:(unsigned)arg2 ;
-(void)eventProcessor:(id)arg1 shouldAllowTripleClickSheet:(char*)arg2 tripleClickAlertIsVisible:(char*)arg3 ;
-(id)ignoredTouchRegionsForEventProcessor:(id)arg1 ;
-(void)setClientPortsToBundleIds:(NSMutableDictionary *)arg1 ;
-(void)setUnmanagedASAMFailsafeTimer:(AXDispatchTimer *)arg1 ;
-(void)setAppLaunchFailureDetectionTimer:(AXDispatchTimer *)arg1 ;
-(void)setReasonsToBlockAllEvents:(NSMutableSet *)arg1 ;
-(void)setEventProcessor:(GAXEventProcessor *)arg1 ;
-(void)setIntegrityVerifier:(GAXVerifier *)arg1 ;
-(void)setUserInterfaceClient:(AXUIClient *)arg1 ;
-(void)setBackboardServer:(GAXBackboardServer *)arg1 ;
-(void)_clearSavedActiveAppIDAfterRelaunchIfNeeeded;
-(void)_clearSavedTimeRestrictionsSettingsAfterRelaunchIfNeeded;
-(char)wantsSingleAppMode;
-(void)_updateIsInitializingAndWasActiveBeforeReboot:(char)arg1 ;
-(void)setProfileManager:(GAXProfileManager *)arg1 ;
-(void)setTimeRestrictionManager:(GAXTimeRestrictionManager *)arg1 ;
-(void)setAxFeatureManager:(GAXAccessibilityFeatureManager *)arg1 ;
-(void)_prepareGuidedAccessAfterConnectingToSpringboard:(char)arg1 ;
-(void)_handleSpringboardDidGoInvalid;
-(void)setSpringboardDiedObserverToken:(id)arg1 ;
-(void)setAppLaunchGeneration:(unsigned)arg1 ;
-(AXDispatchTimer *)appLaunchFailureDetectionTimer;
-(void)_launchSessionApp;
-(GAXVerifier *)integrityVerifier;
-(void)_prepareGuidedAccessAfterConnectingToSpringboard:(char)arg1 springBoardPID:(int)arg2 ;
-(void)_prepareGuidedAccessAfterConnectingToSpringboard:(char)arg1 springBoardPID:(int)arg2 screenLocked:(char)arg3 ;
-(char)_hasSystemPasscode;
-(void)_transitionToMode:(unsigned)arg1 requireUserUnlock:(char)arg2 ;
-(void)_resetOverrideTouchReasons;
-(void)_updateSessionAppWithIdentifier:(id)arg1 ;
-(void)_updateSessionAppForSingleAppMode;
-(void)_handleToggleServerModeNotification:(id)arg1 ;
-(void)_handleAssistiveTouchEnabledNotification:(id)arg1 ;
-(id)springboardDiedObserverToken;
-(GAXTimeRestrictionManager *)timeRestrictionManager;
-(AXUIClient *)userInterfaceClient;
-(void)setIgnoredTouchRegions:(NSArray *)arg1 ;
-(AXAccessQueueTimer *)substantialTransitionTimer;
-(void)setSubstantialTransitionTimer:(AXAccessQueueTimer *)arg1 ;
-(char)appIsAllowedToSelfLock:(id)arg1 ;
-(char)wantsSingleAppModeOrAppSelfLockMode;
-(void)_setTimeRestrictionHasExpired:(char)arg1 ;
-(char)_hasTimeRestrictionExpired;
-(GAXAccessibilityFeatureManager *)axFeatureManager;
-(double)lastAlertDisplayedTimeInterval;
-(void)setLastAlertDisplayedTimeInterval:(double)arg1 ;
-(void)_showAlertWithTextType:(int)arg1 asBanner:(char)arg2 isUrgent:(char)arg3 timeRestrictionsEnabled:(char)arg4 remainingTime:(int)arg5 effectiveAppName:(id)arg6 ;
-(void)_showAlertWithTextType:(int)arg1 asBanner:(char)arg2 isUrgent:(char)arg3 timeRestrictionsEnabled:(char)arg4 remainingTime:(int)arg5 ;
-(void)_applyDeniedStatesForRestrictions;
-(NSMutableDictionary *)clientPortsToBundleIds;
-(void)_handleUpdateGAXClientState;
-(void)setWasEverActiveInCurrentFrontmostApp:(char)arg1 ;
-(char)shouldStartSessionUponFrontmostAppChanged;
-(void)_transitionToMode:(unsigned)arg1 ;
-(void)_updateRestrictedState:(char)arg1 ;
-(void)setShouldStartSessionUponFrontmostAppChanged:(char)arg1 ;
-(void)presentStandardActiveTopBanner;
-(unsigned)appLaunchGeneration;
-(id)_accessIgnoredTouchRegions;
-(void)_showAlertWithTextType:(int)arg1 asBanner:(char)arg2 isUrgent:(char)arg3 ;
-(void)setDesiredModeAfterSuccessfulPasscodeEntry:(unsigned)arg1 ;
-(void)setPasscodeEntryFailedCount:(unsigned)arg1 ;
-(void)setLastLockoutStartedTimeInterval:(double)arg1 ;
-(unsigned)passcodeEntryFailedCount;
-(double)_remainingLockoutDuration;
-(unsigned)desiredModeAfterSuccessfulPasscodeEntry;
-(void)_notifyOfGAXBackboardStateChange;
-(void)_persistInterestAreaPathsForStorageFromMessage:(id)arg1 forInterfaceOrientation:(int)arg2 ;
-(id)_unarchivedIgnoredTouchRegionsWithDataArray:(id)arg1 ;
-(void)_transitionToMode:(unsigned)arg1 requireUserUnlock:(char)arg2 assumeUserInterfaceConnectionSevered:(char)arg3 ;
-(void)removeReasonToBlockAllEvents:(id)arg1 ;
-(void)_verificationWillPauseForSpringBoardRelaunch;
-(void)addReasonToBlockAllEvents:(id)arg1 ;
-(id)currentReasonsToBlockAllEvents;
-(void)monitorForTouchIDShowingAlertOnFailure:(char)arg1 ;
-(NSArray *)ignoredTouchRegions;
-(void)_handleServerModeChangeRequestWithType:(int)arg1 ;
-(void)_transitionToMode:(unsigned)arg1 requireUserUnlock:(char)arg2 assumeUserInterfaceConnectionSevered:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_disableSOSGesture:(char)arg1 ;
-(void)_updateSessionAppWithIdentifier:(id)arg1 notifyUserInterfaceServer:(char)arg2 sessionAppIdentifierDidChange:(char*)arg3 ;
-(char)_isPasscodeStale;
-(void)_didFinishTransitioningFromWorkspaceToSession;
-(AXDispatchTimer *)unmanagedASAMFailsafeTimer;
-(void)_didFinishTransitioningFromWorkspaceToApplication;
-(char)_isAllowingAllTouchByOverride;
-(char)_isIgnoringAllTouchByOverride;
-(unsigned)_availabilityForRequestType:(int)arg1 springboardParameters:(id)arg2 ;
-(unsigned)_SBServerQueryForAvailabilitySBParameters;
-(id)_errorMessageForAvailability:(unsigned)arg1 ;
-(char)_shouldAllowDirectInactiveToActiveTransition;
-(unsigned)_previousModeIgnoringWorkspace:(char)arg1 ;
-(void)_applyChangedStatesForRestrictions;
-(void)_applyAllowedStatesForRestrictions;
-(void)_clearChangedStatesForRestrictions;
-(double)lastLockoutStartedTimeInterval;
-(void)_showAlertWithTextType:(int)arg1 asBanner:(char)arg2 isUrgent:(char)arg3 effectiveAppName:(id)arg4 ;
-(void)_showUnmanagedASAMBannerWithType:(int)arg1 ;
-(char)checkingASAMValidity;
-(void)setCheckingASAMValidity:(char)arg1 ;
-(char)processWithAuditTokenIsEntitledForUnmanagedASAM:(SCD_Struct_GA4)arg1 ;
-(void)_showUnmanagedASAMTimedOutBanner;
-(void)_showUnmanagedASAMBeganBanner;
-(void)userConfirmUnmanagedASAMForAppWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showUnmanagedASAMEndedBanner;
-(void)_notifyEffectiveAppDidChange:(id)arg1 ;
-(char)_gaxShouldRemainEnabledByManagedConfiguration;
-(char)wantsAppSelfLockMode;
-(id)_debugGAXDescription;
-(void)_handleSubstationalTransition;
-(void)_handleLostModeChanged;
-(void)purpleBuddyDidTerminateWithAppManager:(id)arg1 ;
-(void)effectiveAppDidChange:(id)arg1 withAppManager:(id)arg2 ;
-(void)effectiveAppDidBecomeInvalidWithAppManager:(id)arg1 ;
-(NSMutableSet *)reasonsToBlockAllEvents;
-(char)sessionAppIsPurpleBuddyForIntegrityVerifier:(id)arg1 ;
-(void)_handleTelephonyCallStatusChangedNotification:(id)arg1 ;
-(char)isPasscodeViewVisible;
-(id)_availabilitySpringboardParametersFromSystemAppInfoQuery:(id)arg1 ;
-(char)wasEverActiveInCurrentFrontmostApp;
-(void)homeClickSwallowedInSpringBoard;
-(unsigned)availabilityForExternalRequestWithSpringboardParameters:(id)arg1 ;
-(void)handleGuidedAccessAutomationCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setEnabled:(char)arg1 fromAppWithIdentifier:(id)arg2 withAuditToken:(SCD_Struct_GA4)arg3 completion:(/*^block*/id)arg4 ;
-(char)isSelfLockedToAppWithIdentifier:(id)arg1 ;
-(char)isUnmanagedSelfLocked;
-(NSString *)eventTapIdentifier;
-(void)setEventTapIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(char)isActive;
-(GAXSettings *)settings;
-(int)activeInterfaceOrientation;
-(char)isLocked;
-(void)setLocked:(char)arg1 ;
-(char)_isRunningInStoreDemoMode;
-(GAXAppManager *)appManager;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned)arg3 error:(id*)arg4 ;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned)arg2 ;
-(char)userInterfaceClient:(id)arg1 messageWithIdentifierRequiresWritingBlock:(unsigned)arg2 ;
-(void)userInterfaceClient:(id)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(id)arg2 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(AXAssertion *)disableSystemGesturesAssertion;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(void)setActiveInterfaceOrientation:(int)arg1 ;
-(void)_performValidation;
@end
