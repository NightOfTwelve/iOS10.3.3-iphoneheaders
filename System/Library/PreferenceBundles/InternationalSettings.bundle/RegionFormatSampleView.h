/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel;

@interface RegionFormatSampleView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	float _sized;
	float _labelTopPadding[4];

}
-(void)setTextForRegionExample:(id)arg1 ;
-(id)generateRegionSampleLabel;
-(void)layoutSubviews;
-(void)dealloc;
-(id)_accessibilityLabels;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
@end

