/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4006.appex/Diagnostic-4006
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-4006/Diagnostic-4006-Structs.h>
#import <DiagnosticsKit/DKDiagnosticController.h>
#import <Diagnostic-3940/DAHIDEventMonitorDelegate.h>

@class DAHIDEventMonitor, NSString;

@interface CompassSensorDataController : DKDiagnosticController <DAHIDEventMonitorDelegate> {

	DAHIDEventMonitor* _eventMonitor;
	int _compassDataCount;

}

@property (nonatomic,retain) DAHIDEventMonitor * eventMonitor;              //@synthesize eventMonitor=_eventMonitor - In the implementation block
@property (assign,nonatomic) int compassDataCount;                          //@synthesize compassDataCount=_compassDataCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DAHIDEventMonitor *)eventMonitor;
-(void)setEventMonitor:(DAHIDEventMonitor *)arg1 ;
-(void)handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setCompassDataCount:(int)arg1 ;
-(int)compassDataCount;
-(void)start;
-(void)teardown;
-(void)finish;
@end

