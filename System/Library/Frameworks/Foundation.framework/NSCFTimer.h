/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSTimer.h>

@interface NSCFTimer : NSTimer
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long)_cfTypeID;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(id)init;
-(oneway void)release;
-(void)invalidate;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(unsigned)hash;
-(char)isValid;
-(id)userInfo;
-(void)setFireDate:(id)arg1 ;
-(char)allowsWeakReference;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(char)arg6 ;
-(double)timeInterval;
-(id)fireDate;
-(char)retainWeakReference;
-(void)fire;
@end

