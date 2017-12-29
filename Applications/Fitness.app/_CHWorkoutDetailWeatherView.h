/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIButton, CLLocation;

@interface _CHWorkoutDetailWeatherView : UIView {

	UILabel* _titleLabel;
	UIImageView* _weatherConditionImageView;
	UILabel* _temperatureLabel;
	UILabel* _humidityLabel;
	UIButton* _twcButton;
	char _workoutTitle;
	CLLocation* _weatherLocation;

}

@property (nonatomic,retain) CLLocation * weatherLocation;              //@synthesize weatherLocation=_weatherLocation - In the implementation block
-(void)_constrainViews;
-(void)configureWithWorkout:(id)arg1 ;
-(void)twcLogoTapped:(id)arg1 ;
-(void)setTemperature:(id)arg1 humidity:(id)arg2 weatherCondition:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CLLocation *)weatherLocation;
-(void)setWeatherLocation:(CLLocation *)arg1 ;
@end
