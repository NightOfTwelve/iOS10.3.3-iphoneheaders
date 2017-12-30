/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:48 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSUColor : NSObject <NSCopying> {

	CGColorRef mCGColor;

}

@property (readonly) CGColorRef CGColor; 
+(id)colorWithRGBAComponents:(const float*)arg1 ;
+(id)colorWithPlatformColor:(id)arg1 ;
+(id)blackColor;
+(id)colorWithWhite:(float)arg1 alpha:(float)arg2 ;
+(id)whiteColor;
+(id)clearColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)grayColor;
+(id)lightGrayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
+(id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
+(id)colorWithPatternImage:(id)arg1 ;
+(id)colorWithUIColor:(id)arg1 ;
+(id)randomColor;
-(id)initWithPlatformColor:(id)arg1 ;
-(char)isGrayscaleColor;
-(id)platformColor;
-(id)lightenedColorByFactor:(float)arg1 ;
-(id)darkenedColorByFactor:(float)arg1 ;
-(CGColorRef)CGColor;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)colorWithAlphaComponent:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isOpaque;
-(id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
-(id)initWithWhite:(float)arg1 alpha:(float)arg2 ;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(float)alphaComponent;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithPatternImage:(id)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
-(float)redComponent;
-(float)greenComponent;
-(float)blueComponent;
-(float)p_rgbComponentWithIndex:(unsigned char)arg1 ;
-(id)newBlendedColorWithFraction:(float)arg1 ofColor:(id)arg2 ;
-(char)isAlmostEqualToColor:(id)arg1 ;
-(void)getRGBAComponents:(float*)arg1 ;
-(float)hueComponent;
-(float)saturationComponent;
-(float)brightnessComponent;
-(id)UIColor;
-(id)grayscaleColor;
-(id)invertedColor;
-(float)luminance;
-(char)isNearlyWhite;
-(id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
@end
