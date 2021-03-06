/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	CLLocationCoordinate2D field1;
	CLLocationCoordinate2D field2;
} SCD_Struct_Se2;

typedef struct {
	unsigned origin : 1;
} SCD_Struct_RA3;

typedef struct {
	unsigned obsoleteCid : 1;
	unsigned timestamp : 1;
	unsigned addressID : 1;
	unsigned addressRecordID : 1;
	unsigned flags : 1;
	unsigned obsoleteLatitudeE6Value : 1;
	unsigned obsoleteLongitudeE6Value : 1;
	unsigned resultIndex : 1;
	unsigned zoomLevel : 1;
	unsigned hasIncompleteMetadata : 1;
	unsigned hasIncompleteNavData : 1;
	unsigned obsoleteClosedListing : 1;
	unsigned obsoleteInexactPosition : 1;
	unsigned obsoleteUnverifiedListing : 1;
} SCD_Struct_Se4;

typedef struct {
	unsigned position : 1;
	unsigned addressID : 1;
	unsigned recordID : 1;
} SCD_Struct_Pe5;

typedef struct {
	unsigned list;
	unsigned count;
	unsigned size;
} SCD_Struct_RA6;

typedef struct {
	unsigned latitude : 1;
	unsigned latitudeSpan : 1;
	unsigned longitude : 1;
	unsigned longitudeSpan : 1;
	unsigned position : 1;
	unsigned timestamp : 1;
} SCD_Struct_Pe7;

typedef struct {
	unsigned businessID : 1;
	unsigned latitude : 1;
	unsigned longitude : 1;
	unsigned regionLatitude : 1;
	unsigned regionLatitudeDelta : 1;
	unsigned regionLongitude : 1;
	unsigned regionLongitudeDelta : 1;
	unsigned directionsMode : 1;
	unsigned providerID : 1;
} SCD_Struct_Sy8;

