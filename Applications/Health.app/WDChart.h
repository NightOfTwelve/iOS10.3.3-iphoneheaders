/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDChartWithXAxis.h>

@class UIImageView, UIView, WDChartRenderer, WDChartBackgroundView;

@interface WDChart : WDChartWithXAxis {

	UIImageView* _chartCanvas;
	UIImageView* _chartFillView;
	UIImageView* _chartSecondaryFillView;
	UIView* _topDividerView;
	UIView* _bottomDividerView;
	char _shouldAnimateAxisChanges;
	WDChartRenderer* _chartRenderer;
	int _animationStyle;
	WDChartBackgroundView* _chartBackgroundView;
	float _dividerInset;
	double _animationDuration;

}

@property (nonatomic,retain) WDChartRenderer * chartRenderer;                          //@synthesize chartRenderer=_chartRenderer - In the implementation block
@property (assign,nonatomic) int animationStyle;                                       //@synthesize animationStyle=_animationStyle - In the implementation block
@property (assign,nonatomic) double animationDuration;                                 //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,retain) WDChartBackgroundView * chartBackgroundView;              //@synthesize chartBackgroundView=_chartBackgroundView - In the implementation block
@property (assign,nonatomic) float dividerInset;                                       //@synthesize dividerInset=_dividerInset - In the implementation block
@property (assign,nonatomic) char shouldAnimateAxisChanges;                            //@synthesize shouldAnimateAxisChanges=_shouldAnimateAxisChanges - In the implementation block
-(void)_layoutChartCanvas;
-(void)_updateChartCanvasWithChartImage:(id)arg1 chartFillImage:(id)arg2 chartSecondaryFillImage:(id)arg3 finishedLoadingData:(char)arg4 animated:(char)arg5 ;
-(void)_renderGraph:(char)arg1 ;
-(void)refreshChart;
-(id)_transitionFromImageView:(id)arg1 withImage:(id)arg2 ;
-(void)_updateDataWithRenderer:(id)arg1 animated:(char)arg2 ;
-(void)setChartBackgroundView:(WDChartBackgroundView *)arg1 ;
-(void)setChartRenderer:(WDChartRenderer *)arg1 ;
-(void)setChartCompositingFilter:(id)arg1 ;
-(void)setChartFillCompositingFilter:(id)arg1 ;
-(void)setChartSecondaryFillCompositingFilter:(id)arg1 ;
-(CGRect)chartBounds;
-(id)rendererMinXValue;
-(id)rendererMaxXValue;
-(void)_significantTimeChangeOccurred;
-(WDChartRenderer *)chartRenderer;
-(WDChartBackgroundView *)chartBackgroundView;
-(float)dividerInset;
-(void)setDividerInset:(float)arg1 ;
-(char)shouldAnimateAxisChanges;
-(void)setShouldAnimateAxisChanges:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setAnimationDuration:(double)arg1 ;
-(double)animationDuration;
-(int)animationStyle;
-(void)setAnimationStyle:(int)arg1 ;
-(CGRect)_chartRect;
-(void)reloadData:(char)arg1 ;
@end

