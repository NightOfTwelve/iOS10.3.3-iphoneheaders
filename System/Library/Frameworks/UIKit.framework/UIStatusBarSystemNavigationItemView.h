/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarItemView.h>

@class UIButton, NSString;

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView {

	int _currentLabelCompressionLevel;
	UIButton* _button;
	float _maxWidth;

}

@property (nonatomic,retain) UIButton * button;                             //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) float maxWidth;                                //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) int currentLabelCompressionLevel;              //@synthesize currentLabelCompressionLevel=_currentLabelCompressionLevel - In the implementation block
-(UIButton *)button;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(float)extraRightPadding;
-(float)updateContentsAndWidth;
-(float)extraLeftPadding;
-(void)setCurrentLabelCompressionLevel:(int)arg1 ;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(char)layoutImageOnTrailingEdge;
-(void)userDidActivateButton:(id)arg1 ;
-(float)resetContentOverlap;
-(float)addContentOverlap:(float)arg1 ;
-(char)_shouldLayoutImageOnRight;
-(int)labelLineBreakMode;
-(CGSize)_buttonSize;
-(float)maxWidth;
-(void)setMaxWidth:(float)arg1 ;
-(int)currentLabelCompressionLevel;
-(void)setButton:(UIButton *)arg1 ;
@end

