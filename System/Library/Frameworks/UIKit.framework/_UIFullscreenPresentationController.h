/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UICurrentContextPresentationController.h>

@class UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {

	UIView* _counterRotatedView;
	float _counterRotatedAngle;
	CGRect _counterRotatedOriginalBounds;
	int _originalOrientation;
	char _presentingViewControllerHandledCounterRotation;
	/*^block*/id finalRotationBlock;

}
-(void)dealloc;
-(int)presentationStyle;
-(char)_shouldPresentedViewControllerControlStatusBarAppearance;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)_setPresentedViewController:(id)arg1 ;
-(char)shouldRemovePresentersView;
-(char)shouldPresentInFullscreen;
-(char)_shouldRespectDefinesPresentationContext;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)_removeCounterRotation;
-(char)_invokesDelegatesOnOrientationChange;
-(void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(int)arg3 toOrientation:(int)arg4 force:(char)arg5 ;
@end

