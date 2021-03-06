/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <UIKit/UIPopoverBackgroundView.h>

@class IMTheme, NSString, UIImageView;

@interface IMPopoverBackgroundView : UIPopoverBackgroundView {

	IMTheme* _theme;
	NSString* _templateName;
	float _arrowOffset;
	unsigned _arrowDirection;
	NSString* _lastBackgroundImageName;
	UIImageView* _backgroundSliceNoArrow;
	UIImageView* _backgroundSliceArrow;

}

@property (nonatomic,copy) NSString * lastBackgroundImageName;                  //@synthesize lastBackgroundImageName=_lastBackgroundImageName - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundSliceNoArrow;              //@synthesize backgroundSliceNoArrow=_backgroundSliceNoArrow - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundSliceArrow;                //@synthesize backgroundSliceArrow=_backgroundSliceArrow - In the implementation block
@property (nonatomic,retain) IMTheme * theme;                                   //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy) NSString * templateName;                             //@synthesize templateName=_templateName - In the implementation block
+(id)itm_shadowPathForRect:(CGRect)arg1 arrowDirection:(unsigned)arg2 ;
+(float)arrowHeight;
+(float)arrowBase;
+(UIEdgeInsets)contentViewInsets;
-(void)setLastBackgroundImageName:(NSString *)arg1 ;
-(void)itm_updateShadow;
-(id)itm_shadowPath;
-(NSString *)lastBackgroundImageName;
-(UIImageView *)backgroundSliceNoArrow;
-(void)setBackgroundSliceNoArrow:(UIImageView *)arg1 ;
-(UIImageView *)backgroundSliceArrow;
-(void)setBackgroundSliceArrow:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(unsigned)arrowDirection;
-(void)setArrowDirection:(unsigned)arg1 ;
-(void)setArrowOffset:(float)arg1 ;
-(id)backgroundImageName;
-(float)arrowOffset;
-(NSString *)templateName;
-(void)setTemplateName:(NSString *)arg1 ;
-(IMTheme *)theme;
-(void)setTheme:(IMTheme *)arg1 ;
@end

