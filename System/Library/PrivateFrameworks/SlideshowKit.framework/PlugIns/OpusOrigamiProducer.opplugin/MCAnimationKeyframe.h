/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObjectLight.h>

@class MCAnimationPathKeyframed;

@interface MCAnimationKeyframe : MCObjectLight {

	MCAnimationPathKeyframed* mAnimationPath;
	char mIsSnapshot;
	int mTimeOffsetKind;
	float mPreControl;
	float mPostControl;
	double mTimeOffset;

}

@property (assign) MCAnimationPathKeyframed * animationPath; 
@property (assign,nonatomic) double timeOffset; 
@property (assign,nonatomic) int timeOffsetKind; 
@property (assign,nonatomic) float preControl; 
@property (assign,nonatomic) float postControl; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(int)timeOffsetKind;
-(MCAnimationPathKeyframed *)animationPath;
-(void)setPostControl:(float)arg1 ;
-(void)setPreControl:(float)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(float)preControl;
-(float)postControl;
-(void)setTimeOffsetKind:(int)arg1 ;
-(void)setAnimationPath:(MCAnimationPathKeyframed *)arg1 ;
-(id)description;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(id)imprint;
-(char)isSnapshot;
@end

