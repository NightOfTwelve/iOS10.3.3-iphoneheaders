/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PassThroughViewControllerDelegate.h>
#import <Maps/CarNavigationStartupDelegate.h>
#import <Maps/CarUIBarButtonItemsControllerDelegate.h>
#import <Maps/CarMapsSuggestionsOverlayDelegate.h>
#import <Maps/CarRouteHypothesizerObserver.h>
#import <Maps/CarMapTrackingControllerDelegate.h>
#import <Maps/CarRouteGeniusManagerDelegate.h>
#import <Maps/CarMapNudgerizerDelegate.h>
#import <Maps/SearchSessionObserver.h>
#import <Maps/CarChromeModeController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class PassThroughViewController, GuidanceETA, NSTimer, CarChromeViewController, SearchResult, CarRouteGeniusManager, CarRouteHypothesizer, MapsSuggestionsEntry, CarMapsSuggestionsOverlayView, CarNavigationStartupSession, CarMapSettings, CarUIBarButtonItemsController, CarMapTrackingController, NSString, MKMapView, ChromeViewController;

@interface CarRouteGeniusModeController : NSObject <PassThroughViewControllerDelegate, CarNavigationStartupDelegate, CarUIBarButtonItemsControllerDelegate, CarMapsSuggestionsOverlayDelegate, CarRouteHypothesizerObserver, CarMapTrackingControllerDelegate, CarRouteGeniusManagerDelegate, CarMapNudgerizerDelegate, SearchSessionObserver, CarChromeModeController, MKMapViewDelegate> {

	PassThroughViewController* _viewController;
	GuidanceETA* _latestGuidanceETA;
	NSTimer* _etaUpdateTimer;
	char _shouldRecenterOnRoute;
	char _navigationAidedDrivingEnabled;
	CarChromeViewController* _chromeViewController;
	SearchResult* _startPin;
	SearchResult* _destinationPin;
	CarRouteGeniusManager* _routeGeniusManager;
	CarRouteHypothesizer* _routeHypothesizer;
	MapsSuggestionsEntry* _currentSuggestion;
	CarMapsSuggestionsOverlayView* _suggestionsOverlay;
	CarNavigationStartupSession* _navStartupSession;
	CarMapSettings* _zoomedSettings;
	CarUIBarButtonItemsController* _buttonController;
	CarMapTrackingController* _trackingController;
	CarMapSettings* _routeGeniusMapSettings;

}

@property (nonatomic,retain) SearchResult * startPin;                                         //@synthesize startPin=_startPin - In the implementation block
@property (nonatomic,retain) SearchResult * destinationPin;                                   //@synthesize destinationPin=_destinationPin - In the implementation block
@property (assign,nonatomic) char navigationAidedDrivingEnabled;                              //@synthesize navigationAidedDrivingEnabled=_navigationAidedDrivingEnabled - In the implementation block
@property (nonatomic,retain) CarRouteGeniusManager * routeGeniusManager;                      //@synthesize routeGeniusManager=_routeGeniusManager - In the implementation block
@property (nonatomic,retain) CarRouteHypothesizer * routeHypothesizer;                        //@synthesize routeHypothesizer=_routeHypothesizer - In the implementation block
@property (nonatomic,retain) MapsSuggestionsEntry * currentSuggestion;                        //@synthesize currentSuggestion=_currentSuggestion - In the implementation block
@property (nonatomic,retain) CarMapsSuggestionsOverlayView * suggestionsOverlay;              //@synthesize suggestionsOverlay=_suggestionsOverlay - In the implementation block
@property (nonatomic,retain) CarNavigationStartupSession * navStartupSession;                 //@synthesize navStartupSession=_navStartupSession - In the implementation block
@property (nonatomic,retain) CarMapSettings * zoomedSettings;                                 //@synthesize zoomedSettings=_zoomedSettings - In the implementation block
@property (nonatomic,retain) CarUIBarButtonItemsController * buttonController;                //@synthesize buttonController=_buttonController - In the implementation block
@property (nonatomic,retain) CarMapTrackingController * trackingController;                   //@synthesize trackingController=_trackingController - In the implementation block
@property (nonatomic,retain) CarMapSettings * routeGeniusMapSettings;                         //@synthesize routeGeniusMapSettings=_routeGeniusMapSettings - In the implementation block
@property (nonatomic,readonly) GuidanceETA * latestGuidanceETA;                               //@synthesize latestGuidanceETA=_latestGuidanceETA - In the implementation block
@property (assign,nonatomic) char shouldRecenterOnRoute;                                      //@synthesize shouldRecenterOnRoute=_shouldRecenterOnRoute - In the implementation block
@property (readonly) char startNavWithETAOnly; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) MKMapView * mapView; 
@property (readonly) char showUserTrackingButtonItem; 
@property (readonly) char showToggle3DButtonItem; 
@property (readonly) char showVolumeControlButtonItem; 
@property (readonly) char showSearchButton; 
@property (assign,nonatomic) ChromeViewController * chromeViewController; 
-(int)autohideBehavior;
-(char)zoomInButtonPressed;
-(char)zoomOutButtonPressed;
-(void)layoutForUnobscuredBoundsChange;
-(char)showsMapView;
-(id)overlayItemsForState:(id)arg1 ;
-(int)currentUsageTarget;
-(char)showsZoomControls;
-(char)showsExplicitPanButton;
-(char)showsHeadingIndicator;
-(id)carFocusOrderSequences;
-(id)identifierForFocusItem:(id)arg1 ;
-(id)preferredCarFocusEnvironments;
-(id)focusItemForIdentifier:(id)arg1 ;
-(char)allowKnobNudgeMapPanning;
-(char)allowMapZoomAndRecentering;
-(char)shouldTopBarModifyMapInsets;
-(char)shouldAccessoriesModifyMapInsets;
-(char)shouldTimeoutAfterDisconnect;
-(ChromeViewController *)chromeViewController;
-(void)setChromeViewController:(ChromeViewController *)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2 ;
-(char)showUserTrackingButtonItem;
-(CarMapTrackingController *)trackingController;
-(id)passThroughView;
-(CarUIBarButtonItemsController *)buttonController;
-(void)setButtonController:(CarUIBarButtonItemsController *)arg1 ;
-(void)searchSessionWillPerformSearch:(id)arg1 ;
-(void)searchSessionDidFail:(id)arg1 ;
-(void)searchSessionDidChangeSearchFieldItem:(id)arg1 ;
-(void)searchSessionDidChangeSearchResults:(id)arg1 ;
-(void)searchSessionDidInvalidate:(id)arg1 ;
-(void)setNavigationAidedDrivingEnabled:(char)arg1 ;
-(char)navigationAidedDrivingEnabled;
-(CarRouteHypothesizer *)routeHypothesizer;
-(void)setRouteHypothesizer:(CarRouteHypothesizer *)arg1 ;
-(void)carRouteHypothesizer:(id)arg1 updatedETA:(id)arg2 ;
-(void)carRouteHypothesizerArrived:(id)arg1 ;
-(void)carRouteHypothesizer:(id)arg1 updatedTrafficIncidents:(id)arg2 ;
-(void)carRouteHypothesizer:(id)arg1 matchedToRoute:(id)arg2 ;
-(void)carRouteHypothesizerRerouted:(id)arg1 ;
-(void)nudgerizer:(id)arg1 didGestureMapView:(id)arg2 inDirection:(int)arg3 ;
-(void)recenterCameraOnRouteAnimated:(char)arg1 ;
-(SearchResult *)startPin;
-(void)setStartPin:(SearchResult *)arg1 ;
-(void)_mapViewGestured;
-(void)setTrackingController:(CarMapTrackingController *)arg1 ;
-(void)routeGeniusManagerDidUpdateBestSuggestionEntry;
-(void)trackingController:(id)arg1 changedToForcedTrackingMode:(int)arg2 ;
-(void)suggestionsOverlayWillExpand:(id)arg1 ;
-(void)suggestionsOverlayDidDismiss:(id)arg1 ;
-(void)suggestionsOverlayDidAccept:(id)arg1 actionValue:(id)arg2 ;
-(void)suggestionsOverlayDidChange:(id)arg1 ;
-(void)suggestionsOverlayDidHandoff:(id)arg1 ;
-(char)navigationStartupSession:(id)arg1 shouldPresentError:(id)arg2 ;
-(void)navigationStartupSession:(id)arg1 willRouteFromWaypoint:(id)arg2 toWaypoint:(id)arg3 ;
-(void)navigationStartupSession:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_updateSearchPins;
-(void)_updateAnnotations;
-(char)_zoomButtonPressed;
-(void)_externalDeviceUpdated:(id)arg1 ;
-(char)startNavWithETAOnly;
-(void)setShouldRecenterOnRoute:(char)arg1 ;
-(void)setNavStartupSession:(CarNavigationStartupSession *)arg1 ;
-(void)setCurrentSuggestion:(MapsSuggestionsEntry *)arg1 ;
-(GuidanceETA *)latestGuidanceETA;
-(char)shouldRecenterOnRoute;
-(SearchResult *)destinationPin;
-(void)setDestinationPin:(SearchResult *)arg1 ;
-(CarRouteGeniusManager *)routeGeniusManager;
-(void)setRouteGeniusManager:(CarRouteGeniusManager *)arg1 ;
-(CarMapsSuggestionsOverlayView *)suggestionsOverlay;
-(void)setSuggestionsOverlay:(CarMapsSuggestionsOverlayView *)arg1 ;
-(CarNavigationStartupSession *)navStartupSession;
-(CarMapSettings *)zoomedSettings;
-(void)setZoomedSettings:(CarMapSettings *)arg1 ;
-(CarMapSettings *)routeGeniusMapSettings;
-(void)setRouteGeniusMapSettings:(CarMapSettings *)arg1 ;
-(id)init;
-(id)viewController;
-(void)_updateTraffic;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(int)arg2 animated:(char)arg3 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(MKMapView *)mapView;
-(void)_updateNavigationItemAnimated:(char)arg1 ;
-(MapsSuggestionsEntry *)currentSuggestion;
-(id)initWithSuggestions:(NSArray*)arg1 ;
@end
