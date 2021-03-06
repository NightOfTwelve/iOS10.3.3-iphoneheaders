/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTreeNodeViewController.h>
#import <SpringBoard/SBFolderControllerDelegate.h>
#import <SpringBoard/SBFolderObserver.h>
#import <SpringBoard/SBFolderViewDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBFolderControllerDelegate;
@class SBIconViewMap, SBFolderContainerView, SBFolderView, SBFolderControllerBackgroundView, NSTimer, NSMapTable, SBIconAnimator, SBFolder, _UILegibilitySettings, SBIcon, SBFolderContext, SBAppStatusBarSettingsAssertion, SBFakeStatusBarView, SBFolderControllerAnimationContext, NSArray, NSString;

@interface SBFolderController : SBTreeNodeViewController <SBFolderControllerDelegate, SBFolderObserver, SBFolderViewDelegate, BSDescriptionProviding> {

	SBIconViewMap* _viewMap;
	SBFolderContainerView* _containerView;
	SBFolderView* _contentView;
	SBFolderControllerBackgroundView* _backgroundView;
	char _didAutoScroll;
	NSTimer* _autoScrollTimer;
	CGPoint _dragPausePoint;
	NSTimer* _dragPauseTimer;
	NSTimer* _closeFolderTimer;
	char _grabbedIconHasEverEnteredFolderView;
	int _dropDestinationPageIndex;
	NSMapTable* _editingContextsByFolder;
	SBIconAnimator* _iconAnimator;
	char _isOpen;
	char _isEditing;
	char _isAnimating;
	char _active;
	char _rotating;
	char _wasExpandedAfterLastSizeTransition;
	id<SBFolderControllerDelegate> _folderDelegate;
	SBFolder* _folder;
	int _orientation;
	_UILegibilitySettings* _legibilitySettings;
	_UILegibilitySettings* _accessibilityLegibilitySettings;
	SBIcon* _grabbedIcon;
	SBFolderContext* _lastContext;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	SBFakeStatusBarView* _fakeStatusBar;
	SBFolderControllerAnimationContext* _animationContext;

}

@property (assign,nonatomic) int orientation;                                                      //@synthesize orientation=_orientation - In the implementation block
@property (assign,getter=isOpen,nonatomic) char open;                                              //@synthesize isOpen=_isOpen - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                          //@synthesize active=_active - In the implementation block
@property (assign,getter=isRotating,nonatomic) char rotating;                                      //@synthesize rotating=_rotating - In the implementation block
@property (assign,getter=isAnimating,nonatomic) char animating;                                    //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) char wasExpandedAfterLastSizeTransition;                              //@synthesize wasExpandedAfterLastSizeTransition=_wasExpandedAfterLastSizeTransition - In the implementation block
@property (assign,nonatomic) int dropDestinationPageIndex;                                         //@synthesize dropDestinationPageIndex=_dropDestinationPageIndex - In the implementation block
@property (nonatomic,retain) SBIcon * grabbedIcon;                                                 //@synthesize grabbedIcon=_grabbedIcon - In the implementation block
@property (nonatomic,retain) SBFolderContext * lastContext;                                        //@synthesize lastContext=_lastContext - In the implementation block
@property (nonatomic,retain) SBAppStatusBarSettingsAssertion * statusBarAssertion;                 //@synthesize statusBarAssertion=_statusBarAssertion - In the implementation block
@property (nonatomic,retain) SBFakeStatusBarView * fakeStatusBar;                                  //@synthesize fakeStatusBar=_fakeStatusBar - In the implementation block
@property (nonatomic,__weak,readonly) SBFolderController * outerFolderController; 
@property (nonatomic,readonly) SBFolderController * innerFolderController; 
@property (nonatomic,retain) SBFolderControllerAnimationContext * animationContext;                //@synthesize animationContext=_animationContext - In the implementation block
@property (nonatomic,readonly) CGRect _autoscrollExclusionRegion; 
@property (assign,nonatomic,__weak) id<SBFolderControllerDelegate> folderDelegate;                 //@synthesize folderDelegate=_folderDelegate - In the implementation block
@property (nonatomic,retain) SBFolder * folder;                                                    //@synthesize folder=_folder - In the implementation block
@property (nonatomic,readonly) SBIconViewMap * viewMap;                                            //@synthesize viewMap=_viewMap - In the implementation block
@property (nonatomic,readonly) int currentPageIndex; 
@property (getter=isEditing,nonatomic,readonly) char editing;                                      //@synthesize isEditing=_isEditing - In the implementation block
@property (getter=isScrolling,nonatomic,readonly) char scrolling; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                           //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * accessibilityLegibilitySettings;              //@synthesize accessibilityLegibilitySettings=_accessibilityLegibilitySettings - In the implementation block
@property (nonatomic,readonly) SBFolderView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iconListViews; 
@property (nonatomic,readonly) unsigned iconListViewCount; 
@property (nonatomic,readonly) char suspendsWallpaperAnimationWhileOpen; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)listViewClass;
-(void)unscatterAnimated:(char)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(SBIcon *)grabbedIcon;
-(void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(char)arg2 ;
-(SBAppStatusBarSettingsAssertion *)statusBarAssertion;
-(void)setStatusBarAssertion:(SBAppStatusBarSettingsAssertion *)arg1 ;
-(SBIconViewMap *)viewMap;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(unsigned)iconListViewCount;
-(NSArray *)iconListViews;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withContainingExpandedTreeNode:(id)arg2 transitionCoordinator:(id)arg3 ;
-(char)shouldOpenFolderIcon:(id)arg1 ;
-(SBFolderController *)innerFolderController;
-(char)isDisplayingIcon:(id)arg1 ;
-(id)dockListView;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg1 ;
-(char)_listIndexIsVisible:(unsigned)arg1 ;
-(void)prepareToOpen;
-(void)prepareToClose;
-(UIEdgeInsets)statusBarInsetsForOrientation:(int)arg1 ;
-(void)_updateHomescreenAndDockFade;
-(unsigned)_depth;
-(CGRect)_autoscrollExclusionRegion;
-(char)suspendsWallpaperAnimationWhileOpen;
-(id)treeNodeViewController:(id)arg1 viewControllerForChildTreeNode:(id)arg2 ;
-(id)treeNodeViewController:(id)arg1 destinationExpandedTreeNodeForTargetTreeNode:(id)arg2 ;
-(void)treeNodeViewController:(id)arg1 willPerformOperation:(int)arg2 fromViewController:(id)arg3 fromTreeNode:(id)arg4 toViewController:(id)arg5 toTreeNode:(id)arg6 withTransitionCoordinator:(id)arg7 ;
-(void)addViewToHierarchyForChildTreeNodeViewController:(id)arg1 ;
-(void)removeViewFromHierarchyForChildTreeNodeViewController:(id)arg1 ;
-(id)deepestFolderController;
-(void)prepareToTearDown;
-(void)setFolderDelegate:(id<SBFolderControllerDelegate>)arg1 ;
-(char)restoreExpandedIndexPath:(id)arg1 ;
-(int)dropDestinationPageIndex;
-(id)folderControllerForFolder:(id)arg1 ;
-(id)addEmptyListView;
-(void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)noteGrabbedIconDidChange:(id)arg1 ;
-(id)currentIconListView;
-(void)noteGrabbedIcon:(id)arg1 locationDidChangeWithTouch:(id)arg2 ;
-(void)noteUserIsInteractingWithIcons;
-(void)handleReachabilityActivated:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(Class)controllerClassForFolder:(id)arg1 ;
-(char)folderController:(id)arg1 draggedIconDidPauseAtLocation:(CGPoint)arg2 inListView:(id)arg3 ;
-(char)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3 ;
-(char)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2 ;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2 ;
-(void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2 ;
-(void)folderControllerShouldBeginEditing:(id)arg1 ;
-(void)folderControllerDidEndScrolling:(id)arg1 ;
-(void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1 ;
-(void)_configureForInnerFolderController:(id)arg1 ;
-(id)_iconPageIndicatorImageSetCache;
-(void)fadeContentForMagnificationFraction:(float)arg1 ;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)pushFolderIcon:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)popFolderAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)hasDock;
-(Class)iconListViewClassForFolderView:(id)arg1 ;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(int)arg2 ;
-(void)folderViewWillBeginScrolling:(id)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg1 ;
-(void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2 ;
-(void)folderViewShouldBeginEditing:(id)arg1 ;
-(void)folderViewDidReceiveCancelReachabilityAction:(id)arg1 ;
-(void)setAccessibilityLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)fadeContentForMinificationFraction:(float)arg1 ;
-(char)doesPageContainIconListView:(int)arg1 ;
-(_UILegibilitySettings *)accessibilityLegibilitySettings;
-(void)_resetIconLists;
-(void)accessibilityReduceTransparencyDidChange;
-(void)_cancelAllInteractionTimers;
-(char)_homescreenAndDockShouldFade;
-(void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(char)arg1 ;
-(void)_setHomescreenAndDockAlpha:(float)arg1 ;
-(void)_addFakeStatusBarView;
-(void)_compactFolder;
-(void)_removeFakeStatusBar;
-(void)_resetFakeStatusBarSettingsIfNecessary;
-(char)wasExpandedAfterLastSizeTransition;
-(void)setWasExpandedAfterLastSizeTransition:(char)arg1 ;
-(void)_removeFakeStatusBarAndAssertionIfExists;
-(void)_resetFakeStatusBarFrameOnly;
-(void)_updateAssociatedControllerStateAnimated:(char)arg1 ;
-(id)_addEmptyListForce:(char)arg1 ;
-(void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateStateOfAssociatedController:(id)arg1 animated:(char)arg2 ;
-(char)_restoreFromContext:(id)arg1 ;
-(void)_cancelAutoScroll;
-(void)_cancelDragPauseTimer;
-(id<SBFolderControllerDelegate>)folderDelegate;
-(void)setDropDestinationPageIndex:(int)arg1 ;
-(char)_canDropIconInListView:(id)arg1 ;
-(void)_resetDragPauseTimerForPoint:(CGPoint)arg1 inIconListView:(id)arg2 ;
-(void)_doAutoScrollByPageCount:(int)arg1 ;
-(void)_updateAutoScrollForTouch:(id)arg1 ;
-(void)_updateCloseFolderForTouch:(id)arg1 ;
-(void)_updateDropDestinationForTouch:(id)arg1 ;
-(void)_clearIconAnimator;
-(id)_newAnimatorForZoomUp:(char)arg1 ;
-(SBFolderController *)outerFolderController;
-(void)_noteFolderListsDidChange;
-(id)targetIconViewForExpandUnexpandTransitionOfFolderWithIcon:(id)arg1 ;
-(char)_iconAppearsOnCurrentPage:(id)arg1 ;
-(SBFakeStatusBarView *)fakeStatusBar;
-(void)setFakeStatusBar:(SBFakeStatusBarView *)arg1 ;
-(void)setGrabbedIcon:(SBIcon *)arg1 ;
-(void)_scrollLeft:(id)arg1 ;
-(void)_scrollRight:(id)arg1 ;
-(id)iconListViewAtIndex:(unsigned)arg1 ;
-(char)setCurrentPageIndex:(int)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_closeFolderTimerFired;
-(void)_updateDragPauseForTouch:(id)arg1 ;
-(id)iconListViewForTouch:(id)arg1 ;
-(void)_dragPauseTimerFired:(id)arg1 ;
-(void)_setCloseFolderTimerIfNecessary;
-(void)_cancelCloseFolderTimer;
-(void)layoutIconLists:(double)arg1 domino:(char)arg2 forceRelayout:(char)arg3 ;
-(void)invalidate;
-(SBFolderView *)contentView;
-(void)dealloc;
-(NSString *)description;
-(id)view;
-(char)_allowUserInteraction;
-(char)isActive;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)loadView;
-(id)_createContext;
-(char)isRotating;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(char)isAnimating;
-(void)setAnimating:(char)arg1 ;
-(void)setActive:(char)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setRotating:(char)arg1 ;
-(char)isScrolling;
-(void)_invalidate;
-(int)currentPageIndex;
-(Class)_contentViewClass;
-(SBFolderControllerAnimationContext *)animationContext;
-(void)setAnimationContext:(SBFolderControllerAnimationContext *)arg1 ;
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(char)setCurrentPageIndex:(int)arg1 animated:(char)arg2 ;
-(void)setOpen:(char)arg1 ;
-(char)isOpen;
-(void)setLastContext:(SBFolderContext *)arg1 ;
-(SBFolderContext *)lastContext;
-(id)currentIndexPath;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

