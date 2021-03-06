/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>
#import <OpusOrigamiProducer/MCActionSupport.h>
#import <OpusOrigamiProducer/MCPlugTiming.h>

@class NSMutableSet, NSMutableDictionary, MCContainer, NSSet, NSDictionary;

@interface MCPlug : MCObject <MCAnimationPathSupport, MCActionSupport, MCPlugTiming> {

	unsigned long mFlags;
	NSMutableSet* mAnimationPaths;
	NSMutableDictionary* mActions;
	MCContainer* mContainer;
	double mPhaseInDuration;
	double mLoopDuration;
	double mPhaseOutDuration;
	double mNumberOfLoops;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned countOfAnimationPaths; 
@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned countOfActions; 
@property (retain) MCContainer * container; 
@property (assign,nonatomic) char startsPaused; 
@property (assign,nonatomic) char preactivatesWithParent; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double loopDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,readonly) double fullDuration; 
@property (assign,nonatomic) double numberOfLoops; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)demolish;
-(void)removeAllAnimationPaths;
-(double)fullDuration;
-(NSSet *)animationPaths;
-(double)phaseInDuration;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)initActionsWithImprints:(id)arg1 ;
-(void)demolishActions;
-(id)imprintsForActions;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(unsigned)countOfAnimationPaths;
-(char)preactivatesWithParent;
-(void)setPreactivatesWithParent:(char)arg1 ;
-(unsigned)countOfActions;
-(double)loopDuration;
-(void)setStartsPaused:(char)arg1 ;
-(char)startsPaused;
-(void)setLoopDuration:(double)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(id)init;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1 ;
-(MCContainer *)container;
-(void)setContainer:(MCContainer *)arg1 ;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)numberOfLoops;
-(void)removeActionForKey:(id)arg1 ;
-(id)imprint;
-(void)setNumberOfLoops:(double)arg1 ;
@end

