/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class NSMutableArray, UIView, NSString;

@interface MFNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	char _transitionIsInFlight;
	NSMutableArray* _alongsideAnimations;
	NSMutableArray* _alongsideCompletions;
	UIView* _containerView;

}

@property (assign,nonatomic) UIView * containerView;                               //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnimated,nonatomic,readonly) char animated; 
@property (nonatomic,readonly) int presentationStyle; 
@property (nonatomic,readonly) char initiallyInteractive; 
@property (nonatomic,readonly) char isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) char interactive; 
@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) float percentComplete; 
@property (nonatomic,readonly) float completionVelocity; 
@property (nonatomic,readonly) int completionCurve; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(void)_addAlongsideAnimation:(/*^block*/id)arg1 ;
-(void)_addAlongsideCompletion:(/*^block*/id)arg1 ;
-(void)_applyBlocks:(id)arg1 ;
-(void)dealloc;
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(char)isInteractive;
-(float)percentComplete;
-(int)presentationStyle;
-(char)isRotating;
-(char)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runAlongsideAnimations;
-(void)setContainerView:(UIView *)arg1 ;
-(void)_runAlongsideCompletionsAfterCommit;
-(char)isInterruptible;
-(id)_alongsideAnimations;
-(char)isCancelled;
-(char)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)transitionDuration;
-(int)completionCurve;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(char)isAnimated;
-(char)initiallyInteractive;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(CGAffineTransform)targetTransform;
-(float)completionVelocity;
-(id)_alongsideCompletions;
@end
