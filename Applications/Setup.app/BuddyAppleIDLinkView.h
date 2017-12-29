/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface BuddyAppleIDLinkView : UIView {

	UIButton* _linkButton;
	float _buttonTopPadding;
	float _sidePadding;

}

@property (nonatomic,readonly) UIButton * linkButton;              //@synthesize linkButton=_linkButton - In the implementation block
@property (assign,nonatomic) float buttonTopPadding;               //@synthesize buttonTopPadding=_buttonTopPadding - In the implementation block
@property (assign,nonatomic) float sidePadding;                    //@synthesize sidePadding=_sidePadding - In the implementation block
-(float)sidePadding;
-(void)setButtonTopPadding:(float)arg1 ;
-(void)setSidePadding:(float)arg1 ;
-(float)buttonTopPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)linkButton;
@end
