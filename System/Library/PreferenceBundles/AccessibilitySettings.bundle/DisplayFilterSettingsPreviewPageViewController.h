/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPageViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>

@protocol DisplayFilterPageControllerDelegate;
@class NSString;

@interface DisplayFilterSettingsPreviewPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate> {

	float _pageHeight;
	id<DisplayFilterPageControllerDelegate> _displayFilterPageDelegate;

}

@property (assign,nonatomic) float pageHeight;                                                               //@synthesize pageHeight=_pageHeight - In the implementation block
@property (nonatomic,readonly) int pageCount; 
@property (assign,nonatomic) int currentPage; 
@property (assign,nonatomic) id<DisplayFilterPageControllerDelegate> displayFilterPageDelegate;              //@synthesize displayFilterPageDelegate=_displayFilterPageDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setControllers;
-(id<DisplayFilterPageControllerDelegate>)displayFilterPageDelegate;
-(id)viewControllerAtIndex:(unsigned)arg1 ;
-(void)setDisplayFilterPageDelegate:(id<DisplayFilterPageControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setCurrentPage:(int)arg1 ;
-(int)currentPage;
-(int)pageCount;
-(int)indexOfViewController:(id)arg1 ;
-(id)initWithTransitionStyle:(int)arg1 navigationOrientation:(int)arg2 options:(id)arg3 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(char)arg2 previousViewControllers:(id)arg3 transitionCompleted:(char)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(float)pageHeight;
-(void)setPageHeight:(float)arg1 ;
@end

