/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsDebugValuesViewController.h>

@interface MapsMapDisplayDebugController : MapsDebugValuesViewController
+(id)navigationDestinationTitle;
-(void)prepareContent;
-(id)valueForKeyInAllMapLayers:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyInAllMapLayers:(id)arg2 ;
-(SCD_Struct_Ma36)mapDisplayStyleInAllLayers;
-(void)setMapDisplayStyleForAllLayers:(SCD_Struct_Ma36)arg1 ;
-(void)addAllMapsSwitchRowToSection:(id)arg1 title:(id)arg2 key:(id)arg3 ;
-(void)addAllMapsSwitchRowToSection:(id)arg1 title:(id)arg2 forVectorKitDebugKey:(id)arg3 ;
-(void)_setAllMapLayersNeedLayout;
-(void)_activateMapInspector:(id)arg1 ;
-(void)runNextTourIndex:(unsigned)arg1 withTours:(id)arg2 ;
-(id)init;
@end

