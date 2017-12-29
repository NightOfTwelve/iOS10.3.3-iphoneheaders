/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardViewControllerBase.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableArray, NSArray, NSString;

@interface SBDashBoardPresentationViewController : SBDashBoardViewControllerBase <BSDescriptionProviding> {

	unsigned _mutatingPresentation;
	unsigned _transitioning;
	NSMutableArray* _contentViewControllers;
	NSArray* _activeContentViewControllers;
	SBDashBoardPresentationViewController* _isolatedPresentationViewController;

}

@property (getter=hasContent,nonatomic,readonly) char hasContent; 
@property (getter=isPresentingContent,nonatomic,readonly) char presentingContent; 
@property (getter=isTransitioning,nonatomic,readonly) char transitioning; 
@property (nonatomic,copy,readonly) NSArray * contentViewControllers;                          //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * presentedViewControllers;                        //@synthesize activeContentViewControllers=_activeContentViewControllers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)dismissContentViewController:(id)arg1 animated:(char)arg2 ;
-(char)wouldHandleButtonEvent:(id)arg1 ;
-(void)updatePresentationAnimated:(char)arg1 ;
-(void)dismissPresentationAnimated:(char)arg1 ;
-(char)isPresentingContent;
-(void)dismissContentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentContentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)presentedViewControllers;
-(void)dismissPresentationAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentContentViewController:(id)arg1 animated:(char)arg2 ;
-(void)presentContentViewControllers:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissContentViewControllers:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)rebuildEverythingForReason:(id)arg1 ;
-(void)_updateContentViewControllersAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_reflowPresentationWithAnimationSettings:(id)arg1 ;
-(void)aggregatePresentation:(id)arg1 ;
-(char)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id*)arg2 ;
-(void)_updatePresentationForViewController:(id)arg1 presentation:(id)arg2 animationSettings:(id)arg3 ;
-(NSString *)description;
-(char)handleEvent:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(char)isTransitioning;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(char)hasContent;
-(NSArray *)contentViewControllers;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(int)participantState;
@end
