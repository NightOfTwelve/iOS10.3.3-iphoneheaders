/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPAddressLocation.h>
@class CLPlacemark;


@protocol RAPAddressLocation <NSObject>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) CLPlacemark * placemark; 
@required
-(void)processWithGeocoderIfNeededWithCompletion:(/*^block*/id)arg1;
-(void)cancelProcessing;
-(CLLocationCoordinate2D)coordinate;
-(CLPlacemark *)placemark;

@end


@class CLPlacemark, CLGeocoder, NSMutableArray, NSString;

@interface RAPAddressLocation : NSObject <RAPAddressLocation> {

	CLGeocoder* _geocoder;
	NSMutableArray* _completionBlocks;
	CLPlacemark* _placemark;
	CLLocationCoordinate2D _coordinate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) CLPlacemark * placemark;                        //@synthesize placemark=_placemark - In the implementation block
-(void)processWithGeocoderIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelProcessing;
-(void)_invokeCompletionBlocksWithFinishedFlag:(char)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLPlacemark *)placemark;
@end

