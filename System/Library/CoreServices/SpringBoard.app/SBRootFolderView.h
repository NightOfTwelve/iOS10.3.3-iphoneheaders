/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBSearchGestureObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBViewControllerTransitionContextDelegate.h>
#import <SpringBoard/SBFramewiseInteractiveTransitionAnimatorDelegate.h>
#import <SpringBoard/SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate.h>

@class SBDockView, SBDockIconListView, UILabel, SBFParallaxSettings, NSMutableSet, _SBRootFolderLayoutWrapperView, SBSearchBlurEffectView, SBSearchBackdropView, _SBMinusPageStepper, NSHashTable, SBHomeScreenPullDownSearchViewController, SBHomeScreenSearchableTodayViewController, SBViewControllerTransitionContext, SBFramewiseInteractiveTransitionAnimator, SBPercentPassthroughInteractiveTransition, SBRootFolder, NSString;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBSearchGestureObserver, UIGestureRecognizerDelegate, SBViewControllerTransitionContextDelegate, SBFramewiseInteractiveTransitionAnimatorDelegate, SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate> {

	SBDockView* _dockView;
	SBDockIconListView* _dockListView;
	char _dockViewBorrowed;
	UILabel* _idleTextView;
	SBFParallaxSettings* _parallaxSettings;
	NSMutableSet* _parallaxDisabledReasons;
	float _reachabilityYOffset;
	char _layingOutForReachability;
	_SBRootFolderLayoutWrapperView* _searchPulldownWrapperView;
	_SBRootFolderLayoutWrapperView* _searchableTodayWrapperView;
	SBSearchBlurEffectView* _searchBlurEffectView;
	SBSearchBackdropView* _searchBackdropView;
	_SBMinusPageStepper* _minusPageAnimationStepper;
	float _baseOffsetForDeterminingScrollToSearchThreshold;
	CGPoint _contentOffsetWhenScrollToSearchBeganDragging;
	int _currentPageIndexWhenScrollToSearchBeganDragging;
	float _dockListHeightWhenScrollToSearchBeganDragging;
	float _pageWidthWhenScrollToSearchBeganDragging;
	char _retryingAutoScrollToSearchDueToUnexpectedContentOffset;
	char _scrollToSearchIsDraggingOrAnimating;
	char _scrollToSearchIsBeingPresentedOrDismissedAutomatically;
	char _searchWasVisibleWhenScrollToSearchBeganDragging;
	int _targetPageIndexForAutoScrollToSearch;
	float _doNotUseThisDirectlyPlease_dockOffscreenProgress;
	NSHashTable* _dockOffscreenProgressSettingExternalClients;
	SBHomeScreenPullDownSearchViewController* _pullDownSearchViewController;
	SBHomeScreenSearchableTodayViewController* _searchableTodayViewController;
	SBViewControllerTransitionContext* _currentPullDownTransition;
	SBFramewiseInteractiveTransitionAnimator* _currentPullDownAnimator;
	SBPercentPassthroughInteractiveTransition* _currentPullDownInteractor;
	SBViewControllerTransitionContext* _currentSlideOverTransition;
	SBFramewiseInteractiveTransitionAnimator* _currentSlideOverAnimator;
	SBPercentPassthroughInteractiveTransition* _currentSlideOverInteractor;
	char _spotlightTransitioningFromBreadcrumb;
	unsigned _dockEdge;

}

@property (assign,getter=isDockViewBorrowed,nonatomic) char dockViewBorrowed;                                                      //@synthesize dockViewBorrowed=_dockViewBorrowed - In the implementation block
@property (assign,getter=isSpotlightTransitioningFromBreadcrumb,nonatomic) char spotlightTransitioningFromBreadcrumb;              //@synthesize spotlightTransitioningFromBreadcrumb=_spotlightTransitioningFromBreadcrumb - In the implementation block
@property (nonatomic,retain) SBRootFolder * folder; 
@property (nonatomic,readonly) SBFParallaxSettings * parallaxSettings;                                                             //@synthesize parallaxSettings=_parallaxSettings - In the implementation block
@property (assign,nonatomic) unsigned dockEdge;                                                                                    //@synthesize dockEdge=_dockEdge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(void)searchGesture:(id)arg1 changedPercentComplete:(float)arg2 ;
-(void)searchGesture:(id)arg1 startedShowing:(char)arg2 ;
-(void)searchGesture:(id)arg1 completedShowing:(char)arg2 ;
-(void)searchGesture:(id)arg1 resetAnimated:(char)arg2 ;
-(id)searchableTodayViewController;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(void)resetIconListViews;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(void)setDockEdge:(unsigned)arg1 ;
-(id)pullDownSearchViewController;
-(id)dockView;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg1 ;
-(unsigned)dockEdge;
-(void)returnDockView;
-(UIEdgeInsets)statusBarInsetsForDockEdge:(unsigned)arg1 ;
-(void)borrowDockView;
-(void)transitionWillBegin:(id)arg1 ;
-(void)transitionDidBegin:(id)arg1 ;
-(void)transitionWillReverse:(id)arg1 ;
-(void)transitionDidReverse:(id)arg1 ;
-(void)transitionWillFinish:(id)arg1 ;
-(void)setSpotlightTransitioningFromBreadcrumb:(char)arg1 ;
-(void)layoutSearchableViews;
-(char)isPullDownSearchVisible;
-(char)isSearchableTodayViewVisible;
-(char)isSearchableTodayViewVisibleOrTransitionDestination;
-(void)handleReachabilityActivated:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)returnScalingView;
-(void)searchEtceteraViewController:(id)arg1 willChangeToMode:(unsigned)arg2 animated:(char)arg3 ;
-(void)searchEtceteraViewController:(id)arg1 didChangeToMode:(unsigned)arg2 animated:(char)arg3 ;
-(char)searchEtceteraViewController:(id)arg1 shouldPresentSearchFromSource:(unsigned)arg2 ;
-(char)searchEtceteraViewController:(id)arg1 shouldDelaySearchWillDismissWithReason:(unsigned)arg2 ;
-(void)cleanUpAfterTransition;
-(void)transitionContext:(id)arg1 updateTransitionProgress:(float)arg2 ;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
-(float)effectiveStatusBarHeight;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 forSnapshot:(char)arg4 ;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)_handleReachabilityActivatedAnimate:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleReachabilityDectivatedAnimate:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)fadeContentForMinificationFraction:(float)arg1 ;
-(float)reachabilityYOffset;
-(void)_configureParallax;
-(void)_resetSearchScrollTrackingState;
-(char)isDockViewBorrowed;
-(char)isPullDownSearchVisibleOrTransitioning;
-(float)_offsetForSearchableTodayViewPage;
-(float)_pullDownSearchVisiblilityProgress;
-(void)_animateViewsForPullingToSearchWithPercent:(float)arg1 ;
-(float)_searchableTodayViewVisiblilityProgress;
-(void)_animateViewsForScrollingToSearchableTodayViewWithPercent:(float)arg1 ;
-(void)_layoutSubviewsForPulldownSearch;
-(void)_layoutSubviewsForSearchableTodayView;
-(CGRect)effectivePageControlFrame;
-(UIEdgeInsets)_searchableTodayViewInsetsForPageControl;
-(CGRect)effectiveDockFrame;
-(void)layoutDockView;
-(char)_isExternallyAnimatingDockOffscreenFraction;
-(void)_setDockOffscreenFraction:(float)arg1 ;
-(float)_searchableTodayViewDockOffscreenProgress;
-(void)_updateDockViewZOrdering;
-(char)_searchableTodayViewIsTransitioning;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(void)setDockViewBorrowed:(char)arg1 ;
-(void)updateDockViewOrientation;
-(UIEdgeInsets)_statusBarInsetsForDockEdge:(unsigned)arg1 dockOffscreenPercentage:(float)arg2 ;
-(void)_updateEditingStateAnimated:(char)arg1 ;
-(void)tearDownListViews;
-(char)_updatesWallpaperRelativeCenter;
-(char)_pullDownSearchIsTransitioning;
-(void)_captureInitialSearchScrollTrackingState;
-(void)_setReachabilityTemporarilyDisabled:(char)arg1 ;
-(void)_cleanUpAfterScrolling;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg1 ;
-(void)updateIconListIndexAndVisibility:(char)arg1 ;
-(id)_activeVCForSearchableTodayView;
-(void)_kickoffTransitionWithViewController:(id)arg1 presenting:(char)arg2 animated:(char)arg3 ;
-(float)_scrollOffsetForPageAtIndex:(int)arg1 ;
-(CGRect)_scrollViewFrameForDockEdge:(unsigned)arg1 ;
-(float)_pageWidth;
-(void)_updateStatusBarInsetsToPercent:(float)arg1 ;
-(id)_activeVCForPullDownSearch;
-(char)_searchableTodayViewModeWantsBlur;
-(unsigned)_minusPageCount;
-(void)externalClient:(id)arg1 wantsToModifyDockOffScreenFraction:(float)arg2 ;
-(void)removeDockOffscreenFractionExternalClient:(id)arg1 ;
-(void)_setParallaxDisabled:(char)arg1 forReason:(id)arg2 ;
-(char)isSpotlightTransitioningFromBreadcrumb;
-(id)iconListViewAtIndex:(unsigned)arg1 ;
-(char)setCurrentPageIndex:(int)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)layoutIconLists:(double)arg1 domino:(char)arg2 forceRelayout:(char)arg3 ;
-(void)_currentPageIndexDidChange;
-(void)setScrolling:(char)arg1 ;
-(void)setNeedsLayout;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)prepareForTransition;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_removeParallax;
-(SBFParallaxSettings *)parallaxSettings;
-(void)_layoutSubviews;
-(void)setContentAlpha:(float)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setStatusBarHeight:(float)arg1 ;
-(void)setIdleText:(id)arg1 ;
@end
