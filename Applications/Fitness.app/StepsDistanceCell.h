/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <Fitness/PlatterTableViewCell.h>

@class UILabel, NSDate, HKQuantity;

@interface StepsDistanceCell : PlatterTableViewCell {

	UILabel* _stepsTitle;
	UILabel* _stepsValue;
	UILabel* _distanceTitle;
	UILabel* _distanceValue;
	NSDate* _date;
	HKQuantity* _stepCount;
	HKQuantity* _pushCount;
	char _isWheelchairUser;

}
-(void)_setStepOrPushCount:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDistance:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)_setupSubviews;
-(void)setStepCount:(id)arg1 ;
-(void)setPushCount:(id)arg1 ;
-(void)setIsWheelchairUser:(char)arg1 ;
@end
