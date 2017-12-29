/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileMail/MobileMail-Structs.h>
@class _MFVelocityIntegratorDataPoint, NSMutableArray;

@interface MFVelocityIntegrator : NSObject {

	_MFVelocityIntegratorDataPoint* _initialDataPoint;
	NSMutableArray* _samples;
	CGVector _totalTranslation;

}

@property (nonatomic,readonly) CGVector velocity; 
@property (nonatomic,readonly) CGVector offset; 
-(void)addTouchLocation:(CGPoint)arg1 ;
-(CGVector)_computeVelocity;
-(void)dealloc;
-(void)reset;
-(CGVector)velocity;
-(CGVector)offset;
@end
