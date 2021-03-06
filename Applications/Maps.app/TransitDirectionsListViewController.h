/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <Maps/TransitDirectionsIncidentCellDelegate.h>
#import <Maps/TransitDirectionsClusteredVehiclesCellDelegate.h>
#import <libobjc.A.dylib/GEOComposedRouteObserver.h>
#import <Maps/RoutePlanningFooterViewDelegate.h>
#import <Maps/RouteDirectionsListController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Maps/TransitDirectionsInstructionsCellDelegate.h>

@protocol TransitDirectionsListViewControllerDelegate;
@class UITableView, Route, NSIndexPath, TransitDirectionsIconCell, NSCache, MapsThrottler, MKArtworkImageView, NSMutableArray, MNLocation, NSString;

@interface TransitDirectionsListViewController : UIViewController <TransitDirectionsIncidentCellDelegate, TransitDirectionsClusteredVehiclesCellDelegate, GEOComposedRouteObserver, RoutePlanningFooterViewDelegate, RouteDirectionsListController, UITableViewDataSource, UITableViewDelegate, TransitDirectionsInstructionsCellDelegate> {

	float _horizontalInset;
	CGRect _tableViewFrame;
	NSIndexPath* _floatingShieldIndexPath;
	TransitDirectionsIconCell* _floatingSignAttachedCell;
	char _hideFloatingSignAttachedCellShield;
	char _animatingExpansion;
	NSCache* _listItemToCellCache;
	char _tableViewReloadWaitingAnimationCompletion;
	char _routeSetAwaitingTableViewReload;
	SCD_Struct_Tr4 _displayContext;
	NSIndexPath* _matchedTransitDirectionsListItemIndexPath;
	MapsThrottler* _matchedLocationThrottler;
	UITableView* _tableView;
	id<TransitDirectionsListViewControllerDelegate> _delegate;
	Route* _route;
	unsigned _matchedComposedRouteStepIndex;
	MKArtworkImageView* _floatingSignView;
	NSMutableArray* _estimatedHeightsCache;
	UIEdgeInsets _tableViewSideMargins;

}

@property (nonatomic,retain) MKArtworkImageView * floatingSignView;                                        //@synthesize floatingSignView=_floatingSignView - In the implementation block
@property (nonatomic,retain) NSMutableArray * estimatedHeightsCache;                                       //@synthesize estimatedHeightsCache=_estimatedHeightsCache - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets tableViewSideMargins;                                          //@synthesize tableViewSideMargins=_tableViewSideMargins - In the implementation block
@property (nonatomic,readonly) NSIndexPath * matchedTransitDirectionsListItemIndexPath;                    //@synthesize matchedTransitDirectionsListItemIndexPath=_matchedTransitDirectionsListItemIndexPath - In the implementation block
@property (nonatomic,readonly) MapsThrottler * matchedLocationThrottler;                                   //@synthesize matchedLocationThrottler=_matchedLocationThrottler - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                                    //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<TransitDirectionsListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) Route * route;                                                                //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) SCD_Struct_Tr4 displayContext;                                                //@synthesize displayContext=_displayContext - In the implementation block
@property (assign,nonatomic) unsigned matchedComposedRouteStepIndex;                                       //@synthesize matchedComposedRouteStepIndex=_matchedComposedRouteStepIndex - In the implementation block
@property (nonatomic,copy) MNLocation * matchedLocation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reloadTableView;
-(id)_initialConstraints;
-(id)_matchedTransitDirectionsListItemIndexPath;
-(void)transitDirectionsCellDetailWasTapped:(id)arg1 ;
-(void)didTapShareButtonOnRoutePlanningFooterView:(id)arg1 ;
-(void)transitDirectionsClusteredVehiclesCellDidTapAlternateRouteButtonInCell:(id)arg1 ;
-(void)transitDirectionsCell:(id)arg1 didTapIncident:(id)arg2 ;
-(void)_resetRowHeightCache;
-(NSMutableArray *)estimatedHeightsCache;
-(void)_registerTableViewCells;
-(void)_calculateLeadingInstructionMargin;
-(int)_numberOfSectionsToDisplay;
-(id)listItemForIndexPath:(id)arg1 ;
-(void)_cacheHeightForRow:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_additionalSelectionIndexPathForIndexPath:(id)arg1 ;
-(void)_transitDirectionsRideCellAtIndexPath:(id)arg1 didExpandItem:(id)arg2 ;
-(void)_updateFloatingSigns;
-(id)topIndexPathNotCovered;
-(void)_updateListForClusteredRideOptionChangeInClusteredLeg:(id)arg1 ;
-(void)setMatchedComposedRouteStepIndex:(unsigned)arg1 ;
-(MapsThrottler *)matchedLocationThrottler;
-(void)_reloadTableViewIfNotAnimating;
-(MNLocation *)matchedLocation;
-(void)setMatchedLocation:(MNLocation *)arg1 ;
-(NSIndexPath *)matchedTransitDirectionsListItemIndexPath;
-(int)_cellStateForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(NSRange)_segementRangeForItemAtIndexPath:(id)arg1 ;
-(unsigned)matchedComposedRouteStepIndex;
-(MKArtworkImageView *)floatingSignView;
-(void)setFloatingSignView:(MKArtworkImageView *)arg1 ;
-(void)setEstimatedHeightsCache:(NSMutableArray *)arg1 ;
-(UIEdgeInsets)tableViewSideMargins;
-(id)init;
-(void)setDelegate:(id<TransitDirectionsListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<TransitDirectionsListViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(Route *)route;
-(void)setRoute:(Route *)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(void)composedRoute:(id)arg1 changedSelectedRideInClusteredLeg:(id)arg2 fromIndex:(unsigned)arg3 toIndex:(unsigned)arg4 ;
-(void)composedRouteUpdatedSnappedPaths:(id)arg1 ;
-(void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3 ;
-(void)composedRouteUpdatedTraffic:(id)arg1 ;
-(void)_localeDidChange;
-(void)setDisplayContext:(SCD_Struct_Tr4)arg1 ;
-(SCD_Struct_Tr4)displayContext;
@end

