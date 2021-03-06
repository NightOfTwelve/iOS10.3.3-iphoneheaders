/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class _UIRefreshControlContentView, UIScrollView, UIColor, NSAttributedString;

@interface UIRefreshControl : UIControl {

	int _style;
	_UIRefreshControlContentView* _contentView;
	UIScrollView* _scrollView;
	float _refreshControlHeight;
	float _visibleHeight;
	float _snappingHeight;
	float _additionalTopInset;
	char _insetsApplied;
	char _adjustingInsets;
	char _automaticContentOffsetAdjustmentEnabledWhenLastIdle;
	char _automaticContentOffsetAdjustmentEnabledNeedsReset;
	UIEdgeInsets _appliedInsets;
	int _refreshControlState;

}

@property (nonatomic,readonly) int refreshControlState;                                       //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (nonatomic,readonly) int style; 
@property (nonatomic,readonly) float _refreshControlHeight; 
@property (nonatomic,readonly) float _snappingHeight; 
@property (nonatomic,readonly) float _visibleHeight; 
@property (nonatomic,readonly) char _areInsetsBeingApplied; 
@property (getter=_appliedInsets,nonatomic,readonly) UIEdgeInsets appliedInsets; 
@property (getter=isRefreshing,nonatomic,readonly) char refreshing; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
+(Class)_contentViewClassForStyle:(int)arg1 ;
+(id)_defaultColor;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)_contentView;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)sizeToFit;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_didScroll;
-(UIEdgeInsets)_appliedInsets;
-(int)refreshControlState;
-(char)_areInsetsBeingApplied;
-(void)_removeInsets;
-(void)_update;
-(void)_addInsets;
-(void)beginRefreshing;
-(void)endRefreshing;
-(float)_refreshControlHeight;
-(id)_scrollView;
-(void)_setTintColor:(id)arg1 ;
-(id)_tintColor;
-(unsigned)_controlEventsForActionTriggered;
-(id)initWithStyle:(int)arg1 ;
-(id)_attributedTitle;
-(void)_setAttributedTitle:(id)arg1 ;
-(NSAttributedString *)attributedTitle;
-(float)_visibleHeight;
-(void)_updateSnappingHeight;
-(void)setRefreshControlState:(int)arg1 ;
-(void)_resizeToFitContents;
-(void)_removeInsetHeight:(float)arg1 ;
-(void)_addInsetHeight:(float)arg1 ;
-(float)revealedFraction;
-(int)_recomputeNewState;
-(void)_updateHiddenStateIfNeeded;
-(void)_updateConcealingMask;
-(float)_stiffnessForVelocity:(float)arg1 ;
-(CGPoint)_originForContentOffset:(CGPoint)arg1 ;
-(float)_visibleHeightForContentOffset:(CGPoint)arg1 origin:(CGPoint)arg2 ;
-(void)_setVisibleHeight:(float)arg1 ;
-(float)_impactIntensityForVelocity:(float)arg1 ;
-(void)_setRefreshControlState:(int)arg1 notify:(char)arg2 ;
-(char)_canTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(char)isRefreshing;
-(float)_snappingHeight;
-(char)_isApplyingInsets;
-(float)_scrollViewHeight;
@end

