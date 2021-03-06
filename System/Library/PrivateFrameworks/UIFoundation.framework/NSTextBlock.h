/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSTextBlock : NSObject <NSCoding, NSCopying> {

	void* _propVals;
	unsigned _propMask;
	unsigned _typeMask;
	id _primParamVal;
	id _otherParamVals;
	void* _blockPrimary;
	void* _blockSecondary;

}
+(void)initialize;
-(void)drawBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 characterRange:(NSRange)arg3 layoutManager:(id)arg4 ;
-(float)widthForLayer:(int)arg1 edge:(unsigned)arg2 ;
-(float)valueForDimension:(unsigned)arg1 ;
-(unsigned)widthValueTypeForLayer:(int)arg1 edge:(unsigned)arg2 ;
-(unsigned)valueTypeForDimension:(unsigned)arg1 ;
-(void)_destroyFloatStorage;
-(void)_createFloatStorage;
-(void)_takeValuesFromTextBlock:(id)arg1 ;
-(void)_setValue:(float)arg1 type:(unsigned)arg2 forParameter:(unsigned)arg3 ;
-(float)_valueForParameter:(unsigned)arg1 ;
-(unsigned)_valueTypeForParameter:(unsigned)arg1 ;
-(void)setValue:(float)arg1 type:(unsigned)arg2 forDimension:(unsigned)arg3 ;
-(void)setWidth:(float)arg1 type:(unsigned)arg2 forLayer:(int)arg3 edge:(unsigned)arg4 ;
-(void)setBorderColor:(id)arg1 forEdge:(unsigned)arg2 ;
-(id)borderColorForEdge:(unsigned)arg1 ;
-(void)setContentWidth:(float)arg1 type:(unsigned)arg2 ;
-(unsigned)contentWidthValueType;
-(void)setWidth:(float)arg1 type:(unsigned)arg2 forLayer:(int)arg3 ;
-(CGRect)rectForLayoutAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(CGRect)boundsRectForContentRect:(CGRect)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(id)_attributeDescription;
-(id)init;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(id)arg1 ;
-(float)contentWidth;
-(unsigned)verticalAlignment;
-(void)setVerticalAlignment:(unsigned)arg1 ;
@end

