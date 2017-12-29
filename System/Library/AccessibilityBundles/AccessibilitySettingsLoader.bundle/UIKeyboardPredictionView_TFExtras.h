/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
#import <AccessibilitySettingsLoader/__UIKeyboardPredictionView_TFExtras_super.h>

@interface UIKeyboardPredictionView_TFExtras : __UIKeyboardPredictionView_TFExtras_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)speakTypingLoadAccessibilityInformation;
-(char)accessibilityLongPressGestureRecognizerEnabled;
-(void)_handleAXLongPress:(id)arg1 ;
-(void)setAccessibilityLongPressGestureRecognizerEnabled:(char)arg1 ;
-(void)setAccessibilityCurrentIndex:(int)arg1 ;
-(int)accessibilityCurrentIndex;
-(void)_speakLabelAtCell:(id)arg1 forCurrentInputMode:(id)arg2 ;
@end
