/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/ListViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>

@class NSTimer, UISearchBar, NSString;

@interface SearchResultsViewController : ListViewController <UIScrollViewDelegate, UIViewControllerPreviewingDelegate_Private, UISearchResultsUpdating, UISearchBarDelegate> {

	NSTimer* _timer;
	char _showFilteredData;
	char _pendingUpdate;
	UISearchBar* _searchBar;

}

@property (assign,nonatomic,__weak) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)noContentStringForListTableView:(id)arg1 ;
-(char)showFilteredData;
-(id)backButtonTitleForEventDetails;
-(void)scrollToDate:(id)arg1 animated:(char)arg2 ;
-(char)shouldUpdateModelSelectedDate;
-(void)setShowFilteredData:(char)arg1 ;
-(void)_searchResultsUpdated:(id)arg1 ;
-(void)_updateFilterState;
-(void)_updateTableAlpha;
-(void)_setContentInsets;
-(void)_refreshView;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(int)positionForBar:(id)arg1 ;
-(void)viewDidLoad;
-(UISearchBar *)searchBar;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(CGRect)_searchBar:(id)arg1 proposedSearchFieldFrame:(CGRect)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(void)cancelTimer;
-(id)initWithModel:(id)arg1 ;
-(void)_eventStoreChanged:(id)arg1 ;
-(char)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1 ;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(char)arg3 ;
-(void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2 ;
-(char)eventViewControllerShouldHideInlineEditButton;
-(void)_setSearchString:(id)arg1 ;
@end

