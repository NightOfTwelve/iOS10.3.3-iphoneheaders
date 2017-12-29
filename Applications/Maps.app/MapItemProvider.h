/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapItemSource.h>

@class MKMapItem, NSString;

@interface MapItemProvider : NSObject <MapItemSource> {

	MKMapItem* _mapItem;
	unsigned _precedence;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MKMapItem * mapItem;                 //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) unsigned precedence;                 //@synthesize precedence=_precedence - In the implementation block
+(id)mapItemSourceWithSearchFieldItemIfGeocoded:(id)arg1 ;
+(id)mapItemSourceWithDirectionsWaypointIfLoaded:(id)arg1 ;
+(id)mapItemSourceWithPersonalizedItem:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 precedence:(unsigned)arg2 ;
-(MKMapItem *)mapItem;
-(unsigned)precedence;
@end
