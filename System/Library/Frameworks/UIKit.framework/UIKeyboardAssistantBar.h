/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIGroupedBar.h>

@class UIKeyboardBIUImageGenerator, UIBarButtonItemGroup, UIBarButtonItem, NSLayoutConstraint, UITextInputAssistantItem;

@interface UIKeyboardAssistantBar : _UIGroupedBar {

	UIKeyboardBIUImageGenerator* m_BIUImageGenerator;
	UIBarButtonItemGroup* m_dismissGroup;
	UIBarButtonItem* m_dismissButton;
	UIBarButtonItem* m_writeboardButton;
	UIBarButtonItemGroup* m_predictionGroup;
	NSLayoutConstraint* m_predictionWidthConstraint;
	UITextInputAssistantItem* m_defaultAssistantItem;
	UITextInputAssistantItem* m_currentAssistantItem;
	int m_validateGuard;
	char m_useLargeButton;
	char m_isLandscape;
	char m_lightKeyboard;
	char m_needsDismissButton;
	char m_needsUpdateBarOnMoveToWindow;
	char m_show;
	CGRect m_splitGap;
	char m_suppressAXSHairlineThickening;
	char _hideAssistantBar;
	char _shouldShow;

}

@property (assign,nonatomic) char hideAssistantBar;              //@synthesize hideAssistantBar=_hideAssistantBar - In the implementation block
@property (assign,nonatomic) char show; 
@property (assign,nonatomic) char shouldShow;                    //@synthesize shouldShow=_shouldShow - In the implementation block
+(id)activeInstance;
+(id)sharedInstance;
+(float)assistantBarHeight;
+(float)sideBarWidthForOrientation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)enabled;
-(char)show;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)dimKeys:(id)arg1 ;
-(char)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(id)defaultAssistantItem;
-(id)newAssistantItemWithDefaultItems;
-(float)assistantBarHeight;
-(char)hasItems;
-(void)setInputAssistantButtonItems;
-(char)hasCustomButtons;
-(void)updateBar;
-(void)updatePredictionViewForCustomButtons;
-(void)updateButtons;
-(void)setShouldShow:(char)arg1 ;
-(void)setShow:(char)arg1 ;
-(void)showKeyboard:(id)arg1 ;
-(char)hideAssistantBar;
-(void)setHideAssistantBar:(char)arg1 ;
-(float)sideBarWidthForOrientation:(int)arg1 ;
-(char)statisticForCalloutBarButtonSelection:(id)arg1 ;
-(void)setInputAssistantButtonItemsForResponder:(id)arg1 ;
-(id)currentAssistantItem;
-(char)enableInputClicksWhenVisible;
-(void)updateBar:(char)arg1 ;
-(float)assistantBarHeightForOrientation:(int)arg1 ;
-(char)showSwitch;
-(void)statisticForShortcutBarHideWithSwitcher;
-(void)assistantCut;
-(void)assistantCopy;
-(void)assistantUndo;
-(void)assistantRedo;
-(void)assistantPaste;
-(void)assistantBold;
-(void)assistantItalic;
-(void)assistantUnderline;
-(id)BIUGenerator;
-(void)assistantDismiss;
-(void)assistantWriteboard;
-(id)barButtonItem:(unsigned)arg1 ;
-(char)disabledByPrediction;
-(SEL)action:(int)arg1 ;
-(char)canPerformAction:(int)arg1 ;
-(void)executeAction:(int)arg1 ;
-(float)assistantBarWidth;
-(char)shouldShow;
@end

