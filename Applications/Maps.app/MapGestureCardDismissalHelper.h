/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapGestureCardDismissalHelperDelegate;
@class MKMapView, MapGestureCardDismissalPanMediator, NSMutableDictionary;

@interface MapGestureCardDismissalHelper : NSObject {

	MKMapView* _mapView;
	MapGestureCardDismissalPanMediator* _panMediator;
	NSMutableDictionary* _insidenessByGesture;
	float _dismissalRectTopEdge;
	unsigned _activeGestureCount;
	char _shouldIgnoreGestures;
	char _didDismiss;
	id<MapGestureCardDismissalHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MapGestureCardDismissalHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)continuousGestureDidBegin:(id)arg1 ;
-(void)continuousGestureDidEnd:(id)arg1 ;
-(void)continuousGestureDidChange:(id)arg1 ;
-(char)hasContinuousGestureInProgress;
-(void)dismissCardWithVelocity:(float)arg1 ;
-(void)dismissCardWithPanGesture:(id)arg1 ;
-(float)insidenessForGesture:(id)arg1 ;
-(void)handleMapViewContinuousGesture:(id)arg1 ;
-(void)handleMapViewDiscreteGesture:(id)arg1 ;
-(void)setDelegate:(id<MapGestureCardDismissalHelperDelegate>)arg1 ;
-(void)dealloc;
-(id<MapGestureCardDismissalHelperDelegate>)delegate;
-(id)initWithMapView:(id)arg1 ;
@end
