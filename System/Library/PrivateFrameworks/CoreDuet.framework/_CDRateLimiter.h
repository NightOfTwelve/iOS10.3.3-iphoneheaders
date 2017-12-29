/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDRateLimiting.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject, NSString;

@interface _CDRateLimiter : NSObject <_CDRateLimiting> {

	NSDate* _lastRecorded;
	int _balance;
	NSObject*<OS_dispatch_queue> _queue;
	int _count;
	double _period;

}

@property (readonly) double period;                                 //@synthesize period=_period - In the implementation block
@property (readonly) int count;                                     //@synthesize count=_count - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRateLimiter;
-(id)init;
-(int)count;
-(NSString *)description;
-(id)initWithCount:(int)arg1 perPeriod:(double)arg2 ;
-(char)debited;
-(void)recordTimeAndRefillIfNeeded;
-(void)resetRateLimitWithTimeStamp:(id)arg1 ;
-(char)credit;
-(double)period;
@end
