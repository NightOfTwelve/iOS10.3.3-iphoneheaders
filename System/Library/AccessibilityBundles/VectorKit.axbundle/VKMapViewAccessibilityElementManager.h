/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapViewAccessibilityElementDataSource.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface VKMapViewAccessibilityElementManager : NSObject <VKMapViewAccessibilityElementDataSource> {

	char _updating;
	NSArray* _accessibilityElements;
	int _orientation;
	NSObject*<OS_dispatch_queue> _properties_queue;
	NSObject*<OS_dispatch_queue> _updates_queue;
	double _yaw;
	SCD_Struct_VK9 _center;
	SCD_Struct_VK0 _bounds;

}

@property (nonatomic,retain) NSArray * accessibilityElements;                            //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK0 bounds;                                      //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK9 center;                                      //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) int orientation;                                            //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double yaw;                                                 //@synthesize yaw=_yaw - In the implementation block
@property (assign,getter=isUpdating,nonatomic) char updating;                            //@synthesize updating=_updating - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> properties_queue;              //@synthesize properties_queue=_properties_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> updates_queue;                 //@synthesize updates_queue=_updates_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_yawForMapView:(id)arg1 ;
-(double)yawForMapView:(id)arg1 ;
-(id)accessibilityElementsForMapView:(id)arg1 ;
-(SCD_Struct_VK0)boundsForMapView:(id)arg1 ;
-(int)orientationForMapView:(id)arg1 ;
-(void)updateAccessibilityElementsForMapView:(id)arg1 ;
-(id)_descriptionForRouteTransitNodeLabel:(id)arg1 ;
-(id)_descriptionForTransitNodeLabel:(id)arg1 ;
-(void)_processVisibleTile:(id)arg1 accessibilityElements:(id*)arg2 mapViewBounds:(SCD_Struct_VK0)arg3 mapView:(id)arg4 roadLabels:(id)arg5 ;
-(SCD_Struct_VK0)_boundsForMapView:(id)arg1 ;
-(int)_orientationForMapView:(id)arg1 ;
-(void)updateAccessibilityElementsForMapView:(id)arg1 isRetry:(char)arg2 ;
-(SCD_Struct_VK9)_centerForMapView:(id)arg1 ;
-(float)_zoomForMapView:(id)arg1 ;
-(id)_gatherVisibleLabelMarkersForMapView:(id)arg1 ;
-(id)_gatherVisibleTilesForMapView:(id)arg1 ;
-(id)_accessibilityElementsForMapView:(id)arg1 mapViewBounds:(SCD_Struct_VK0)arg2 visibleLabels:(id)arg3 visibleTiles:(id)arg4 ;
-(void)_consolidateAccessibilityElements:(id)arg1 ;
-(void)_sortAccessibilityElements:(id)arg1 mapView:(id)arg2 ;
-(void)_filterAccessibilityElements:(id)arg1 zoomLevel:(float)arg2 mapView:(id)arg3 ;
-(char)_isValidBoundsForMapView:(id)arg1 bounds:(SCD_Struct_VK0)arg2 ;
-(char)_isValidOrientationForMapView:(id)arg1 orientation:(int)arg2 ;
-(char)_isValidYawForMapView:(id)arg1 yaw:(double)arg2 ;
-(SCD_Struct_VK9)centerForMapView:(id)arg1 ;
-(void)setUpdates_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)properties_queue;
-(void)setProperties_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)updates_queue;
-(id)init;
-(SCD_Struct_VK9)center;
-(SCD_Struct_VK0)bounds;
-(void)setBounds:(SCD_Struct_VK0)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setCenter:(SCD_Struct_VK9)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(double)yaw;
-(void)setYaw:(double)arg1 ;
-(char)isUpdating;
-(void)setUpdating:(char)arg1 ;
@end
