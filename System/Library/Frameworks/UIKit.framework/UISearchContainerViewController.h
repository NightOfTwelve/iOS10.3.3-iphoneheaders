/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController {

	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
-(void)viewDidAppear:(char)arg1 ;
-(char)_transitionsChildViewControllers;
-(void)_prepareForContainerTransition:(id)arg1 ;
-(UISearchController *)searchController;
-(void)_presentSearchControllerIfNecessary;
-(id)initWithSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
@end
