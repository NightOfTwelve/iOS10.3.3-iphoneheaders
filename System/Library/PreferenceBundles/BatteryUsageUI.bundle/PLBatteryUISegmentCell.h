/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BatteryUsageUI/BatteryUsageUI-Structs.h>
#import <Preferences/PSTableCell.h>

@protocol PLBatteryUISegmentCellDelegate;
@class UISegmentedControl, UIButton, UIView, UIImage, NSNumber;

@interface PLBatteryUISegmentCell : PSTableCell {

	UISegmentedControl* _daySegmentControl;
	UIButton* _button1;
	UIView* _button2;
	UIImage* _toggleImageOn;
	NSNumber* _selectedSegment;
	id<PLBatteryUISegmentCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBatteryUISegmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)refresh1:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<PLBatteryUISegmentCellDelegate>)arg1 ;
-(id<PLBatteryUISegmentCellDelegate>)delegate;
-(void)valueChanged:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(char)canReload;
@end

