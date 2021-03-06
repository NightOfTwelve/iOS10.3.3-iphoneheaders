/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyiPhone/FindMyiPhone-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface ChevronView : UIView {

	unsigned _state;
	UIView* _leftView;
	UIView* _rightView;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * leftView;                 //@synthesize leftView=_leftView - In the implementation block
@property (nonatomic,retain) UIView * rightView;                //@synthesize rightView=_rightView - In the implementation block
@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) unsigned state;                    //@synthesize state=_state - In the implementation block
-(id)createChevron;
-(void)updateForPercent:(float)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
-(void)update;
@end

