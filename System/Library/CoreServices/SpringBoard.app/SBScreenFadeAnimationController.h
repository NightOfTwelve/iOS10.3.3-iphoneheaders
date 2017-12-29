/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBScreenFadeAnimationControllerDelegate;
@class UIWindow, UIView, SBFLockScreenDateView, SBAppStatusBarSettingsAssertion;

@interface SBScreenFadeAnimationController : NSObject {

	UIWindow* _fadeWindow;
	UIView* _overlayView;
	SBFLockScreenDateView* _fakeFadeAnimationDateView;
	float _originalDateLeftEdge;
	float _originalDateBottomEdge;
	float _finalTimeAlpha;
	float _finalDateAlpha;
	float _finalStatusBarAlpha;
	id<SBScreenFadeAnimationControllerDelegate> _delegate;
	UIView* _realDateView;
	char _preparingToAnimateFadeIn;
	char _animatingForFadeIn;
	char _animatingForFadeOut;
	char _insideFadeInCompletionBlock;
	char _insideFadeOutCompletionBlock;
	int _animationToken;
	/*^block*/id _fadeInCompletionBlock;
	/*^block*/id _fadeOutCompletionBlock;
	char _animatingDateTime;
	char _animatingWallpaper;
	char _animatingOverlay;
	char _animatingContent;
	int _lastBacklightChangeSource;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;

}
+(float)_animationSpeedForBacklightChangeSource:(int)arg1 isFadeIn:(char)arg2 ;
+(double)backlightFadeDurationForSource:(int)arg1 isFadeIn:(char)arg2 ;
+(id)sharedInstance;
-(char)isFadeOutAnimationInProgress;
-(char)isFadeInAnimationInProgress;
-(void)fadeOutForSource:(int)arg1 completion:(/*^block*/id)arg2 ;
-(char)isFadeInAnimationInProgressForSource:(int)arg1 ;
-(void)updateDateFrameHorizontalOffset:(float)arg1 verticalOffset:(float)arg2 ;
-(void)abortAnimatedDateFrameChange;
-(void)_assistantVisibilityChanged;
-(void)_invertColorsChanged;
-(void)_cleanupAnimationWhenInterruptingFadeIn:(char)arg1 ;
-(char)interruptFadeOutIfNeeded;
-(void)_runCompletionHandlerForFadeIn:(char)arg1 ;
-(void)_setLastBacklightChangeSource:(int)arg1 ;
-(void)_createFadeWindowForFadeIn:(char)arg1 ;
-(void)_setFakeAnimationDateView:(id)arg1 ;
-(void)_setRelevantLockScreenViewsHidden:(char)arg1 ;
-(id)_animationSettingsForBacklightChangeSource:(int)arg1 isFadeIn:(char)arg2 ;
-(void)_startFadeInIfNecessary;
-(void)_startFadeAnimationsForFadeIn:(char)arg1 animationSettings:(id)arg2 ;
-(void)_setDateViewAlpha:(float)arg1 ;
-(void)_handleAnimationCompletionIfNecessaryForFadeIn:(char)arg1 ;
-(void)prepareToFadeInForSource:(int)arg1 timeAlpha:(float)arg2 dateAlpha:(float)arg3 statusBarAlpha:(float)arg4 delegate:(id)arg5 existingDateView:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)init;
-(void)dealloc;
@end
