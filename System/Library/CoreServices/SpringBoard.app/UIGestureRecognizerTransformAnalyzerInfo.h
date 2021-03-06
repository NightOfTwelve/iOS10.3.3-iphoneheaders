/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject {

	float _translationMagnitude;
	float _scale;
	float _rotation;
	CGPoint _translation;
	CGPoint _absoluteTranslation;

}

@property (assign,setter=_setTranslation:,nonatomic) CGPoint translation;                              //@synthesize translation=_translation - In the implementation block
@property (assign,setter=_setTranslationMagnitude:,nonatomic) float translationMagnitude;              //@synthesize translationMagnitude=_translationMagnitude - In the implementation block
@property (assign,setter=_setAbsoluteTranslation:,nonatomic) CGPoint absoluteTranslation;              //@synthesize absoluteTranslation=_absoluteTranslation - In the implementation block
@property (assign,setter=_setScale:,nonatomic) float scale;                                            //@synthesize scale=_scale - In the implementation block
@property (assign,setter=_setRotation:,nonatomic) float rotation;                                      //@synthesize rotation=_rotation - In the implementation block
-(void)_setTranslation:(CGPoint)arg1 ;
-(void)_setTranslationMagnitude:(float)arg1 ;
-(void)_setAbsoluteTranslation:(CGPoint)arg1 ;
-(void)_setRotation:(float)arg1 ;
-(float)translationMagnitude;
-(CGPoint)absoluteTranslation;
-(id)description;
-(void)_setScale:(float)arg1 ;
-(void)_reset;
-(float)scale;
-(float)rotation;
-(CGPoint)translation;
@end

