/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIUCBBarButtonVisualProviderIOS.h>

@class UIView, UIColor;

@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {

	UIView* _selectionBackgroundView;
	UIColor* _selectionBackgroundTintColor;
	UIColor* _selectionTintColor;

}

@property (nonatomic,retain) UIColor * selectionBackgroundTintColor;              //@synthesize selectionBackgroundTintColor=_selectionBackgroundTintColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor;                        //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(void)updateButton:(id)arg1 forSelectedState:(char)arg2 ;
-(void)configureButton:(id)arg1 fromBarItem:(id)arg2 ;
-(void)setSelectionBackgroundTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionBackgroundTintColor;
@end
