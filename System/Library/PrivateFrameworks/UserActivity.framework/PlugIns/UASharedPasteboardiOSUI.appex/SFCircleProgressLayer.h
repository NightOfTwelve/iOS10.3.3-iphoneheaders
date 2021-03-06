/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:53 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/PlugIns/UASharedPasteboardiOSUI.appex/UASharedPasteboardiOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UASharedPasteboardiOSUI/UASharedPasteboardiOSUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface SFCircleProgressLayer : CALayer {

	float _progressLineWidth;
	float _oneFullRotation;
	char _showProgressTray;
	int _progressStartPoint;
	UIColor* _progressColor;
	UIColor* _progressBackgroundColor;

}

@property (assign,nonatomic) int progressStartPoint;                         //@synthesize progressStartPoint=_progressStartPoint - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                        //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * progressBackgroundColor;              //@synthesize progressBackgroundColor=_progressBackgroundColor - In the implementation block
@property (assign,nonatomic) float progressLineWidth;                        //@synthesize progressLineWidth=_progressLineWidth - In the implementation block
@property (assign,nonatomic) char showProgressTray;                          //@synthesize showProgressTray=_showProgressTray - In the implementation block
@property (assign,nonatomic) float progress; 
+(char)needsDisplayForKey:(id)arg1 ;
-(id)init;
-(id)initWithLayer:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setProgressStartPoint:(int)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(void)setShowProgressTray:(char)arg1 ;
-(int)progressStartPoint;
-(UIColor *)progressColor;
-(UIColor *)progressBackgroundColor;
-(char)showProgressTray;
-(void)setProgressLineWidth:(float)arg1 ;
-(float)progressLineWidth;
@end

