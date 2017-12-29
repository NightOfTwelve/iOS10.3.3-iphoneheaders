/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/IAPNavigationUpdate.h>

@class NSNumber, NSString, NSArray;

@interface IAPNavigationUpdateManeuverInfo : IAPNavigationUpdate {

	char _hasBeenSent;
	unsigned short _maneuverType;
	unsigned short _distanceBetweenManeuverDisplayUnits;
	unsigned short _drivingSide;
	unsigned short _junctionType;
	NSNumber* _index;
	NSString* _maneuverDescription;
	NSString* _afterManeuverRoadName;
	NSNumber* _distanceBetweenManeuver;
	NSString* _distanceBetweenManeuverDisplayString;
	NSArray* _junctionElementAngle;
	NSNumber* _junctionElementExitAngle;

}

@property (assign) char hasBeenSent;                                                //@synthesize hasBeenSent=_hasBeenSent - In the implementation block
@property (copy) NSNumber * index;                                                  //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSString * maneuverDescription;                          //@synthesize maneuverDescription=_maneuverDescription - In the implementation block
@property (assign) unsigned short maneuverType;                                     //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,copy) NSString * afterManeuverRoadName;                        //@synthesize afterManeuverRoadName=_afterManeuverRoadName - In the implementation block
@property (copy) NSNumber * distanceBetweenManeuver;                                //@synthesize distanceBetweenManeuver=_distanceBetweenManeuver - In the implementation block
@property (copy) NSString * distanceBetweenManeuverDisplayString;                   //@synthesize distanceBetweenManeuverDisplayString=_distanceBetweenManeuverDisplayString - In the implementation block
@property (assign) unsigned short distanceBetweenManeuverDisplayUnits;              //@synthesize distanceBetweenManeuverDisplayUnits=_distanceBetweenManeuverDisplayUnits - In the implementation block
@property (assign) unsigned short drivingSide;                                      //@synthesize drivingSide=_drivingSide - In the implementation block
@property (assign) unsigned short junctionType;                                     //@synthesize junctionType=_junctionType - In the implementation block
@property (copy) NSArray * junctionElementAngle;                                    //@synthesize junctionElementAngle=_junctionElementAngle - In the implementation block
@property (copy) NSNumber * junctionElementExitAngle;                               //@synthesize junctionElementExitAngle=_junctionElementExitAngle - In the implementation block
+(id)_enumProperties;
+(id)_integersKeyed;
+(id)maneuverUpdateWithStep:(id)arg1 component:(id)arg2 ;
+(id)maneuverUpdateWithIAPFormat:(id)arg1 ;
-(id)debugProperties;
-(void)setManeuverDescription:(NSString *)arg1 ;
-(void)setAfterManeuverRoadName:(NSString *)arg1 ;
-(char)hasBeenSent;
-(void)setHasBeenSent:(char)arg1 ;
-(NSString *)afterManeuverRoadName;
-(NSNumber *)distanceBetweenManeuver;
-(void)setDistanceBetweenManeuver:(NSNumber *)arg1 ;
-(NSString *)distanceBetweenManeuverDisplayString;
-(void)setDistanceBetweenManeuverDisplayString:(NSString *)arg1 ;
-(unsigned short)distanceBetweenManeuverDisplayUnits;
-(void)setDistanceBetweenManeuverDisplayUnits:(unsigned short)arg1 ;
-(NSArray *)junctionElementAngle;
-(void)setJunctionElementAngle:(NSArray *)arg1 ;
-(NSNumber *)junctionElementExitAngle;
-(void)setJunctionElementExitAngle:(NSNumber *)arg1 ;
-(id)init;
-(NSNumber *)index;
-(void)setIndex:(NSNumber *)arg1 ;
-(unsigned short)drivingSide;
-(void)setDrivingSide:(unsigned short)arg1 ;
-(unsigned short)maneuverType;
-(void)setManeuverType:(unsigned short)arg1 ;
-(unsigned short)junctionType;
-(void)setJunctionType:(unsigned short)arg1 ;
-(NSString *)maneuverDescription;
@end
