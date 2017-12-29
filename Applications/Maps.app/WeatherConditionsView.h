/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class WeatherConditions, MapsThemeImageView, MapsThemeLabel;

@interface WeatherConditionsView : UIView {

	WeatherConditions* _weatherConditions;
	MapsThemeImageView* _imageView;
	MapsThemeLabel* _titleLabel;

}

@property (nonatomic,retain) MapsThemeImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) MapsThemeLabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) WeatherConditions * weatherConditions;              //@synthesize weatherConditions=_weatherConditions - In the implementation block
-(void)_customInit;
-(WeatherConditions *)weatherConditions;
-(void)setWeatherConditions:(WeatherConditions *)arg1 ;
-(void)_toggleWeatherConditionsVisibility;
-(void)setHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(MapsThemeLabel *)titleLabel;
-(MapsThemeImageView *)imageView;
-(void)setHidden:(char)arg1 animated:(char)arg2 ;
-(void)setImageView:(MapsThemeImageView *)arg1 ;
-(void)setTitleLabel:(MapsThemeLabel *)arg1 ;
-(void)_createSubviews;
-(void)_updateSubviews;
-(void)_setupConstraints;
@end
