/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSString;

@interface MCMotionTrigger : MCAction {

	NSString* _key;
	float _easeIn;
	float _easeOut;
	double _duration;

}

@property (copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float easeIn;                 //@synthesize easeIn=_easeIn - In the implementation block
@property (assign,nonatomic) float easeOut;                //@synthesize easeOut=_easeOut - In the implementation block
+(id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 andDuration:(double)arg3 ;
-(void)demolish;
-(float)easeOut;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(float)easeIn;
-(void)setEaseOut:(float)arg1 ;
-(void)setEaseIn:(float)arg1 ;
-(NSString *)key;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)imprint;
@end

