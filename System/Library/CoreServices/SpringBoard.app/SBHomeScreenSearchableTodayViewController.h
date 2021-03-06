/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSearchEtceteraMultiplexingViewController.h>

@class _UILegibilitySettings;

@interface SBHomeScreenSearchableTodayViewController : SBSearchEtceteraMultiplexingViewController {

	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(id)displayLayoutElementIdentifier;
-(id)_todayViewController;
-(void)dismissSearchForHardwareKeyboard:(char)arg1 ;
-(void)textSelectionInteractionWillBegin;
-(void)textSelectionInteractionDidEnd;
-(void)presentationControllerDidEndPresenting:(id)arg1 ;
-(void)presentationControllerDidEndDismissing:(id)arg1 ;
-(void)willActivateHosting;
-(unsigned)initialPresentationMode;
-(unsigned)defaultSearchViewPresentationSource;
-(unsigned)defaultSearchViewDismissalReason;
-(char)directlyForwardViewSizeChanges;
-(void)willChangeToMode:(unsigned)arg1 animated:(char)arg2 ;
-(void)didChangeToMode:(unsigned)arg1 animated:(char)arg2 ;
-(id)requestedLegibilitySettings;
-(char)shouldDisableClipping;
-(CGPoint)_offsetForScrollView:(id)arg1 ;
-(float)_maxClippingOffset;
-(void)_updateAppearanceForScrollViews;
-(void)_updateAppearanceForScrollViewsAnimated:(char)arg1 ;
-(void)_setRequestDisableRootFolderParallax:(char)arg1 reason:(id)arg2 ;
-(void)_setRequestDisableRootFolderScrolling:(char)arg1 reason:(id)arg2 ;
-(id)_eligibleScrollViews;
-(id)_todayLayoutContentView;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
@end

