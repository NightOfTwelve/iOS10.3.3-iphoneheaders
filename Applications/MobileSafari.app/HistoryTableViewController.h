/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileSafari/BookmarksToolbarItemProvider.h>
#import <MobileSafari/HistoryTableViewDataSourceDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <MobileSafari/BookmarksPanelStateRestoring.h>

@protocol HistoryTableViewControllerDelegate;
@class UIBarButtonItem, NSTimer, SafariClearBrowsingDataController, HistoryTableViewDataSource, NSString;

@interface HistoryTableViewController : UITableViewController <BookmarksToolbarItemProvider, HistoryTableViewDataSourceDelegate, UISearchBarDelegate, UIPopoverPresentationControllerDelegate, BookmarksPanelStateRestoring> {

	UIBarButtonItem* _clearHistoryButton;
	UIBarButtonItem* _doneBarButtonItem;
	NSTimer* _saveChangesToCloudHistoryTimer;
	SafariClearBrowsingDataController* _clearDataController;
	HistoryTableViewDataSource* _historyDataSource;
	char _needsInitialContentOffsetUpdateForTableHeaderView;
	char _needsContentOffsetUpdate;
	id<HistoryTableViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HistoryTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * collectionType; 
-(id)bookmarksNavigationController;
-(id)currentStateDictionary;
-(char)restoreStateWithDictionary:(id)arg1 ;
-(float)currentScrollPosition;
-(void)restoreScrollPosition:(float)arg1 ;
-(void)updateClearHistoryButtonEnable;
-(id)bookmarksRightBarButtonItem;
-(id)_clearHistoryBarButtonItem;
-(void)_clearHistory;
-(id)_clearHistoryAlertMessage;
-(void)_saveChangesToCloudHistorySoon;
-(void)_saveChangesToCloudHistory;
-(void)historyTableViewDataSourceDidLoadContent:(id)arg1 ;
-(void)historyTableViewDataSourceWillChangeContent:(id)arg1 ;
-(void)historyTableViewDataSourceDidChangeContent:(id)arg1 ;
-(void)historyTableViewDataSource:(id)arg1 didChangeSectionAtIndex:(int)arg2 forChangeType:(int)arg3 ;
-(void)historyTableViewDataSource:(id)arg1 didChangeRowAtIndexPath:(id)arg2 forChangeType:(int)arg3 ;
-(id)safari_tableViewScrollPositionSaveIdentifier;
-(id)init;
-(void)setDelegate:(id<HistoryTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<HistoryTableViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(id)_doneBarButtonItem;
-(void)_updateContentOffsetIfNeeded;
-(void)_endEditing;
-(NSString *)collectionType;
@end
