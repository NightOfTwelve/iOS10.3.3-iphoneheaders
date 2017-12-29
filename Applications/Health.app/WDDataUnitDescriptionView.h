/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <UIKit/UIView.h>

@class HKDataUnit, UILabel, UITextView;

@interface WDDataUnitDescriptionView : UIView {

	HKDataUnit* _dataUnit;
	unsigned _style;
	UILabel* _descriptionHeadingLabel;
	UILabel* _descriptionLabel;
	UITextView* _attributionTextView;
	UILabel* _cautionaryLabel;

}
+(id)_metricsForStyle:(unsigned)arg1 ;
+(id)_descriptionHeadingFontForStyle:(unsigned)arg1 ;
+(id)_descriptionHeadingColorForStyle:(unsigned)arg1 ;
+(id)_descriptionTextFontForStyle:(unsigned)arg1 ;
+(id)_descriptionTextColorForStyle:(unsigned)arg1 ;
+(id)_attributionTextFontForStyle:(unsigned)arg1 ;
+(id)_cautionaryTextFontForStyle:(unsigned)arg1 ;
+(float)minimumHeightForStyle:(unsigned)arg1 ;
-(id)initWithDataUnit:(id)arg1 style:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setupUI;
@end
