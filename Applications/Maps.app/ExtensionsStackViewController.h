/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/ContaineeViewController.h>

@class UIView, UIStackView, UIScrollView;

@interface ExtensionsStackViewController : ContaineeViewController {

	UIView* _headerView;
	UIStackView* _stackView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
-(void)didChangeLayout:(unsigned)arg1 ;
-(id)stackedViews;
-(void)_updateScrollViewForLayout:(unsigned)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewDidLoad;
-(UIStackView *)stackView;
-(id)headerView;
@end

