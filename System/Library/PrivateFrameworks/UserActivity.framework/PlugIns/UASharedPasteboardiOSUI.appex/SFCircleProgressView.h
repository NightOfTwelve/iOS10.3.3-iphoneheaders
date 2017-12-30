/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:53 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/PlugIns/UASharedPasteboardiOSUI.appex/UASharedPasteboardiOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UASharedPasteboardiOSUI/UASharedPasteboardiOSUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SFCircleProgressView : UIView

@property (assign,nonatomic) int progressStartPoint; 
@property (nonatomic,readonly) UIColor * progressColor; 
@property (assign,nonatomic) float progressLineWidth; 
@property (assign,nonatomic) char showProgressTray; 
@property (assign,nonatomic) float progress; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)setProgressStartPoint:(int)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setShowProgressTray:(char)arg1 ;
-(int)progressStartPoint;
-(UIColor *)progressColor;
-(char)showProgressTray;
-(void)setProgress:(float)arg1 animated:(char)arg2 forced:(char)arg3 completion:(/*^block*/id)arg4 ;
-(float)progressPresentationValue;
-(void)setProgress:(float)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateProgressCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)setProgressLineWidth:(float)arg1 ;
-(float)progressLineWidth;
@end
