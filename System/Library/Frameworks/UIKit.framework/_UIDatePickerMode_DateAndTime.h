/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode.h>

@class NSString, NSDateFormatter;

@interface _UIDatePickerMode_DateAndTime : _UIDatePickerMode {

	char _weekdayLast;
	float _wmdWeekMonthDayWidth;
	float _wmdHourWidth;
	float _wmdMinuteWidth;
	float _wmdAMPMWidth;
	float _wmdWeekdayWidth;
	NSString* _weekdayFormat;
	NSString* _monthDayFormat;
	NSString* _hourFormat;
	NSString* _minuteFormat;
	NSDateFormatter* _relativeFormatter;
	NSDateFormatter* _weekdayFormatter;

}
+(int)datePickerMode;
+(unsigned)extractableCalendarUnits;
-(unsigned*)elements;
-(float)weekdayWidth;
-(void)noteCalendarChanged;
-(int)displayedCalendarUnits;
-(void)loadDate:(id)arg1 animated:(char)arg2 ;
-(id)viewForRow:(int)arg1 inComponent:(int)arg2 reusingView:(id)arg3 ;
-(void)updateEnabledStateOfViewForRow:(int)arg1 inComponent:(int)arg2 ;
-(void)resetComponentWidths;
-(void)_shouldReset:(id)arg1 ;
-(id)dateFormatForCalendarUnit:(unsigned)arg1 ;
-(id)baseDateComponents;
-(float)widthForCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(id)localizedFormatString;
-(int)numberOfRowsForCalendarUnit:(unsigned)arg1 ;
-(unsigned)nextUnitSmallerThanUnit:(unsigned)arg1 ;
-(unsigned)nextUnitLargerThanUnit:(unsigned)arg1 ;
-(id)dateForRow:(int)arg1 inCalendarUnit:(unsigned)arg2 ;
-(int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4 ;
-(void)_updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 usingSelectionBarValue:(char)arg2 ;
-(id)titleForRow:(int)arg1 inComponent:(int)arg2 ;
-(char)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned)arg3 ;
-(void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg1 ;
-(void)_takeBaseDateComponentsFromDate:(id)arg1 ;
-(id)weekdayFormatter;
-(float)componentWidthForDateTimeCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(id)_dateForWeekMonthDayRow:(int)arg1 ;
-(char)_shouldEnableWeekMonthDayForRow:(int)arg1 ;
-(id)relativeFormatter;
-(char)isWeekdayLast;
@end

