/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationKeyframe.h>

@interface MCAnimationKeyframe1D : MCAnimationKeyframe {

	float mValue;

}

@property (assign,nonatomic) float value; 
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)imprint;
@end

