/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/TV-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSLayoutConstraint, UIView, MPUItemOfferButton, UIButton, UILabel;

@interface VideosDetailHeaderView : UIView {

	NSMutableArray* _layoutConditionalConstraints;
	NSLayoutConstraint* _lastTrailingSubtitleRatingsContainerConstraint;
	UIView* _playbackButtonsLayoutGuide;
	MPUItemOfferButton* _cloudButton;
	UIButton* _playButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _expirationLabel;
	unsigned _layoutMode;
	NSMutableArray* _ratingViews;
	UIView* _subtitleRatingsContainerView;
	unsigned _appliedLayout;

}

@property (nonatomic,retain) NSMutableArray * ratingViews;                       //@synthesize ratingViews=_ratingViews - In the implementation block
@property (nonatomic,retain) UIView * subtitleRatingsContainerView;              //@synthesize subtitleRatingsContainerView=_subtitleRatingsContainerView - In the implementation block
@property (assign,nonatomic) unsigned appliedLayout;                             //@synthesize appliedLayout=_appliedLayout - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * expirationLabel;                        //@synthesize expirationLabel=_expirationLabel - In the implementation block
@property (nonatomic,readonly) UIButton * playButton;                            //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,readonly) MPUItemOfferButton * cloudButton;                 //@synthesize cloudButton=_cloudButton - In the implementation block
@property (assign,nonatomic) unsigned layoutMode;                                //@synthesize layoutMode=_layoutMode - In the implementation block
-(void)removeRatings;
-(void)_configureForHorizontalLayout;
-(void)_configureForVerticalLayout;
-(UIView *)subtitleRatingsContainerView;
-(NSMutableArray *)ratingViews;
-(void)setRatingViews:(NSMutableArray *)arg1 ;
-(UILabel *)expirationLabel;
-(MPUItemOfferButton *)cloudButton;
-(id)addRating:(id)arg1 filled:(char)arg2 ;
-(void)setSubtitleRatingsContainerView:(UIView *)arg1 ;
-(unsigned)appliedLayout;
-(void)setAppliedLayout:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(UIButton *)playButton;
-(unsigned)layoutMode;
-(void)setLayoutMode:(unsigned)arg1 ;
@end

