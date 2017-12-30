/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUMathExpressionBase.h>

@interface MUMathExpressionFloatBased : MUMathExpressionBase {

	FunctionInterpreter<float>* mInterpreter;

}
+(float)evaluateString:(id)arg1 error:(id*)arg2 ;
+(float)invalidResult;
-(char)isValueIllegal:(float)arg1 ;
-(void)resetAllVariables;
-(void)setVariableValues:(id)arg1 ;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(void)replaceVariable:(id)arg1 withValue:(float)arg2 ;
-(void)_resetVariableIndicies;
-(void)setValue:(float)arg1 forVariable:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(float)valueForVariable:(id)arg1 ;
-(id)stringValue;
-(void)cleanup;
-(char)isConstant;
-(float)evaluate;
@end
