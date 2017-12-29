/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, UIView, NSString, SBUILegibilityLabel, NSArray;

@interface SBLockScreenDeviceInformationTextView : UIView <SBUILegibility> {

	_UILegibilitySettings* _legibilitySettings;
	float _strength;
	UIView* _containerView;
	NSString* _supervisionText;
	SBUILegibilityLabel* _supervisionLabel;
	NSArray* _deviceInformationText;
	SBUILegibilityLabel* _deviceInformationLabel;

}

@property (nonatomic,copy) NSString * supervisionText;                                //@synthesize supervisionText=_supervisionText - In the implementation block
@property (nonatomic,copy) NSArray * deviceInformationText;                           //@synthesize deviceInformationText=_deviceInformationText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) float strength;                                          //@synthesize strength=_strength - In the implementation block
-(void)setDeviceInformationText:(NSArray *)arg1 ;
-(void)setSupervisionText:(NSString *)arg1 ;
-(void)_updateSupervisionLabel;
-(void)_updateDeviceInformationLabel;
-(NSString *)supervisionText;
-(NSArray *)deviceInformationText;
-(float)_deviceInformationParagraphSpacing;
-(float)_deviceInformationLabelFontLeading;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(float)strength;
-(void)setStrength:(float)arg1 ;
-(id)_labelFont;
@end
