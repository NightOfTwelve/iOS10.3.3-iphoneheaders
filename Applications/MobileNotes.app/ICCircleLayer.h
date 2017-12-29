/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <QuartzCore/CALayer.h>

@interface ICCircleLayer : CALayer {

	float _strokeWidth;
	CGColorRef _strokeColor;
	CGColorRef _fillColor;

}

@property (assign) float strokeWidth;                             //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) CGColorRef strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) CGColorRef fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setStrokeWidth:(float)arg1 ;
-(float)strokeWidth;
@end
