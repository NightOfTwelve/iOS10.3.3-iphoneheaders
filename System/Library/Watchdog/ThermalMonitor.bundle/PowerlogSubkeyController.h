/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:41:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ThermalMonitor/ThermalMonitor-Structs.h>
@interface PowerlogSubkeyController : NSObject {

	CFDictionaryRef _state;
	CFDictionaryRef _stateLastLogged;
	CFStringRef _subkey;

}
-(id)initForSubkey:(CFStringRef)arg1 ;
-(id)cacheArray;
-(void)setIntValue:(int)arg1 forKey:(CFStringRef)arg2 ;
-(void)logToPowerlogLite;
-(void)logToPowerlog:(CFStringRef)arg1 ;
@end
