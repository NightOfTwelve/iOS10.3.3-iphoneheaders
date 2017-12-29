/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface _MFSearchAtomBackgroundView : UIView {

	int _selectionStyle;
	struct {
		unsigned enabled : 1;
		unsigned selected : 1;
	}  _flags;
	UIColor* _defaultColor;

}

@property (nonatomic,retain) UIColor * defaultColor;                       //@synthesize defaultColor=_defaultColor - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,getter=isSelected,nonatomic) char selected; 
-(void)_updateSelectionStyleMask;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)tintColorDidChange;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)setEnabled:(char)arg1 animated:(char)arg2 ;
-(void)setDefaultColor:(UIColor *)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 style:(int)arg3 ;
-(void)_updateBackgroundColor;
-(UIColor *)defaultColor;
@end
