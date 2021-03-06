/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:41:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ThermalMonitor/ThermalMonitor-Structs.h>
@interface PidComponent : NSObject {

	BOOL allowCEOverride;
	float kp;
	float ki;
	float ts;
	float integrator;
	float integratorMin;
	float integratorMax;
	float TARGET;
	int mitigationType;
	CFStringRef nameofComponent;
	long boundCheckLow;
	long boundCheckHigh;
	long controlEffort;

}

@property (assign,nonatomic) BOOL allowCEOverride; 
@property (nonatomic,readonly) int mitigationType; 
@property (nonatomic,readonly) CFStringRef nameofComponent; 
@property (assign,nonatomic) long controlEffort; 
@property (nonatomic,readonly) float integrator; 
@property (assign,nonatomic) float TARGET; 
-(void)calculateControlEffort:(float)arg1 ;
-(id)initPIDWith:(CFDictionaryRef)arg1 ;
-(void)setAllowCEOverride:(BOOL)arg1 ;
-(BOOL)isEqualMType:(int)arg1 ;
-(CFStringRef)nameofComponent;
-(long)controlEffort;
-(void)setControlEffort:(long)arg1 ;
-(float)TARGET;
-(void)setTARGET:(float)arg1 ;
-(float)integrator;
-(BOOL)allowCEOverride;
-(int)mitigationType;
-(void)dealloc;
@end

