/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <UIKit/UIButton.h>

@class IMNowPlayingContentLabel, UIImageView;

@interface IMNowPlayingButton : UIButton {

	IMNowPlayingContentLabel* _contentView;
	UIImageView* _chevron;
	float _contentViewTopEdgeInset;
	float _contentViewBottomEdgeInset;

}

@property (assign,nonatomic) float contentViewTopEdgeInset;                 //@synthesize contentViewTopEdgeInset=_contentViewTopEdgeInset - In the implementation block
@property (assign,nonatomic) float contentViewBottomEdgeInset;              //@synthesize contentViewBottomEdgeInset=_contentViewBottomEdgeInset - In the implementation block
+(id)new;
-(float)contentViewTopEdgeInset;
-(float)contentViewBottomEdgeInset;
-(void)setContentViewTopEdgeInset:(float)arg1 ;
-(void)setContentViewBottomEdgeInset:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
@end

