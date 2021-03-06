/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAlertAdapter.h>
#import <SpringBoard/_SBRemoteAlertHostViewControllerDelegate.h>
#import <libobjc.A.dylib/SBRemoteAlert.h>

@protocol SBRemoteAlertDelegate;
@class _SBRemoteAlertHostViewController, NSString, NSMutableSet;

@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate, SBRemoteAlert> {

	_SBRemoteAlertHostViewController* _remoteAlertHostViewController;
	id<SBRemoteAlertDelegate> _remoteAlertDelegate;
	NSString* _impersonatedApplicationBundleID;
	char _dismissWithHomeButton;
	char _userRequestedHomeButtonDismissal;
	int _desiredButtonEvents;
	char _wantsWallpaperTunnel;
	char _hasTranslucentBackground;
	int _requestedBackgroundStyle;
	char _allowsAlertStacking;
	int _dismissalAnimationStyle;
	char _disableFadeInAnimation;
	NSMutableSet* _idleTimerDisabledReasons;
	double _requestedAutoLockTime;
	char _hasCustomStatusBarStyle;
	int _customStatusBarStyle;
	int _desiredStatusBarStyleOverrides;
	char _wantsToShowStatusBar;
	char _wantsToManageStatusBarAtActivation;
	char _canManageStatusBarVisibility;
	char _suppressesSiri;
	char _activatedForSiri;
	char _dismissOnUILock;
	int _desiredLaunchingInterfaceOrientation;
	char _dontCancelStatusBarStyleOverrides;
	/*^block*/id _clientActivationHandler;
	/*^block*/id _clientDeactivationHandler;
	int _whitePointAdaptivityStyle;
	char _forCarPlay;
	char _canChangePendingOfAlertItems;
	char _beingPresentedObscured;

}

@property (assign,nonatomic) int requestedBackgroundStyle;                                             //@synthesize requestedBackgroundStyle=_requestedBackgroundStyle - In the implementation block
@property (assign,nonatomic) char activatedForSiri;                                                    //@synthesize activatedForSiri=_activatedForSiri - In the implementation block
@property (getter=_isForCarPlay,nonatomic,readonly) char forCarPlay;                                   //@synthesize forCarPlay=_forCarPlay - In the implementation block
@property (nonatomic,readonly) int dismissalAnimationStyle;                                            //@synthesize dismissalAnimationStyle=_dismissalAnimationStyle - In the implementation block
@property (nonatomic,readonly) char userRequestedHomeButtonDismissal;                                  //@synthesize userRequestedHomeButtonDismissal=_userRequestedHomeButtonDismissal - In the implementation block
@property (nonatomic,readonly) char wantsWallpaperTunnel;                                              //@synthesize wantsWallpaperTunnel=_wantsWallpaperTunnel - In the implementation block
@property (nonatomic,readonly) char dismissOnUILock;                                                   //@synthesize dismissOnUILock=_dismissOnUILock - In the implementation block
@property (nonatomic,readonly) char disablesFadeInAnimation;                                           //@synthesize disableFadeInAnimation=_disableFadeInAnimation - In the implementation block
@property (nonatomic,__weak,readonly) NSString * serviceBundleIdentifier; 
@property (assign,getter=isBeingPresentedObscured,nonatomic) char beingPresentedObscured;              //@synthesize beingPresentedObscured=_beingPresentedObscured - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SBRemoteAlertDelegate> remoteAlertDelegate;                   //@synthesize remoteAlertDelegate=_remoteAlertDelegate - In the implementation block
+(void)requestRemoteViewService:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_requestWithServiceName:(id)arg1 serviceClass:(id)arg2 context:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)requestWithDefinition:(id)arg1 context:(id)arg2 delegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(int)dismissalAnimationStyle;
-(id)_impersonatesApplicationWithBundleID;
-(void)setActivationHandler:(/*^block*/id)arg1 deactivationHandler:(/*^block*/id)arg2 ;
-(char)matchesInCallUIService;
-(void)setBeingPresentedObscured:(char)arg1 ;
-(char)matchesRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(char)matchesAnyInCallService;
-(char)userRequestedHomeButtonDismissal;
-(double)autoLockTime;
-(char)_shouldDismissSwitcherOnActivation;
-(int)statusBarStyleOverridesToCancel;
-(char)shouldPendAlertItemsWhileActive;
-(char)managesOwnStatusBarAtActivation;
-(id)_displayLayoutElementIdentifier;
-(char)showsSpringBoardStatusBar;
-(char)suppressesNotificationCenter;
-(char)suppressesControlCenter;
-(char)allowsStackingOfAlert:(id)arg1 ;
-(char)suppressesSiri;
-(char)activatedForSiri;
-(int)requestedBackgroundStyle;
-(char)dismissOnUILock;
-(char)isBeingPresentedObscured;
-(void)setWantsToManageStatusBarAtActivation:(char)arg1 ;
-(void)setCanManageStatusBarVisibility:(char)arg1 ;
-(char)disablesFadeInAnimation;
-(char)wantsWallpaperTunnel;
-(char)_isForCarPlay;
-(void)noteShouldStopDisablingStatusBarOverrides;
-(void)remoteAlertWantsToAllowBanners:(char)arg1 ;
-(void)remoteAlertDidRequestDismissal;
-(void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(int)arg1 ;
-(void)remoteAlertWantsWallpaperTunnelActive:(char)arg1 ;
-(void)remoteAlertWantsToSetBackgroundStyle:(int)arg1 withDuration:(double)arg2 ;
-(void)remoteAlertWantsMenuButtonDismissal:(char)arg1 ;
-(void)remoteAlertWantsToAllowAlertStacking:(char)arg1 ;
-(void)remoteAlertWantsToSetDismissalAnimationStyle:(int)arg1 ;
-(void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)arg1 ;
-(void)remoteAlertWantsToSetIdleTimerDisabled:(char)arg1 forReason:(id)arg2 ;
-(void)remoteAlertWantsToSetAutoLockDuration:(double)arg1 ;
-(void)remoteAlertWantsToSetStatusBarHidden:(char)arg1 withDuration:(double)arg2 ;
-(void)remoteAlertWantsToDismissOnUILock:(char)arg1 ;
-(void)remoteAlertWantsToDisableFadeInAnimation:(char)arg1 ;
-(void)remoteAlertWantsToSetWhitePointAdaptivityStyle:(int)arg1 ;
-(void)remoteAlertDidTerminateWithError:(id)arg1 ;
-(id)_initWithRemoteAlertHostViewController:(id)arg1 ;
-(void)_cleanupIdleTimerDisabledReasons;
-(void)_setImpersonatedApplicationBundleID:(id)arg1 ;
-(void)_setDismissWithHomeButton:(char)arg1 ;
-(void)_setWantsWallpaperTunnel:(char)arg1 immediately:(char)arg2 ;
-(void)_setDismissalAnimationStyle:(int)arg1 ;
-(void)_setLaunchingInterfaceOrientation:(int)arg1 ;
-(void)setRequestedBackgroundStyle:(int)arg1 ;
-(void)_setHasTranslucentBackground:(char)arg1 ;
-(void)_setSuppressesSiri:(char)arg1 ;
-(void)setActivatedForSiri:(char)arg1 ;
-(void)_setCustomStatusBarStyle:(int)arg1 ;
-(void)_setShouldDisableFadeInAnimation:(char)arg1 ;
-(void)_updateStatusBarAssertion;
-(void)_didTerminateWithError:(id)arg1 ;
-(void)dealloc;
-(char)isRemote;
-(int)statusBarStyle;
-(int)preferredWhitePointAdaptivityStyle;
-(void)deactivate;
-(int)preferredInterfaceOrientationForPresentation;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_disconnect;
-(void)activate;
-(id)initWithViewController:(id)arg1 ;
-(id)legibilitySettings;
-(void)synchronizeAnimationsInActions:(/*^block*/id)arg1 ;
-(NSString *)serviceBundleIdentifier;
-(void)prepareForActivationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)handleVolumeUpButtonPressed;
-(char)handleVolumeDownButtonPressed;
-(char)handleHeadsetButtonPressed:(char)arg1 ;
-(char)handleButtonActions:(id)arg1 ;
-(void)handleDoubleHeightStatusBarTap;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1 ;
-(char)hasTranslucentBackground;
-(char)handleMenuButtonTap;
-(id<SBRemoteAlertDelegate>)remoteAlertDelegate;
-(char)handleLockButtonPressed;
@end

