/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIForceInteractionController.h>

@protocol UIViewControllerContextTransitioning;
@class UIInteractionProgress, NSDictionary, _UIFeedbackStatesBehavior, NSMutableDictionary, NSString;

@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition <UIInteractionProgressObserver, UIViewControllerAnimatedTransitioning, UIForceInteractionController> {

	UIInteractionProgress* _interactionProgress;
	unsigned _targetPresentationPhase;
	NSDictionary* _viewsParticipatingInCommitTransition;
	_UIFeedbackStatesBehavior* _feedbackBehavior;
	NSMutableDictionary* _animationsByPresentationPhase;
	id<UIViewControllerContextTransitioning> _transitionContext;

}

@property (nonatomic,retain) UIInteractionProgress * interactionProgress;                                    //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (assign,nonatomic) unsigned targetPresentationPhase;                                               //@synthesize targetPresentationPhase=_targetPresentationPhase - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * animationsByPresentationPhase;                            //@synthesize animationsByPresentationPhase=_animationsByPresentationPhase - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) NSDictionary * viewsParticipatingInCommitTransition;                            //@synthesize viewsParticipatingInCommitTransition=_viewsParticipatingInCommitTransition - In the implementation block
@property (nonatomic,retain) _UIFeedbackStatesBehavior * feedbackBehavior;                                   //@synthesize feedbackBehavior=_feedbackBehavior - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float completionSpeed; 
@property (nonatomic,readonly) int completionCurve; 
@property (nonatomic,readonly) char wantsInteractiveStart; 
+(id)performCommitTransitionWithDelegate:(id)arg1 forViewController:(id)arg2 previewViewController:(id)arg3 previewInteractionController:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(float)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(char)arg2 ;
-(_UIFeedbackStatesBehavior *)feedbackBehavior;
-(void)setFeedbackBehavior:(_UIFeedbackStatesBehavior *)arg1 ;
-(void)setAnimationsByPresentationPhase:(NSMutableDictionary *)arg1 ;
-(void)setInteractionProgress:(UIInteractionProgress *)arg1 ;
-(void)setTargetPresentationPhase:(unsigned)arg1 ;
-(NSMutableDictionary *)animationsByPresentationPhase;
-(unsigned)targetPresentationPhase;
-(UIInteractionProgress *)interactionProgress;
-(void)_layoutForPresentationPhase:(unsigned)arg1 ;
-(void)_completeAnimationWithPresentationPhase:(unsigned)arg1 finished:(char)arg2 ;
-(void)_animateRevealTransition:(id)arg1 ;
-(void)_animateCommitTransition:(id)arg1 ;
-(void)_animateDismissTransition:(id)arg1 ;
-(void)_animatePreviewTransition:(id)arg1 ;
-(NSDictionary *)viewsParticipatingInCommitTransition;
-(id)initWithInteractionProgress:(id)arg1 targetPresentationPhase:(unsigned)arg2 ;
-(void)setAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forPresentationPhase:(unsigned)arg3 ;
-(void)setViewsParticipatingInCommitTransition:(NSDictionary *)arg1 ;
@end
