/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/DataSource.h>
#import <Maps/RecentsDataProviderDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol ShareDelegate, DeleteDelegate, PlaceCardActionDelegate, ParkedCarActionDelegate;
@class RecentsDataProvider, UITableView, UITableViewRowAction, SuggestionsItemSource, PersonalizedItemSource, NSString;

@interface RecentsDataSource : DataSource <RecentsDataProviderDelegate, UITableViewDelegate, UITableViewDataSource> {

	RecentsDataProvider* _recentsDataProvider;
	UITableView* _tableView;
	UITableViewRowAction* _deleteAction;
	UITableViewRowAction* _shareAction;
	UITableViewRowAction* _nameLocationAction;
	UITableViewRowAction* _editAddressAction;
	UITableViewRowAction* _editLocationAction;
	SuggestionsItemSource* _suggestionsItemSource;
	id<ShareDelegate> _shareDelegate;
	id<DeleteDelegate> _deleteDelegate;
	id<PlaceCardActionDelegate> _placeCardActionDelegate;
	id<ParkedCarActionDelegate> _parkedCarActionDelegate;

}

@property (assign,nonatomic) int searchMode; 
@property (assign,nonatomic,__weak) id<ShareDelegate> shareDelegate;                                  //@synthesize shareDelegate=_shareDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<DeleteDelegate> deleteDelegate;                                //@synthesize deleteDelegate=_deleteDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PlaceCardActionDelegate> placeCardActionDelegate;              //@synthesize placeCardActionDelegate=_placeCardActionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<ParkedCarActionDelegate> parkedCarActionDelegate;              //@synthesize parkedCarActionDelegate=_parkedCarActionDelegate - In the implementation block
@property (nonatomic,readonly) PersonalizedItemSource * suggestionsItemSource; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)searchMode;
-(void)setSearchMode:(int)arg1 ;
-(id)objectsForAnalytics;
-(PersonalizedItemSource *)suggestionsItemSource;
-(void)shareRowAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<ShareDelegate>)shareDelegate;
-(void)setShareDelegate:(id<ShareDelegate>)arg1 ;
-(void)recentsDataProviderDidUpdate:(id)arg1 ;
-(id)initWithViewMode:(int)arg1 ;
-(id)initWithTableView:(id)arg1 andViewMode:(int)arg2 ;
-(id)mapsSuggestionEntryFromIndexPath:(id)arg1 ;
-(void)editAddressAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)nameLocationAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)editLocationAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_isTableViewHidden:(id)arg1 ;
-(id)_shareItemForObject:(id)arg1 ;
-(id<DeleteDelegate>)deleteDelegate;
-(void)setDeleteDelegate:(id<DeleteDelegate>)arg1 ;
-(id<PlaceCardActionDelegate>)placeCardActionDelegate;
-(void)setPlaceCardActionDelegate:(id<PlaceCardActionDelegate>)arg1 ;
-(id<ParkedCarActionDelegate>)parkedCarActionDelegate;
-(void)setParkedCarActionDelegate:(id<ParkedCarActionDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setActive:(char)arg1 ;
-(float)contentHeight;
-(void)deleteRowAtIndexPath:(id)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
@end

