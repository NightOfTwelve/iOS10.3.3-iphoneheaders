/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableArray;

@interface SBPolygon : NSObject {

	NSMutableArray* _mutablePoints;
	NSMutableArray* _weights;
	CGPoint _centroid;
	CGPoint _weightedCentroid;

}

@property (setter=_setPoints:,getter=_points,nonatomic,retain) NSMutableArray * mutablePoints;                            //@synthesize mutablePoints=_mutablePoints - In the implementation block
@property (assign,setter=_setCentroid:,getter=_centroid,nonatomic) CGPoint centroid;                                      //@synthesize centroid=_centroid - In the implementation block
@property (setter=_setWeights:,getter=_weights,nonatomic,retain) NSMutableArray * weights;                                //@synthesize weights=_weights - In the implementation block
@property (assign,setter=_setWeightedCentroid:,getter=_weightedCentroid,nonatomic) CGPoint weightedCentroid;              //@synthesize weightedCentroid=_weightedCentroid - In the implementation block
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) float distanceOfFarthestPointFromCentroid; 
+(id)_sortPoints:(id)arg1 ;
+(CGPoint)_pointAtIndex:(unsigned)arg1 ofPointArray:(id)arg2 ;
-(void)_setPoints:(id)arg1 ;
-(CGPoint)_pointAtIndex:(unsigned)arg1 ;
-(char)_isLeftHanded;
-(unsigned)_thumbIndex;
-(id)_points;
-(CGPoint)_centroid;
-(void)enumeratePointsUsingBlock:(/*^block*/id)arg1 ;
-(void)_updateCentroid;
-(void)_updateWeights;
-(void)_updateWeightedCentroid;
-(void)_setCentroid:(CGPoint)arg1 ;
-(void)_setWeights:(id)arg1 ;
-(float)_weightAtIndex:(unsigned)arg1 ;
-(void)_setWeightedCentroid:(CGPoint)arg1 ;
-(float)_baseOrientation;
-(float)distanceOfFarthestPointFromCentroid;
-(void)_flipHorizontally;
-(void)_scale:(float)arg1 ;
-(void)_rotate:(float)arg1 ;
-(void)_translate:(CGPoint)arg1 ;
-(float)_meanFingertipRowAngle;
-(float)_meanRadius;
-(id)_weights;
-(CGPoint)_weightedCentroid;
-(id)description;
-(unsigned)pointCount;
-(id)points;
-(void)_updateProperties;
-(void)_applyTransform:(CGAffineTransform)arg1 ;
-(id)initWithPoints:(id)arg1 ;
-(id)initWithPoints:(CGPoint*)arg1 pointCount:(unsigned)arg2 ;
@end

