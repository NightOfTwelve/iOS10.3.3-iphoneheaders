/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol POIShapeLoading <NSObject>
@property (nonatomic,readonly) id<POIShape> startPOIShapeIfLoaded; 
@property (nonatomic,readonly) id<POIShape> endPOIShapeIfLoaded; 
@required
-(void)addPOIShapeLoadingObserver:(id)arg1;
-(void)removePOIShapeLoadingObserver:(id)arg1;
-(id<POIShape>)startPOIShapeIfLoaded;
-(id<POIShape>)endPOIShapeIfLoaded;

@end

