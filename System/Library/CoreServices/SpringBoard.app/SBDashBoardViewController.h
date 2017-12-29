/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockScreenViewControllerBase.h>
#import <SpringBoard/SBDashBoardViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBDashBoardLegibilityProviderDelegate.h>
#import <SpringBoard/SBLockScreenActionProvider.h>
#import <SpringBoard/SBLockScreenPluginManagerDelegate.h>
#import <libobjc.A.dylib/SBFIrisWallpaperViewDelegate.h>
#import <SpringBoard/SBDashBoardViewTransitionSource.h>
#import <SpringBoard/SBDashBoardSlideUpToAppControllerDelegate.h>
#import <SpringBoard/SBDashBoardNotificationDestination.h>
#import <SpringBoard/SBLockScreenTimerViewControllerDelegate.h>
#import <SpringBoard/SBDashBoardMesaUnlockBehaviorConfigurationDelegate.h>
#import <SpringBoard/SBMesaUnlockBehaviorDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBDashBoardScrollGestureControllerDelegate.h>
#import <SpringBoard/SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate.h>
#import <SpringBoard/SBDashBoardViewControllerProtocol.h>

@protocol SBDashBoardViewControllerDelegate, SBDashBoardNotificationDispatcher, SBFIrisWallpaperView, SBWallpaperColorProvider, SBFLockOutStatusProvider, SBDashBoardViewTransitionSource;
@class SBLockScreenSettings, SBLockScreenPluginManager, SBSteppedAnimationTimingFunctionCalculator, SBDashBoardPluginViewController, NSHashTable, SBDashBoardNotificationDispatcher, FBDisplayLayoutTransition, SBDashBoardHomeButtonShowPasscodeRecognizer, SBDashBoardModalPresentationViewController, SBDashBoardSlidingPresentationViewController, SBDashBoardSlideUpToAppController, SBDashBoardChargingViewController, BSTimer, SBDashBoardMesaUnlockBehaviorConfiguration, SBDashBoardMesaUnlockBehavior, SBDashBoardIdleTimerEventPublisher, SBDashBoardBlockEventHandler, SBDashBoardScrollGestureController, SBDashBoardAppearance, SBDashBoardBehavior, SBMainDisplayPolicyAggregator, SBMainStatusBarStateProvider, NSArray, SBDashBoardMainPageViewController, SBDashBoardPresentation, SBLockScreenDateViewController, SBDashBoardPowerChangeObserver, SBLockScreenTimerViewController, SBDashBoardLegibilityProvider, SBLockScreenActionManager, SBFakeStatusBarView, SBAppStatusBarSettingsAssertion, SBWallpaperAggdLogger, SBDashBoardSetupViewController, NSString, NSSet, _UILegibilitySettings, UIColor;

@interface SBDashBoardViewController : SBLockScreenViewControllerBase <SBDashBoardViewDelegate, UIGestureRecognizerDelegate, SBDashBoardLegibilityProviderDelegate, SBLockScreenActionProvider, SBLockScreenPluginManagerDelegate, SBFIrisWallpaperViewDelegate, SBDashBoardViewTransitionSource, SBDashBoardSlideUpToAppControllerDelegate, SBDashBoardNotificationDestination, SBLockScreenTimerViewControllerDelegate, SBDashBoardMesaUnlockBehaviorConfigurationDelegate, SBMesaUnlockBehaviorDelegate, _UISettingsKeyObserver, SBDashBoardScrollGestureControllerDelegate, SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate, SBDashBoardViewControllerProtocol> {

	SBLockScreenSettings* _prototypeSettings;
	char _screenOffMode;
	char _hasContentAboveDashBoard;
	char _preventAppearanceUpdatesForRotation;
	SBLockScreenPluginManager* _pluginManager;
	SBSteppedAnimationTimingFunctionCalculator* _interactiveAnimationCalculator;
	SBDashBoardPluginViewController* _pluginViewController;
	int _pluginViewControllerPresentationStyle;
	NSHashTable* _externalBehaviorProviders;
	NSHashTable* _externalEventHandlers;
	NSHashTable* _externalPresentationProviders;
	NSHashTable* _observers;
	NSHashTable* _applicationHosters;
	SBDashBoardNotificationDispatcher* _notificationDispatcher;
	int _transitionType;
	SCD_Struct_SB30 _transitionContext;
	FBDisplayLayoutTransition* _displayLayoutTransition;
	int _participantState;
	char _transitionDisabledIdleTimer;
	SBDashBoardHomeButtonShowPasscodeRecognizer* _homeButtonShowPasscodeRecognizer;
	SBDashBoardModalPresentationViewController* _modalPresentationController;
	SBDashBoardSlidingPresentationViewController* _bottomPresentationController;
	SBDashBoardSlideUpToAppController* _slideUpToAppController;
	SBDashBoardChargingViewController* _chargingViewController;
	BSTimer* _chargingViewControllerTimer;
	SBDashBoardMesaUnlockBehaviorConfiguration* _mesaUnlockBehaviorConfiguration;
	SBDashBoardMesaUnlockBehavior* _mesaUnlockBehavior;
	SBDashBoardIdleTimerEventPublisher* _idleTimerEventPublisher;
	SBDashBoardBlockEventHandler* _redirectHandler;
	SBDashBoardScrollGestureController* _scrollGestureController;
	char _listeningForDisplayLayoutChanges;
	char _screenOnForLiftToWake;
	char _statusBarInLockdownForTeardown;
	char _irisPlayerIsInteracting;
	char _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
	id<SBDashBoardViewControllerDelegate> _delegate;
	SBDashBoardAppearance* _activeAppearance;
	SBDashBoardBehavior* _activeBehavior;
	id<SBDashBoardNotificationDispatcher> _dispatcher;
	SBMainDisplayPolicyAggregator* _policyAggregator;
	SBMainStatusBarStateProvider* _statusBarStateProvider;
	id<SBFIrisWallpaperView> _irisWallpaperView;
	id<SBWallpaperColorProvider> _wallpaperColorProvider;
	NSArray* _pageViewControllers;
	NSArray* _allowedPageViewControllers;
	SBDashBoardMainPageViewController* _mainPageViewController;
	unsigned _lastSettledPageIndex;
	SBDashBoardBehavior* _localBehavior;
	SBDashBoardBehavior* _irisBehavior;
	SBDashBoardBehavior* _setupBehavior;
	float _appearanceFraction;
	SBDashBoardAppearance* _previousAppearance;
	SBDashBoardAppearance* _localAppearance;
	SBDashBoardPresentation* _activePresentation;
	SBLockScreenDateViewController* _dateViewController;
	SBDashBoardPowerChangeObserver* _powerChangeObserver;
	SBLockScreenTimerViewController* _timerViewController;
	SBDashBoardLegibilityProvider* _legibilityProvider;
	SBLockScreenActionManager* _lockScreenActionManager;
	SBFakeStatusBarView* _fakeStatusBarView;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertionForScrolling;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;
	id<SBFLockOutStatusProvider> _lockOutController;
	id<SBDashBoardViewTransitionSource> _currentTransitionSource;
	SBDashBoardSetupViewController* _setupController;

}

@property (setter=_setPageViewControllers:,nonatomic,copy) NSArray * pageViewControllers;                                                                          //@synthesize pageViewControllers=_pageViewControllers - In the implementation block
@property (setter=_setAllowedPageViewControllers:,getter=_allowedPageViewControllers,nonatomic,copy) NSArray * allowedPageViewControllers;                         //@synthesize allowedPageViewControllers=_allowedPageViewControllers - In the implementation block
@property (setter=_setMainPageViewController:,nonatomic,retain) SBDashBoardMainPageViewController * mainPageViewController;                                        //@synthesize mainPageViewController=_mainPageViewController - In the implementation block
@property (assign,nonatomic) unsigned lastSettledPageIndex;                                                                                                        //@synthesize lastSettledPageIndex=_lastSettledPageIndex - In the implementation block
@property (nonatomic,copy) SBDashBoardBehavior * activeBehavior;                                                                                                   //@synthesize activeBehavior=_activeBehavior - In the implementation block
@property (nonatomic,retain) SBDashBoardBehavior * localBehavior;                                                                                                  //@synthesize localBehavior=_localBehavior - In the implementation block
@property (nonatomic,retain) SBDashBoardBehavior * irisBehavior;                                                                                                   //@synthesize irisBehavior=_irisBehavior - In the implementation block
@property (nonatomic,retain) SBDashBoardBehavior * setupBehavior;                                                                                                  //@synthesize setupBehavior=_setupBehavior - In the implementation block
@property (assign,nonatomic) float appearanceFraction;                                                                                                             //@synthesize appearanceFraction=_appearanceFraction - In the implementation block
@property (nonatomic,copy) SBDashBoardAppearance * activeAppearance;                                                                                               //@synthesize activeAppearance=_activeAppearance - In the implementation block
@property (nonatomic,copy) SBDashBoardAppearance * previousAppearance;                                                                                             //@synthesize previousAppearance=_previousAppearance - In the implementation block
@property (nonatomic,copy) SBDashBoardAppearance * localAppearance;                                                                                                //@synthesize localAppearance=_localAppearance - In the implementation block
@property (nonatomic,retain) SBDashBoardPresentation * activePresentation;                                                                                         //@synthesize activePresentation=_activePresentation - In the implementation block
@property (nonatomic,retain) SBLockScreenDateViewController * dateViewController;                                                                                  //@synthesize dateViewController=_dateViewController - In the implementation block
@property (nonatomic,retain) SBDashBoardPowerChangeObserver * powerChangeObserver;                                                                                 //@synthesize powerChangeObserver=_powerChangeObserver - In the implementation block
@property (nonatomic,retain) SBLockScreenTimerViewController * timerViewController;                                                                                //@synthesize timerViewController=_timerViewController - In the implementation block
@property (nonatomic,retain) SBDashBoardLegibilityProvider * legibilityProvider;                                                                                   //@synthesize legibilityProvider=_legibilityProvider - In the implementation block
@property (nonatomic,retain) SBLockScreenActionManager * lockScreenActionManager;                                                                                  //@synthesize lockScreenActionManager=_lockScreenActionManager - In the implementation block
@property (nonatomic,retain) SBFakeStatusBarView * fakeStatusBarView;                                                                                              //@synthesize fakeStatusBarView=_fakeStatusBarView - In the implementation block
@property (nonatomic,retain) SBAppStatusBarSettingsAssertion * statusBarAssertion;                                                                                 //@synthesize statusBarAssertion=_statusBarAssertion - In the implementation block
@property (nonatomic,retain) SBAppStatusBarSettingsAssertion * hideStatusBarAssertionForScrolling;                                                                 //@synthesize hideStatusBarAssertionForScrolling=_hideStatusBarAssertionForScrolling - In the implementation block
@property (assign,nonatomic) char irisPlayerIsInteracting;                                                                                                         //@synthesize irisPlayerIsInteracting=_irisPlayerIsInteracting - In the implementation block
@property (assign,nonatomic) char shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;                                                                        //@synthesize shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes=_shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes - In the implementation block
@property (nonatomic,retain) SBWallpaperAggdLogger * wallpaperAggdLogger;                                                                                          //@synthesize wallpaperAggdLogger=_wallpaperAggdLogger - In the implementation block
@property (nonatomic,retain) SBDashBoardModalPresentationViewController * modalPresentationController;                                                             //@synthesize modalPresentationController=_modalPresentationController - In the implementation block
@property (setter=_setLockOutController:,getter=_lockOutController,nonatomic,retain) id<SBFLockOutStatusProvider> lockOutController;                               //@synthesize lockOutController=_lockOutController - In the implementation block
@property (nonatomic,retain) id<SBDashBoardViewTransitionSource> currentTransitionSource;                                                                          //@synthesize currentTransitionSource=_currentTransitionSource - In the implementation block
@property (nonatomic,retain) SBDashBoardSetupViewController * setupController;                                                                                     //@synthesize setupController=_setupController - In the implementation block
@property (setter=_setMainDisplayPolicyAggregator:,getter=_policyAggregator,nonatomic,retain) SBMainDisplayPolicyAggregator * policyAggregator;                    //@synthesize policyAggregator=_policyAggregator - In the implementation block
@property (setter=_setStatusBarStateProvider:,getter=_statusBarStateProvider,nonatomic,retain) SBMainStatusBarStateProvider * statusBarStateProvider;              //@synthesize statusBarStateProvider=_statusBarStateProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardViewControllerDelegate> delegate;                                                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SBFIrisWallpaperView> irisWallpaperView;                                                                                           //@synthesize irisWallpaperView=_irisWallpaperView - In the implementation block
@property (assign,nonatomic,__weak) id<SBWallpaperColorProvider> wallpaperColorProvider;                                                                           //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (nonatomic,readonly) id<SBAlertingNotificationDestination> notificationDestination; 
@property (nonatomic,readonly) char hasContentAboveDashBoard;                                                                                                      //@synthesize hasContentAboveDashBoard=_hasContentAboveDashBoard - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) int participantState; 
@property (getter=isTransitioning,nonatomic,readonly) char transitioning; 
@property (nonatomic,readonly) SCD_Struct_SB17 transitionContext;                                                                                                  //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardNotificationDispatcher> dispatcher;                                                                              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) int backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) int idleTimerDuration; 
@property (nonatomic,readonly) int idleTimerMode; 
@property (nonatomic,readonly) int idleWarnMode; 
@property (nonatomic,readonly) int scrollingStrategy; 
@property (nonatomic,readonly) int notificationBehavior; 
@property (nonatomic,readonly) unsigned restrictedCapabilities; 
@property (nonatomic,readonly) int proximityDetectionMode; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (assign,nonatomic,__weak) id<SBDashBoardViewPresenting> presenter; 
@property (nonatomic,readonly) int presentationStyle; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) int presentationTransition; 
@property (nonatomic,readonly) int presentationPriority; 
@property (nonatomic,readonly) int presentationAltitude; 
@property (nonatomic,copy,readonly) SBDashBoardPresentation * externalPresentation; 
-(char)isMainPageVisible;
-(char)hasContentAboveDashBoard;
-(SBDashBoardAppearance *)activeAppearance;
-(int)presentationPriority;
-(NSString *)dashBoardIdentifier;
-(NSString *)appearanceIdentifier;
-(char)isShowingOverheatUI;
-(char)isInScreenOffMode;
-(id)hostedApp;
-(char)isHostingAnApp;
-(id)_lockOutController;
-(char)isShowingMediaControls;
-(char)handleTransitionRequest:(id)arg1 ;
-(char)_shouldDismissSwitcherOnActivation;
-(int)statusBarStyleOverridesToCancel;
-(char)isNotificationContentExtensionVisible:(id)arg1 ;
-(char)managesOwnStatusBarAtActivation;
-(void)updateBehaviorForController:(id)arg1 ;
-(void)updateAppearanceForController:(id)arg1 ;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(SBDashBoardPresentation *)externalPresentation;
-(int)presentationAltitude;
-(int)scrollingStrategy;
-(int)proximityDetectionMode;
-(int)idleTimerDuration;
-(int)idleWarnMode;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(NSArray *)presentationRegions;
-(char)wouldHandleButtonEvent:(id)arg1 ;
-(char)canHostAnApp;
-(void)hostedAppWillRotateToInterfaceOrientation:(int)arg1 ;
-(id)dashBoardView;
-(id)_todayViewController;
-(SBDashBoardMainPageViewController *)mainPageViewController;
-(id)pageViewControllerAtIndex:(unsigned)arg1 ;
-(void)setPasscodeLockVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(char)showsSpringBoardStatusBar;
-(char)suppressesBanners;
-(char)suppressesNotificationCenter;
-(char)suppressesControlCenter;
-(char)allowsStackingOfAlert:(id)arg1 ;
-(void)didStackWithAlert:(id)arg1 ;
-(char)wantsTimeInStatusBar;
-(void)displayWillAppear;
-(void)displayWillDisappear;
-(void)displayDidDisappear;
-(void)_deactivateLayoutElement;
-(id)_policyAggregator;
-(void)enableLockScreenPluginWithContext:(id)arg1 ;
-(void)disableLockScreenPluginWithContext:(id)arg1 ;
-(SBAppStatusBarSettingsAssertion *)statusBarAssertion;
-(void)setStatusBarAssertion:(SBAppStatusBarSettingsAssertion *)arg1 ;
-(char)shouldAutoUnlockForSource:(int)arg1 ;
-(void)transitionSource:(id)arg1 didEndWithContext:(SCD_Struct_SB17)arg2 ;
-(void)slideController:(id)arg1 didUpdateWithApplicationWithBundleIdentifier:(id)arg2 ;
-(void)slideController:(id)arg1 prepareForSlideUpAppLaunchAnimated:(char)arg2 ;
-(char)slideControllerShouldBeginSliding:(id)arg1 ;
-(void)transitionSource:(id)arg1 willBeginWithType:(int)arg2 ;
-(void)transitionSource:(id)arg1 didUpdateTransitionWithContext:(SCD_Struct_SB17)arg2 ;
-(void)slideController:(id)arg1 requestedUnlockWithActionBlock:(/*^block*/id)arg2 ;
-(id)slideControllerRequestedGrabberView:(id)arg1 ;
-(void)startHostingWallpaperOverlay:(id)arg1 ;
-(id)relinquishHostingOfWallpaperOverlay;
-(void)activateTodayViewWithCompletion:(/*^block*/id)arg1 ;
-(char)isShowingTodayView;
-(void)timerControllerDidStopTimer:(id)arg1 ;
-(void)timerControllerDidStartTimer:(id)arg1 ;
-(void)dashBoardLegibilityProviderDidUpdate:(id)arg1 ;
-(void)mesaUnlockBehaviorConfigurationDidChange:(id)arg1 ;
-(id)lockScreenActionContext;
-(id)initWithPageViewControllers:(id)arg1 mainPageViewController:(id)arg2 legibilityProvider:(id)arg3 ;
-(void)_setPageViewControllers:(id)arg1 ;
-(void)_setAllowedPageViewControllers:(id)arg1 ;
-(void)_setMainPageViewController:(id)arg1 ;
-(void)_displayWillTurnOnWhileOnDashBoard:(id)arg1 ;
-(void)_policyAggregatorCapabilitiesChanged:(id)arg1 ;
-(void)_setupModeChanged:(id)arg1 ;
-(void)_powerStatusChangedToConnectedState:(char)arg1 ;
-(void)_setLockOutController:(id)arg1 ;
-(unsigned)_indexOfTodayPage;
-(void)activatePage:(unsigned)arg1 animated:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned)_indexOfMainPage;
-(void)_updateActiveBehaviorsForReason:(id)arg1 ;
-(id)visiblePageViewController;
-(void)_updateActiveAppearanceForReason:(id)arg1 ;
-(void)_loadViewsForRestrictedPagesIfPossible;
-(void)_beginAppearanceTransitionForPageViewControllersToVisible:(char)arg1 animated:(char)arg2 ;
-(void)noteDeviceBlockedStatusUpdated;
-(void)_updateScrollingBehavior;
-(void)_setupIrisWallpaperGesture;
-(void)_endAppearanceTransitionForPageViewControllersToVisible:(char)arg1 ;
-(char)_handleEventType:(int)arg1 ;
-(void)_setHasContentAboveDashBoard:(char)arg1 ;
-(void)_listenForDisplayLayoutChanges:(char)arg1 ;
-(void)setActiveAppearance:(SBDashBoardAppearance *)arg1 ;
-(void)_displayLayoutDidUpdate:(id)arg1 ;
-(void)_invalidateStatusBarAssertions;
-(char)_isPresentingModalViewControllerWithIdentifier:(id)arg1 ;
-(char)isUnlockDisabled;
-(void)_presentModalViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissModalViewControllersWithIdentifier:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_transitionChargingViewToVisible:(char)arg1 showBattery:(char)arg2 animated:(char)arg3 ;
-(char)_dismissAppBelowDashBoard:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addOrRemoveThermalTrapViewIfNecessaryAnimated:(char)arg1 ;
-(void)_addOrRemoveBlockedViewIfNecessaryAnimated:(char)arg1 ;
-(void)_addOrRemoveResetRestoreViewIfNecessaryAnimated:(char)arg1 ;
-(void)_addOrRemoveSetupViewIfNecessaryAnimated:(char)arg1 ;
-(void)_updateModalPresentationControllerVisibility;
-(SBDashBoardModalPresentationViewController *)modalPresentationController;
-(unsigned)_indexOfCameraPage;
-(char)_canHandleTransitionRequest:(id)arg1 ;
-(void)activateCameraAnimated:(char)arg1 withActions:(id)arg2 ;
-(void)_activateAppBelowDashBoard:(id)arg1 withActions:(id)arg2 ;
-(SBDashBoardAppearance *)previousAppearance;
-(char)allowSystemGestureAtLocation:(CGPoint)arg1 ;
-(id<SBDashBoardViewTransitionSource>)currentTransitionSource;
-(SBDashBoardPresentation *)activePresentation;
-(id)_presentationForParticipant:(id)arg1 ;
-(void)_setBottomPresentationControllerVisibility:(char)arg1 ;
-(void)_setModalPresentationControllerVisibility:(char)arg1 ;
-(void)_dismissModalViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_resetIdleTimerIfTopMost;
-(void)setPreviousAppearance:(SBDashBoardAppearance *)arg1 ;
-(char)_isSourceForHorizontalScrolling:(id)arg1 ;
-(id)_allowedPageViewControllers;
-(char)_isPageContentHidden;
-(SBDashBoardBehavior *)irisBehavior;
-(SBWallpaperAggdLogger *)wallpaperAggdLogger;
-(void)_updateUIForPlaying:(char)arg1 immediately:(char)arg2 ;
-(void)_dismissPluginViewController:(id)arg1 withStyle:(int)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_presentPluginViewController:(id)arg1 withStyle:(int)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setPluginViewController:(id)arg1 ;
-(void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(id<SBAlertingNotificationDestination>)notificationDestination;
-(void)handleBiometricEvent:(unsigned)arg1 ;
-(char)mesaUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2 ;
-(char)mesaUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3 ;
-(id)_activeViewControllers;
-(char)_gestureRecognizer:(id)arg1 isLocatedOverHorizontalContentRegionInViewController:(id)arg2 ;
-(char)_overSlidingControlForLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(unsigned)lastSettledPageIndex;
-(CGPoint)_slideableContentOffset;
-(char)_isSlideableContentOffsetOnscreen:(CGPoint)arg1 ;
-(void)_dismissApplicationWithCompletion:(/*^block*/id)arg1 ;
-(id)_eligiblePageViewControllers;
-(void)_addVisiblePageViewController:(id)arg1 ;
-(void)_removeAllowedPageViewController:(id)arg1 ;
-(void)_updateVisibilityForPageViewControllersWithVisiblePageViewController:(id)arg1 ;
-(unsigned)_indexOfPageViewControllerClass:(Class)arg1 ;
-(char)_isFadeInAnimationInProgress;
-(char)isTransitioningInteractively;
-(SBDashBoardAppearance *)localAppearance;
-(void)setAppearanceFraction:(float)arg1 ;
-(float)appearanceFraction;
-(void)setActivePresentation:(SBDashBoardPresentation *)arg1 ;
-(void)_updateLocalAppearanceForPresentation;
-(id)_appearanceForParticipant:(id)arg1 ;
-(CGPoint)_offsetForTransitionFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 timingFunction:(id)arg3 ;
-(float)_alphaForTransitionFromHidden:(char)arg1 toHidden:(char)arg2 timingFunction:(id)arg3 ;
-(void)_updateDateTimeView;
-(void)_updatePageContent;
-(void)_updateForegroundView;
-(void)_updateLegibilitySettings;
-(void)_updateWallpaperEffectView;
-(void)_updateTintingView;
-(char)_isSlideableContentOnscreen;
-(void)_updateCameraBehavior;
-(void)_updateNotificationsAndTodayViewBehavior;
-(void)_updateSetupBehavior;
-(void)_updateLiftToWakeBehavior;
-(id)_behaviorForParticipant:(id)arg1 ;
-(unsigned)_pageCapabilities;
-(SBDashBoardBehavior *)setupBehavior;
-(void)setSetupBehavior:(SBDashBoardBehavior *)arg1 ;
-(float)_valueForTransitionInterval:(SCD_Struct_SB10)arg1 timingFunction:(id)arg2 ;
-(id)_statusBarStateProvider;
-(void)_setFakeStatusBarEnabled:(char)arg1 ;
-(SBDashBoardBehavior *)localBehavior;
-(id)_createFakeStatusBarView;
-(void)setFakeStatusBarView:(SBFakeStatusBarView *)arg1 ;
-(id<SBFIrisWallpaperView>)irisWallpaperView;
-(void)_actuallyUpdateUIForIrisNotPlaying;
-(void)_actuallyUpdateUIForIrisPlaying:(char)arg1 ;
-(void)_startFadeInAnimationForSource:(int)arg1 fadingToBatteryView:(char)arg2 ;
-(void)_transitionTimerViewToVisible:(char)arg1 animated:(char)arg2 ;
-(void)_updateLocalAppearanceForRequester:(id)arg1 animationSettings:(id)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidateLockScreenActionContext;
-(void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2 ;
-(void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2 ;
-(void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2 ;
-(void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2 ;
-(void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3 ;
-(char)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3 ;
-(char)controller:(id)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(id)arg2 ;
-(void)controllerWillCancelHorizontalScrolling:(id)arg1 ;
-(void)searchEtceteraViewController:(id)arg1 willChangeToMode:(unsigned)arg2 animated:(char)arg3 ;
-(void)searchEtceteraViewController:(id)arg1 didChangeToMode:(unsigned)arg2 animated:(char)arg3 ;
-(id)initWithPageViewControllers:(id)arg1 mainPageViewController:(id)arg2 ;
-(void)setIrisWallpaperView:(id<SBFIrisWallpaperView>)arg1 ;
-(void)setWallpaperColorProvider:(id<SBWallpaperColorProvider>)arg1 ;
-(void)activateMainPageWithCompletion:(/*^block*/id)arg1 ;
-(void)registerExternalBehaviorProvider:(id)arg1 ;
-(void)externalBehaviorProviderBehaviorChanged:(id)arg1 ;
-(void)unregisterExternalBehaviorProvider:(id)arg1 ;
-(void)registerExternalEventHandler:(id)arg1 ;
-(void)unregisterExternalEventHandler:(id)arg1 ;
-(void)registerExternalPresentationProvider:(id)arg1 ;
-(void)externalPresentationProviderPresentationChanged:(id)arg1 ;
-(void)unregisterExternalPresentationProvider:(id)arg1 ;
-(char)isIdleTimerDisabledForReason:(id)arg1 ;
-(void)addDashBoardObserver:(id)arg1 ;
-(void)removeDashBoardObserver:(id)arg1 ;
-(void)presentModalViewController:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 animated:(char)arg4 ;
-(char)canUIUnlockFromSource:(int)arg1 ;
-(void)prepareForUIUnlock;
-(char)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(void)launchInCallAlert;
-(void)noteResetRestoreStateUpdated;
-(char)shouldUnlockUIOnKeyDownEvent;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(void)setShowingMediaControls:(char)arg1 ;
-(char)isSystemGesturePermittedForPresentingController:(id)arg1 ;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
-(void)didCompleteTransitionOutOfLockScreen;
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(char)wantsLockScreenIdleTimer;
-(void)screenFadeAnimationController:(id)arg1 setRelevantViewsHidden:(char)arg2 forRequester:(id)arg3 ;
-(id)_windowsFromViewControllers:(id)arg1 ;
-(void)updateStatusBarForLockScreenTeardown;
-(void)_actuallyUpdateUIForIrisPlaying;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(void)_setMainDisplayPolicyAggregator:(id)arg1 ;
-(void)_setStatusBarStateProvider:(id)arg1 ;
-(id<SBWallpaperColorProvider>)wallpaperColorProvider;
-(void)setLastSettledPageIndex:(unsigned)arg1 ;
-(void)setLocalBehavior:(SBDashBoardBehavior *)arg1 ;
-(void)setIrisBehavior:(SBDashBoardBehavior *)arg1 ;
-(void)setLocalAppearance:(SBDashBoardAppearance *)arg1 ;
-(SBLockScreenDateViewController *)dateViewController;
-(void)setDateViewController:(SBLockScreenDateViewController *)arg1 ;
-(SBDashBoardPowerChangeObserver *)powerChangeObserver;
-(void)setPowerChangeObserver:(SBDashBoardPowerChangeObserver *)arg1 ;
-(SBLockScreenTimerViewController *)timerViewController;
-(void)setTimerViewController:(SBLockScreenTimerViewController *)arg1 ;
-(SBDashBoardLegibilityProvider *)legibilityProvider;
-(void)setLegibilityProvider:(SBDashBoardLegibilityProvider *)arg1 ;
-(SBLockScreenActionManager *)lockScreenActionManager;
-(void)setLockScreenActionManager:(SBLockScreenActionManager *)arg1 ;
-(SBFakeStatusBarView *)fakeStatusBarView;
-(SBAppStatusBarSettingsAssertion *)hideStatusBarAssertionForScrolling;
-(void)setHideStatusBarAssertionForScrolling:(SBAppStatusBarSettingsAssertion *)arg1 ;
-(char)irisPlayerIsInteracting;
-(void)setIrisPlayerIsInteracting:(char)arg1 ;
-(char)shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
-(void)setShouldTransitionIrisWallpaperToStillWhenPlaybackFinishes:(char)arg1 ;
-(void)setWallpaperAggdLogger:(SBWallpaperAggdLogger *)arg1 ;
-(void)setModalPresentationController:(SBDashBoardModalPresentationViewController *)arg1 ;
-(void)setCurrentTransitionSource:(id<SBDashBoardViewTransitionSource>)arg1 ;
-(void)launchEmergencyDialer;
-(void)exitEmergencyDialerAnimated:(char)arg1 ;
-(void)_updateStatusBar;
-(void)setInScreenOffMode:(char)arg1 forAutoUnlock:(char)arg2 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<SBDashBoardViewControllerDelegate>)arg1 ;
-(id<SBDashBoardViewControllerDelegate>)delegate;
-(SCD_Struct_SB17)transitionContext;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(int)statusBarStyle;
-(int)backgroundStyle;
-(unsigned)supportedInterfaceOrientations;
-(void)deactivate;
-(void)setBacklightLevel:(float)arg1 ;
-(char)shouldAutorotate;
-(char)isIdleTimerDisabled;
-(char)handleEvent:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(int)presentationStyle;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)isTransitioning;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentModalViewController:(id)arg1 withTransition:(int)arg2 ;
-(void)activate;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateBackground;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(NSSet *)components;
-(SBDashBoardSetupViewController *)setupController;
-(void)irisWallpaperView:(id)arg1 didReplaceGestureRecognizer:(id)arg2 withGestureRecognizer:(id)arg3 ;
-(void)irisWallpaperViewPlaybackStateDidChange:(id)arg1 ;
-(void)irisWallpaperViewIsInteractingDidChange:(id)arg1 ;
-(char)isMakingEmergencyCall;
-(void)setAuthenticated:(char)arg1 ;
-(int)idleTimerMode;
-(char)handleVolumeUpButtonPressed;
-(char)handleVolumeDownButtonPressed;
-(char)handleHeadsetButtonPressed:(char)arg1 ;
-(char)hasTranslucentBackground;
-(char)handleMenuButtonTap;
-(unsigned)restrictedCapabilities;
-(int)notificationBehavior;
-(char)shouldShowLockStatusBarTime;
-(int)presentationTransition;
-(char)_handleEvent:(id)arg1 ;
-(int)presentationType;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)cancelTransition;
-(id<SBDashBoardViewPresenting>)presenter;
-(void)setPresenter:(id<SBDashBoardViewPresenting>)arg1 ;
-(void)setSetupController:(SBDashBoardSetupViewController *)arg1 ;
-(NSArray *)pageViewControllers;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(char)isPasscodeLockVisible;
-(void)handleAction:(id)arg1 fromSender:(id)arg2 ;
-(void)addIdleTimerDisabledAssertionReason:(id)arg1 ;
-(void)removeIdleTimerDisabledAssertionReason:(id)arg1 ;
-(int)participantState;
-(void)setActiveBehavior:(SBDashBoardBehavior *)arg1 ;
-(SBDashBoardBehavior *)activeBehavior;
-(id<SBDashBoardNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id<SBDashBoardNotificationDispatcher>)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)_updatePageControl;
-(char)handleLockButtonPressed;
@end
