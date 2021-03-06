/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UINavigationItem, UIView, UILabel;

@interface UINavigationItemView : UIView {

	UINavigationItem* _item;
	CGSize _titleSize;
	UIView* _topCrossView;
	UIView* _bottomCrossView;
	char _isCrossFading;
	char _customFontSet;
	UILabel* _label;
	char _isFadingInFromCustomAlpha;

}

@property (assign,setter=_setFadingInFromCustomAlpha:,nonatomic) char _isFadingInFromCustomAlpha;              //@synthesize isFadingInFromCustomAlpha=_isFadingInFromCustomAlpha - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)description;
-(id)navigationItem;
-(id)title;
-(void)setFont:(id)arg1 ;
-(void)_resetTitleSize;
-(void)_setLineBreakMode:(int)arg1 ;
-(id)initWithNavigationItem:(id)arg1 ;
-(char)titleAutoresizesToFit;
-(void)setTitleAutoresizesToFit:(char)arg1 ;
-(void)_updateLabelColor;
-(void)_prepareCrossViewsForNewSize:(CGSize)arg1 ;
-(void)_crossFadeHiddingButton:(char)arg1 ;
-(void)_cleanUpCrossView;
-(CGSize)_titleSize;
-(void)_setFadingInFromCustomAlpha:(char)arg1 ;
-(id)_defaultFont;
-(void)_setFont:(id)arg1 ;
-(CGRect)_labelFrame;
-(char)_useSilverLookForBarStyle:(int)arg1 ;
-(id)_currentTextColorForBarStyle:(int)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(int)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(int)arg1 ;
-(id)font;
-(float)_titleYAdjustmentCustomization;
-(void)_updateLabel;
-(void)_updateLabelContents;
-(void)_adjustLabelTrackingIfNecessary;
-(char)_isFadingInFromCustomAlpha;
@end

