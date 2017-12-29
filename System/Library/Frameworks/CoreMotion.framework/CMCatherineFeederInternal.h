/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMCatherineFeederInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_source> fWatchdogTimer;

}
-(id)init;
-(void)dealloc;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_startDaemonConnection;
-(void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 ;
-(void)_teardown;
@end
