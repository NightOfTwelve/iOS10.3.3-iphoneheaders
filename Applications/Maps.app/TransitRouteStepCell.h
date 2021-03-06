/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RouteStepCell.h>

@class TransitLegSteppingModeSign;

@interface TransitRouteStepCell : RouteStepCell {

	TransitLegSteppingModeSign* _sign;

}

@property (nonatomic,retain) TransitLegSteppingModeSign * sign;              //@synthesize sign=_sign - In the implementation block
+(id)cellWithRoute:(id)arg1 sign:(id)arg2 ;
-(/*^block*/id)snapshotBlock;
-(id)routeStep;
-(void)drawPinInRect:(CGRect)arg1 zoomLevel:(float)arg2 ;
-(void)drawRouteLineInRect:(CGRect)arg1 zoomLevel:(float)arg2 ;
-(id)instructionStringsArray;
-(TransitLegSteppingModeSign *)sign;
-(void)setSign:(TransitLegSteppingModeSign *)arg1 ;
-(id)initWithRoute:(id)arg1 sign:(id)arg2 ;
-(int)signIndexForSign:(id)arg1 ;
-(int)signIndexForStepIndex:(int)arg1 ;
-(unsigned)numberOfSteps;
@end

