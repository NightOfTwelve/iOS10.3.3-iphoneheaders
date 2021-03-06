/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsLargerHitTargetButton.h>

@class UILongPressGestureRecognizer, CAShapeLayer, UIColor;

@interface CarFocusableButton : MapsLargerHitTargetButton {

	UILongPressGestureRecognizer* _recognizer;
	CAShapeLayer* _focusShapeLayer;
	CGSize _lastKnownSize;
	char _modifiesBackgroundColor;
	char _showsEllipticalFocusIndicator;
	UIColor* _focusedTintColor;
	UIColor* _nonFocusedTintColor;
	UIColor* _focusedBackgroundColor;
	UIColor* _nonFocusedBackgroundColor;

}

@property (nonatomic,retain) UIColor * nonFocusedTintColor;                    //@synthesize nonFocusedTintColor=_nonFocusedTintColor - In the implementation block
@property (nonatomic,retain) UIColor * focusedTintColor;                       //@synthesize focusedTintColor=_focusedTintColor - In the implementation block
@property (nonatomic,retain) UIColor * focusedBackgroundColor;                 //@synthesize focusedBackgroundColor=_focusedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * nonFocusedBackgroundColor;              //@synthesize nonFocusedBackgroundColor=_nonFocusedBackgroundColor - In the implementation block
@property (assign,nonatomic) char modifiesBackgroundColor;                     //@synthesize modifiesBackgroundColor=_modifiesBackgroundColor - In the implementation block
@property (assign,nonatomic) char showsEllipticalFocusIndicator;               //@synthesize showsEllipticalFocusIndicator=_showsEllipticalFocusIndicator - In the implementation block
+(id)button;
+(id)buttonWithType:(int)arg1 ;
-(id)_focusShapeLayer;
-(UIColor *)focusedTintColor;
-(void)setFocusedTintColor:(UIColor *)arg1 ;
-(UIColor *)focusedBackgroundColor;
-(void)setFocusedBackgroundColor:(UIColor *)arg1 ;
-(void)_updateColorSettings;
-(void)tappedButton:(id)arg1 ;
-(UIColor *)nonFocusedTintColor;
-(void)setNonFocusedTintColor:(UIColor *)arg1 ;
-(UIColor *)nonFocusedBackgroundColor;
-(void)setNonFocusedBackgroundColor:(UIColor *)arg1 ;
-(char)modifiesBackgroundColor;
-(void)setModifiesBackgroundColor:(char)arg1 ;
-(char)showsEllipticalFocusIndicator;
-(void)setShowsEllipticalFocusIndicator:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(void)_commonInit;
-(char)canBecomeFocused;
-(void)tintColorDidChange;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
@end

