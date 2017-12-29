/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/ControlContaineeViewController.h>
#import <Maps/RoutePlanningDataObservation.h>
#import <Maps/TransitDirectionsListViewControllerDelegate.h>
#import <Maps/DirectionsStepsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>

@protocol RoutePlanningDataCoordination;
@class DirectionsStepsTableViewController, TransitDirectionsListViewController, ModalCardHeaderView, NSString;

@interface RouteStepsViewController : ControlContaineeViewController <RoutePlanningDataObservation, TransitDirectionsListViewControllerDelegate, DirectionsStepsTableViewControllerDelegate, GEOLogContextDelegate> {

	DirectionsStepsTableViewController* _driveOrWalkDirectionsListViewController;
	TransitDirectionsListViewController* _transitDirectionsListViewController;
	id<RoutePlanningDataCoordination> _dataCoordinator;
	ModalCardHeaderView* _modalHeaderView;

}

@property (nonatomic,retain) ModalCardHeaderView * modalHeaderView;                                 //@synthesize modalHeaderView=_modalHeaderView - In the implementation block
@property (assign,nonatomic,__weak) id<RoutePlanningDataCoordination> dataCoordinator;              //@synthesize dataCoordinator=_dataCoordinator - In the implementation block
@property (nonatomic,readonly) int observedRoutePlanningData; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willChangeContainerStyle:(unsigned)arg1 ;
-(void)_customInit;
-(void)routePlanningDataCoordinator:(id)arg1 didUpdateOriginName:(id)arg2 destinationName:(id)arg3 ;
-(void)routePlanningDataCoordinator:(id)arg1 didUpdateCurrentRoute:(id)arg2 ;
-(int)observedRoutePlanningData;
-(id<RoutePlanningDataCoordination>)dataCoordinator;
-(void)setDataCoordinator:(id<RoutePlanningDataCoordination>)arg1 ;
-(void)directionsStepsTableViewControllerDidTapShareButton:(id)arg1 ;
-(void)directionsStepsTableViewController:(id)arg1 didTapRowForRouteStep:(id)arg2 ;
-(void)transitDirectionsListViewControllerDidTapShare:(id)arg1 ;
-(void)transitDirectionsListViewController:(id)arg1 didTapRowForItem:(id)arg2 ;
-(void)transitDirectionsListViewController:(id)arg1 didTapClusteredVehiclesCell:(id)arg2 ;
-(void)transitDirectionsListViewController:(id)arg1 didTapIncidentsCell:(id)arg2 withIncidents:(id)arg3 ;
-(void)_shareRoute:(id)arg1 ;
-(void)_setupChildViewControllerIfNeeded:(id)arg1 ;
-(ModalCardHeaderView *)modalHeaderView;
-(void)setModalHeaderView:(ModalCardHeaderView *)arg1 ;
-(id)_driveOrWalkDirectionsListViewController;
-(id)_transitDirectionsListViewController;
-(id)_headerTitleDestination:(id)arg1 ;
-(void)_updateDataCoordinatorWithSelectedStep:(id)arg1 ;
-(id)directionsListViewControllerForDirectionsType:(unsigned)arg1 ;
-(id)scrollViewForDirectionsDetailsOfCurrentRoute;
-(void)_updateVisibleViewsForDirectionsType:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(void)_didTapDoneButton:(id)arg1 ;
-(void)_setupConstraints;
@end
