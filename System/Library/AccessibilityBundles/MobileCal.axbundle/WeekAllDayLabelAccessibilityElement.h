/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/MobileCal.axbundle/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface WeekAllDayLabelAccessibilityElement : UIAccessibilityElement {

	unsigned _dayIndex;
	UIView* _allDayView;

}

@property (assign,nonatomic) unsigned dayIndex;                       //@synthesize dayIndex=_dayIndex - In the implementation block
@property (assign,nonatomic,__weak) UIView * allDayView;              //@synthesize allDayView=_allDayView - In the implementation block
-(void)setAllDayView:(UIView *)arg1 ;
-(void)setDayIndex:(unsigned)arg1 ;
-(unsigned)dayIndex;
-(CGRect)accessibilityFrame;
-(UIView *)allDayView;
@end
