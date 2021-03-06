/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/Clock.h>

@class WorldClockCity, AnalogClockView, UILabel, NSDateFormatter;

@interface MTWorldClockView : UIView <Clock> {

	WorldClockCity* _city;
	AnalogClockView* _analogClock;
	UILabel* _cityNameLabel;
	UILabel* _timeZoneOffsetLabel;
	UILabel* _sunriseLabel;
	UILabel* _sunsetLabel;
	int _minute;
	NSDateFormatter* _timeFormatter;

}

@property (nonatomic,retain) AnalogClockView * analogClock;                //@synthesize analogClock=_analogClock - In the implementation block
@property (nonatomic,retain) UILabel * cityNameLabel;                      //@synthesize cityNameLabel=_cityNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeZoneOffsetLabel;                //@synthesize timeZoneOffsetLabel=_timeZoneOffsetLabel - In the implementation block
@property (nonatomic,retain) UILabel * sunriseLabel;                       //@synthesize sunriseLabel=_sunriseLabel - In the implementation block
@property (nonatomic,retain) UILabel * sunsetLabel;                        //@synthesize sunsetLabel=_sunsetLabel - In the implementation block
@property (assign,nonatomic) int minute;                                   //@synthesize minute=_minute - In the implementation block
@property (nonatomic,retain) NSDateFormatter * timeFormatter;              //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (nonatomic,retain) WorldClockCity * city;                        //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) int runMode; 
-(void)handleContentSizeChange;
-(void)setAnalogClock:(AnalogClockView *)arg1 ;
-(AnalogClockView *)analogClock;
-(void)setCityNameLabel:(UILabel *)arg1 ;
-(UILabel *)cityNameLabel;
-(void)setTimeZoneOffsetLabel:(UILabel *)arg1 ;
-(UILabel *)timeZoneOffsetLabel;
-(void)setSunriseLabel:(UILabel *)arg1 ;
-(UILabel *)sunriseLabel;
-(void)setSunsetLabel:(UILabel *)arg1 ;
-(UILabel *)sunsetLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)stop;
-(void)start;
-(float)preferredHeight;
-(double)updateInterval;
-(int)minute;
-(void)setMinute:(int)arg1 ;
-(void)updateTime;
-(void)updateDetails;
-(NSDateFormatter *)timeFormatter;
-(void)setCity:(WorldClockCity *)arg1 ;
-(void)setTimeFormatter:(NSDateFormatter *)arg1 ;
-(double)coarseUpdateInterval;
-(void)updateFlutter;
-(void)updateTimeContinuously:(int)arg1 ;
-(int)runMode;
-(WorldClockCity *)city;
@end

