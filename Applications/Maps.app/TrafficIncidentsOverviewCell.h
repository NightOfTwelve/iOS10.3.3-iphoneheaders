/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>

@class UIView, NSLayoutConstraint, VKTrafficIncident, _MKUILabel, UIImageView, TrafficIncidentsDateFormatter;

@interface TrafficIncidentsOverviewCell : MKTableViewCell {

	UIView* _centeringView;
	NSLayoutConstraint* _titleLabelBaselineToTopConstraint;
	NSLayoutConstraint* _locationLabelBaselineToTitleLabelBaselineConstraint;
	NSLayoutConstraint* _startLabelBaselineToTitleLabelBaselineConstraint;
	NSLayoutConstraint* _startLabelBaselineToLocationLabelBaselineConstraint;
	NSLayoutConstraint* _bottomToStartLabelBaselineConstraint;
	NSLayoutConstraint* _endLabelBaselineToStartLabelBaselineConstraint;
	NSLayoutConstraint* _bottomToEndLabelBaselineConstraint;
	char _isDimmed;
	VKTrafficIncident* _incident;
	_MKUILabel* _titleLabel;
	_MKUILabel* _locationLabel;
	_MKUILabel* _startLabel;
	_MKUILabel* _endLabel;
	UIImageView* _iconView;
	TrafficIncidentsDateFormatter* _formatter;

}

@property (nonatomic,retain) _MKUILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * locationLabel;                             //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * startLabel;                                //@synthesize startLabel=_startLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * endLabel;                                  //@synthesize endLabel=_endLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                 //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) TrafficIncidentsDateFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) VKTrafficIncident * incident;                           //@synthesize incident=_incident - In the implementation block
@property (assign,nonatomic) char isDimmed;                                          //@synthesize isDimmed=_isDimmed - In the implementation block
+(id)reuseIdentifier;
-(void)_updateStyleValuesFromTheme;
-(void)setIncident:(VKTrafficIncident *)arg1 ;
-(id)_autolayoutConstraints;
-(void)setIsDimmed:(char)arg1 ;
-(_MKUILabel *)startLabel;
-(void)setStartLabel:(_MKUILabel *)arg1 ;
-(_MKUILabel *)endLabel;
-(void)setEndLabel:(_MKUILabel *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(_MKUILabel *)titleLabel;
-(void)setTitleLabel:(_MKUILabel *)arg1 ;
-(TrafficIncidentsDateFormatter *)formatter;
-(void)setFormatter:(TrafficIncidentsDateFormatter *)arg1 ;
-(void)_createSubviews;
-(void)_updateConstraintValues;
-(VKTrafficIncident *)incident;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateFonts;
-(_MKUILabel *)locationLabel;
-(void)setLocationLabel:(_MKUILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)_updateLabels;
-(char)isDimmed;
-(void)_updateIcon;
-(void)setIconView:(UIImageView *)arg1 ;
@end
