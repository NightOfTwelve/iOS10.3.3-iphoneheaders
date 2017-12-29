/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TransitWidget/TransitWidget-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DirectionsPlanTransitPreferences : PBCodable <NSCopying> {

	char _avoidBusRoutes;
	char _avoidFerryRoutes;
	char _avoidMetroLightRailRoutes;
	char _avoidRailRoutes;
	SCD_Struct_Di3 _has;

}

@property (assign,nonatomic) char hasAvoidBusRoutes; 
@property (assign,nonatomic) char avoidBusRoutes;                            //@synthesize avoidBusRoutes=_avoidBusRoutes - In the implementation block
@property (assign,nonatomic) char hasAvoidMetroLightRailRoutes; 
@property (assign,nonatomic) char avoidMetroLightRailRoutes;                 //@synthesize avoidMetroLightRailRoutes=_avoidMetroLightRailRoutes - In the implementation block
@property (assign,nonatomic) char hasAvoidRailRoutes; 
@property (assign,nonatomic) char avoidRailRoutes;                           //@synthesize avoidRailRoutes=_avoidRailRoutes - In the implementation block
@property (assign,nonatomic) char hasAvoidFerryRoutes; 
@property (assign,nonatomic) char avoidFerryRoutes;                          //@synthesize avoidFerryRoutes=_avoidFerryRoutes - In the implementation block
-(id)initWithGEOTransitOptions:(id)arg1 ;
-(int)avoidedTransitModes;
-(void)_populateFromAvoidedModes:(int)arg1 ;
-(void)setAvoidBusRoutes:(char)arg1 ;
-(void)setHasAvoidBusRoutes:(char)arg1 ;
-(char)hasAvoidBusRoutes;
-(void)setAvoidMetroLightRailRoutes:(char)arg1 ;
-(void)setHasAvoidMetroLightRailRoutes:(char)arg1 ;
-(char)hasAvoidMetroLightRailRoutes;
-(void)setAvoidRailRoutes:(char)arg1 ;
-(void)setHasAvoidRailRoutes:(char)arg1 ;
-(char)hasAvoidRailRoutes;
-(void)setAvoidFerryRoutes:(char)arg1 ;
-(void)setHasAvoidFerryRoutes:(char)arg1 ;
-(char)hasAvoidFerryRoutes;
-(char)avoidBusRoutes;
-(char)avoidMetroLightRailRoutes;
-(char)avoidRailRoutes;
-(char)avoidFerryRoutes;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end
