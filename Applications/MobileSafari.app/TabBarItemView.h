/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, UILabel, NSString, TabBar, UIButton;

@interface TabBarItemView : UIView {

	UIView* _border;
	UIView* _borderOverlay;
	UIImageView* _closeButtonImageView;
	UIImageView* _closeButtonOverlayImageView;
	UIView* _titleClipperView;
	UILabel* _titleLabel;
	UILabel* _titleOverlayLabel;
	NSString* _titleText;
	TabBar* _tabBar;
	NSString* _truncatedTitleText;
	CGSize _truncatedTitleTextSize;
	char _titleWasTruncated;
	char _active;
	char _reordering;
	char _isPlaceholder;
	char _hidesTitleText;
	UIButton* _closeButton;
	int _visibleEdge;
	float _titleLayoutWidth;
	int _titleAnchorEdge;
	float _titleAnchorAdditionalOffset;

}

@property (nonatomic,readonly) UIButton * closeButton;                         //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                      //@synthesize active=_active - In the implementation block
@property (assign,getter=isReordering,nonatomic) char reordering;              //@synthesize reordering=_reordering - In the implementation block
@property (assign,nonatomic) char isPlaceholder;                               //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (assign,nonatomic) int visibleEdge;                                  //@synthesize visibleEdge=_visibleEdge - In the implementation block
@property (assign,nonatomic) char hidesTitleText;                              //@synthesize hidesTitleText=_hidesTitleText - In the implementation block
@property (assign,nonatomic) float titleLayoutWidth;                           //@synthesize titleLayoutWidth=_titleLayoutWidth - In the implementation block
@property (assign,nonatomic) int titleAnchorEdge;                              //@synthesize titleAnchorEdge=_titleAnchorEdge - In the implementation block
@property (assign,nonatomic) float titleAnchorAdditionalOffset;                //@synthesize titleAnchorAdditionalOffset=_titleAnchorAdditionalOffset - In the implementation block
-(void)setHidesTitleText:(char)arg1 ;
-(void)updateTabBarStyle;
-(void)setVisibleEdge:(int)arg1 ;
-(void)setTitleLayoutWidth:(float)arg1 ;
-(void)setTitleAnchorAdditionalOffset:(float)arg1 ;
-(void)updateTitleTruncation;
-(void)setTitleAnchorEdge:(int)arg1 ;
-(float)titleLayoutWidth;
-(char)hidesTitleText;
-(float)titleAnchorAdditionalOffset;
-(int)_physicalEdgeForLogicalEdge:(int)arg1 ;
-(CGRect)_titleBounds;
-(void)_layoutTitleLabelUsingCachedTruncation;
-(CGRect)_titleBoundingBox;
-(id)_truncatedTitleWithFont:(id)arg1 desiredWidth:(float)arg2 truncatedSize:(CGSize*)arg3 ;
-(void)_updateTitleBlends;
-(void)_layoutEdges;
-(void)_layoutTitleClipperView;
-(char)_canUseCachedTitleTruncationOnBoundsChange;
-(int)visibleEdge;
-(int)titleAnchorEdge;
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(char)isActive;
-(char)isPlaceholder;
-(void)setActive:(char)arg1 ;
-(id)initWithTabBar:(id)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(UIButton *)closeButton;
-(void)_layoutCloseButton;
-(void)setIsPlaceholder:(char)arg1 ;
-(void)_layoutTitleLabel;
-(void)setReordering:(char)arg1 ;
-(char)isReordering;
@end
