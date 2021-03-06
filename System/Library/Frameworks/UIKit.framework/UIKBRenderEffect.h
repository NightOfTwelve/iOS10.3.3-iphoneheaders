/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIKBGradient;


@protocol UIKBRenderEffect <NSObject,NSCopying>
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) char renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) float weight; 
@property (nonatomic,readonly) char usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
@required
-(CGColorRef)CGColor;
-(char)isValid;
-(UIKBGradient *)gradient;
-(float)weight;
-(char)usesRGBColors;
-(char)renderUnder;
-(SEL)renderSelector;
-(void)setWeight:(float)arg1;

@end

