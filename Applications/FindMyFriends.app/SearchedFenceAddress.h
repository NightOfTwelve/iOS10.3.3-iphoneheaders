/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FenceAddress.h>

@class CLPlacemark, FMFPlacemark, NSString;

@interface SearchedFenceAddress : NSObject <FenceAddress> {

	CLPlacemark* _clPlacemark;
	FMFPlacemark* _placemark;
	NSString* _fenceLabel;
	long _fenceAddressType;
	double _customFenceRadius;
	double _latitudeOverride;
	double _longitudeOverride;

}

@property (nonatomic,retain) CLPlacemark * clPlacemark;              //@synthesize clPlacemark=_clPlacemark - In the implementation block
@property (nonatomic,retain) FMFPlacemark * placemark;               //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,retain) NSString * fenceLabel;                  //@synthesize fenceLabel=_fenceLabel - In the implementation block
@property (assign,nonatomic) double customFenceRadius;               //@synthesize customFenceRadius=_customFenceRadius - In the implementation block
@property (assign,nonatomic) long fenceAddressType;                  //@synthesize fenceAddressType=_fenceAddressType - In the implementation block
@property (assign,nonatomic) double latitudeOverride;                //@synthesize latitudeOverride=_latitudeOverride - In the implementation block
@property (assign,nonatomic) double longitudeOverride;               //@synthesize longitudeOverride=_longitudeOverride - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long)fenceAddressType;
-(NSString *)fenceLabel;
-(id)labelToSaveToFence;
-(char)matchesMapSearchString:(id)arg1 ;
-(id)mapSearchTitle;
-(id)mapSearchLocationLabel;
-(id)mapSearchLocationAddress;
-(int)mapSearchLocationAddressType;
-(void)setFenceAddressType:(long)arg1 ;
-(void)setClPlacemark:(CLPlacemark *)arg1 ;
-(void)setLatitudeOverride:(double)arg1 ;
-(void)setLongitudeOverride:(double)arg1 ;
-(void)setCustomFenceRadius:(double)arg1 ;
-(void)setFenceLabel:(NSString *)arg1 ;
-(CLPlacemark *)clPlacemark;
-(double)customFenceRadius;
-(double)latitudeOverride;
-(double)longitudeOverride;
-(id)init;
-(id)radius;
-(id)addressString;
-(id)latitude;
-(id)longitude;
-(FMFPlacemark *)placemark;
-(void)setPlacemark:(FMFPlacemark *)arg1 ;
@end

