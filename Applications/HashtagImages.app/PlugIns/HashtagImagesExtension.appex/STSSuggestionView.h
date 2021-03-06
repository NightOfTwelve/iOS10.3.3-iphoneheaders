/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HashtagImages.app/PlugIns/HashtagImagesExtension.appex/HashtagImagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HashtagImagesExtension/HashtagImagesExtension-Structs.h>
#import <UIKit/UIView.h>

@protocol STSSuggestionViewDelegate;
@class STSSuggestionFooter, UITableView, UIView;

@interface STSSuggestionView : UIView {

	STSSuggestionFooter* _footerView;
	UITableView* _tableView;
	UIView* _overlayView;
	id<STSSuggestionViewDelegate> _delegate;
	CGPoint _footerOffset;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                       //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) CGPoint footerOffset;                                       //@synthesize footerOffset=_footerOffset - In the implementation block
@property (assign,getter=isShowingFooter,nonatomic) char showingFooter; 
@property (assign,nonatomic,__weak) id<STSSuggestionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleLogoTap:(id)arg1 ;
-(void)_updateFooterOrigin;
-(void)setOverlayView:(id)arg1 animated:(char)arg2 ;
-(void)setFooterOffset:(CGPoint)arg1 ;
-(char)isShowingFooter;
-(void)setShowingFooter:(char)arg1 ;
-(void)updateFooterImage:(id)arg1 ;
-(CGPoint)footerOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<STSSuggestionViewDelegate>)arg1 ;
-(id<STSSuggestionViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)_updateContentInsets;
-(UITableView *)tableView;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(CGSize)footerSize;
@end

