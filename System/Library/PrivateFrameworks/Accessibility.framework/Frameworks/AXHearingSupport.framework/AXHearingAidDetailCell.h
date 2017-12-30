/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class AXRemoteHearingAidDevice, UILabel, UIView, UIActivityIndicatorView, NSNumberFormatter;

@interface AXHearingAidDetailCell : PSTableCell {

	AXRemoteHearingAidDevice* _device;
	UILabel* _leftLabel;
	UIView* _leftStatusIndicator;
	UILabel* _rightLabel;
	UIView* _rightStatusIndicator;
	UIActivityIndicatorView* _loadingIndicator;
	NSNumberFormatter* _numberFormatter;
	char _bluetoothAvailable;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
+(float)heightRequiredForDevice:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(void)updateDetails;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 andDevice:(id)arg3 ;
-(void)bluetoothAvailabilityDidChange:(id)arg1 ;
-(void)updateAvailability;
-(id)imageForBatteryLevel:(float)arg1 ;
-(AXRemoteHearingAidDevice *)device;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
