/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString * keyPath; 
@property (getter=isAdditive) char additive; 
@property (getter=isCumulative) char cumulative; 
@property (retain) CAValueFunction * valueFunction; 
+(id)animationWithKeyPath:(id)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(char)additive;
-(char)cumulative;
-(CAValueFunction *)valueFunction;
-(NSString *)keyPath;
-(void)setAdditive:(char)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(char)isAdditive;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(char)isCumulative;
-(void)setValueFunction:(CAValueFunction *)arg1 ;
-(void)setCumulative:(char)arg1 ;
@end
