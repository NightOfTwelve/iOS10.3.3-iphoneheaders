/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface DirectionsRouteOverviewView : UIView {

	char _isDimmed;
	UILabel* _titleLabel;
	UILabel* _timeLabel;
	UILabel* _nameLabel;
	UILabel* _distanceLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                  //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * distanceLabel;              //@synthesize distanceLabel=_distanceLabel - In the implementation block
@property (assign,nonatomic) char isDimmed;                        //@synthesize isDimmed=_isDimmed - In the implementation block
-(void)setIsDimmed:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDistanceLabel:(UILabel *)arg1 ;
-(UILabel *)distanceLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)_updateLabels;
-(char)isDimmed;
@end
