/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:08 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/PlugIns/MarkupPrivateExtension.appex/MarkupPrivateExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MarkupPrivateExtension/MarkupPrivateExtension-Structs.h>
#import <MarkupUI/MarkupViewController.h>

@interface MUPrivateExtensionViewController : MarkupViewController
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(char)_isInLowMemoryEnvironment;
+(float)_maxImageDimensionInView;
-(CGRect)_containerBounds;
-(char)_validateAnimationDictionary:(id)arg1 isEntering:(char)arg2 ;
-(void)_setupContainerAndDimmingViews;
-(void)_animateEnteringMarkupWithInfo:(id)arg1 ;
-(void)_adjustFormSheetFrameToFitSize:(CGSize)arg1 ;
-(void)_animateExitWithInfo:(id)arg1 ;
-(CGSize)_minimumFormSheetDimensions;
-(CGAffineTransform)_transformToHideContainerViewBehindBounds:(CGRect)arg1 ;
-(CGRect)_rectBetweenNavAndToolbar;
-(char)canBecomeFirstResponder;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)_bailFailedAnimateEnterMarkup;
-(void)animateExitWithInfo:(id)arg1 ;
@end

