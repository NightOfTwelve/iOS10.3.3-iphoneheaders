/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MapsGroupAnimation : NSObject {

	NSMutableArray* _preparations;
	NSMutableArray* _animations;
	NSMutableArray* _completions;
	char _didPrepare;
	char _didAnimate;
	char _didComplete;
	char _preventsAnimationDuringPreparation;
	char _animated;

}

@property (assign,getter=isAnimated,nonatomic) char animated;                      //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) char preventsAnimationDuringPreparation;              //@synthesize preventsAnimationDuringPreparation=_preventsAnimationDuringPreparation - In the implementation block
+(id)animationForAnimatedFlag:(char)arg1 ;
+(id)animationForImplicitAnimationState;
+(id)animation;
+(double)defaultAnimationDuration;
-(void)addAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned)arg3 ;
-(char)preventsAnimationDuringPreparation;
-(void)addPreparation:(/*^block*/id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPreventsAnimationDuringPreparation:(char)arg1 ;
-(void)runWithDefaultOptions;
-(char)_hasPrepared;
-(id)init;
-(void)animate;
-(char)isAnimated;
-(void)setAnimated:(char)arg1 ;
-(void)prepare;
-(void)complete:(char)arg1 ;
@end

