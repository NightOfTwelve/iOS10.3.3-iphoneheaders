/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@interface CMSwimWorkout : CMWorkout {

	int fLocation;
	double fPoolLength;

}

@property (nonatomic,readonly) int location; 
@property (nonatomic,readonly) double poolLength; 
+(char)supportsSecureCoding;
+(id)swimLocationName:(int)arg1 ;
+(char)isAvailable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)location;
-(double)poolLength;
-(id)initWithSessionId:(id)arg1 location:(int)arg2 poolLength:(double)arg3 ;
@end

