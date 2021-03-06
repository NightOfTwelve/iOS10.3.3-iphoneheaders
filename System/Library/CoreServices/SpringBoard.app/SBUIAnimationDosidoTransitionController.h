/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class UIView, SBWindowSelfHostWrapper, SBDosidoAnimator, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationDosidoTransitionController : SBUIMainScreenAnimationController {

	UIView* _fromView;
	UIView* _toView;
	SBWindowSelfHostWrapper* _homeScreenHostWrapper;
	SBDosidoAnimator* _dosidoAnimator;
	int _fromOrientation;
	char _requiresHostView;
	char _fromAppWantsLiveContent;
	char _dosidoDidComplete;
	char _crossfadeDidComplete;
	char _activationFailed;
	char _finishedActivating;
	char _forCommandTab;
	unsigned _direction;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;

}

@property (assign,nonatomic) unsigned direction;                        //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) char fromAppWantsLiveContent;              //@synthesize fromAppWantsLiveContent=_fromAppWantsLiveContent - In the implementation block
@property (assign,nonatomic) char forCommandTab;                        //@synthesize forCommandTab=_forCommandTab - In the implementation block
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(char)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(id)_animationFactory;
-(void)enableSteppingWithAnimationSettings:(id)arg1 ;
-(void)_applicationDependencyStateChanged;
-(void)_maybeStartCrossfade;
-(void)_maybeReportAnimationFinished;
-(char)isReasonableMomentToInterrupt;
-(void)__startAnimation;
-(void)captureFlagsForActivatingApp:(id)arg1 ;
-(int)orientationAtLaunch;
-(char)_isTransitionToSpotlight;
-(void)_setupDisplayModeForAppView:(id)arg1 displayMode:(int)arg2 ;
-(void)_setupDisplayModeForActivatingAppView:(id)arg1 ;
-(void)_evaluateTransparency;
-(void)_invalidateWrapperView:(id)arg1 ;
-(id)_mainScreenSnapshot;
-(void)_setupDisplayModeForDeactivatingAppView:(id)arg1 ;
-(void)_performCrossfadeIfNeeded;
-(char)fromAppWantsLiveContent;
-(void)setFromAppWantsLiveContent:(char)arg1 ;
-(char)forCommandTab;
-(void)setForCommandTab:(char)arg1 ;
-(void)dealloc;
-(id)animationSettings;
-(void)setDirection:(unsigned)arg1 ;
-(unsigned)direction;
-(void)_setFromView:(id)arg1 ;
-(void)_setHidden:(char)arg1 ;
-(void)setToView:(id)arg1 ;
-(void)_startAnimation;
@end

