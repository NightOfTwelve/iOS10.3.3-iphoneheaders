/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/ChartDetailCell.h>

@class ActivityActiveHoursChart;

@interface StandChartDetailCell : ChartDetailCell {

	ActivityActiveHoursChart* _chart;
	char _isWheelchairUser;

}
-(void)setWheelchairUser:(char)arg1 ;
-(id)initWithDate:(id)arg1 wheelchairUser:(char)arg2 ;
-(void)setActive:(id)arg1 goal:(id)arg2 percent:(double)arg3 ;
-(void)setTotalIdleHours:(id)arg1 chartData:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithDate:(id)arg1 ;
@end

