/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSedentaryTimer_Internal : NSObject {

	NSObject*<OS_dispatch_queue> fClientQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSObject*<OS_dispatch_queue> fDaemonQueue;
	CLConnectionClient* fLocationdConnection;
	char _timerArmed;

}

@property (assign,getter=isTimerArmed,nonatomic) char timerArmed;              //@synthesize timerArmed=_timerArmed - In the implementation block
-(id)init;
-(void)dealloc;
-(char)_isActive;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(char)isTimerArmed;
-(void)_handleAlarmDataResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_handleStartStopTimerResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_registerForAlarmsWithHandler:(/*^block*/id)arg1 ;
-(void)setTimerArmed:(char)arg1 ;
-(void)_teardown;
@end

