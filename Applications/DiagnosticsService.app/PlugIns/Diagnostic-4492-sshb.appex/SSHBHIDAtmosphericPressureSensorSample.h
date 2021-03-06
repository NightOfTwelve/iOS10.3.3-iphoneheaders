/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4492-sshb.appex/Diagnostic-4492-sshb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-4492-sshb/SSHBHIDSamplePrintable.h>
#import <Diagnostic-4492-sshb/SSHBHIDSampleTimestamp.h>
#import <Diagnostic-4492-sshb/SSHBHIDSampleSequence.h>
#import <Diagnostic-4492-sshb/SSHBHIDSampleAtmosphericPressureSensor.h>
#import <Diagnostic-4492-sshb/SSHBHIDSampleTemperature.h>

@class NSString;

@interface SSHBHIDAtmosphericPressureSensorSample : NSObject <SSHBHIDSamplePrintable, SSHBHIDSampleTimestamp, SSHBHIDSampleSequence, SSHBHIDSampleAtmosphericPressureSensor, SSHBHIDSampleTemperature> {

	float _level;
	unsigned _sequence;
	double _timestamp;
	double _temperature;

}

@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float level;                           //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned sequence;                     //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) double temperature;                    //@synthesize temperature=_temperature - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)csv;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setLevel:(float)arg1 ;
-(float)level;
-(double)temperature;
-(void)setTemperature:(double)arg1 ;
-(unsigned)sequence;
-(void)setSequence:(unsigned)arg1 ;
@end

