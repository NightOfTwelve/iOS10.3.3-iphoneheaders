/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSDictionary;

@interface UIDropShadowView : UIView {

	UIView* _backgroundImage;
	NSDictionary* _preservedLayerValues;
	float _cornerRadius;
	UIView* _contentView;

}

@property (assign,nonatomic) float cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(id)init;
-(void)setContentView:(UIView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(UIView *)contentView;
-(void)setBounds:(CGRect)arg1 ;
-(void)willBeginRotationWithOriginalBounds:(CGRect)arg1 newBounds:(CGRect)arg2 ;
-(void)didFinishRotation;
-(void)updateShadowPath;
@end

