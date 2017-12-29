/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, GEOComposedRouteStep, NSMutableArray, Route, GEOComposedRoute, NSArray;

@interface TransitDirectionsListDataSourceBuilder : NSObject {

	UIColor* _currentLineColor;
	unsigned _stepIdx;
	GEOComposedRouteStep* _currentStep;
	unsigned _segmentRangeLocation;
	unsigned _segmentRangeLength;
	NSMutableArray* _mutableItems;
	NSMutableArray* _mutableSegmentRanges;
	Route* _route;

}

@property (nonatomic,readonly) GEOComposedRoute * composedRoute; 
@property (readonly) Route * route;                                           //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * segmentRanges; 
+(id)spacerForItem:(id)arg1 ;
-(NSArray *)segmentRanges;
-(void)_buildItems;
-(void)_injectSpacers;
-(void)_consumeWalkingLeg;
-(id)_walkingItemForWalkingLeg:(id)arg1 ;
-(void)_consumeGoToStop;
-(id)_goToStopItemForStep:(id)arg1 ;
-(void)_consumeAlightStep;
-(unsigned)_startRangeIndexForAlightItem:(id)arg1 ;
-(void)_createExitItem;
-(id)_mergeTransitRoutingIncidentsForSteps:(id)arg1 ;
-(id)_incidentItemForExitOrTransferSection:(id)arg1 alightStep:(id)arg2 ;
-(id)_nextLeaveStopStep;
-(void)_createTransferItem;
-(id)_nextTransferStepBeforeBoarding;
-(id)_nextStepWithManeuver:(int)arg1 beforeManeuver:(int)arg2 ;
-(id)_imageForInterSystemTransferBetweenAlightingStep:(id)arg1 andBoardingStep:(id)arg2 currentLineColor:(id)arg3 dimmedOrigin:(char)arg4 ;
-(id)_artworksForIntraSystemTransferBetweenAlightingStep:(id)arg1 andBoardingStep:(id)arg2 currentLineColor:(id)arg3 ;
-(void)_populateStationArtworkForItem:(id)arg1 fromStep:(id)arg2 ;
-(void)_populateStationArtworkForItem:(id)arg1 fromStepsInPreferedOrder:(id)arg2 ;
-(void)_populateAccessPointArtworkForItem:(id)arg1 fromStep:(id)arg2 ;
-(void)_populateAccessPointArtworkForItem:(id)arg1 fromStepsInPreferedOrder:(id)arg2 ;
-(void)_consumeTransitTripLeg;
-(id)_fareItemForStep:(id)arg1 lineColor:(id)arg2 alternateLineColor:(id)arg3 parentItem:(id)arg4 ;
-(id)_transitTripBoardItem;
-(id)_passStopSubItemForSteps:(id)arg1 boardStep:(id)arg2 currentRideDuration:(unsigned)arg3 toLineColor:(id)arg4 ;
-(id)_operatingHoursItemWithBoardStep:(id)arg1 ;
-(id)_incidentItemWithIncidentMessage:(id)arg1 ;
-(id)_blockTransferItemWithBoardItem:(id)arg1 ;
-(id)_originItem;
-(id)_originTitle;
-(id)_destinationTitle;
-(id)_titleForWaypoint:(id)arg1 ;
-(NSArray *)items;
-(id)_destinationItem;
-(Route *)route;
-(id)initWithRoute:(id)arg1 ;
-(GEOComposedRoute *)composedRoute;
@end
