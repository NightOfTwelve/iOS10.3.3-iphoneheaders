/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSConditionLock : NSObject <NSLocking> {

	void* _priv;

}

@property (readonly) int condition; 
@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)lockBeforeDate:(id)arg1 ;
-(char)tryLock;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)lock;
-(void)unlock;
-(int)condition;
-(id)initWithCondition:(int)arg1 ;
-(char)lockWhenCondition:(int)arg1 beforeDate:(id)arg2 ;
-(char)tryLockWhenCondition:(int)arg1 ;
-(void)unlockWithCondition:(int)arg1 ;
-(void)lockWhenCondition:(int)arg1 ;
@end

