/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDSession, NSString;

@interface CDBudget : NSObject {

	CDSession* _session;
	NSString* _name;
	int _type;
	unsigned long long _integerId;

}

@property (__weak,readonly) CDSession * session;                //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long integerId;              //@synthesize integerId=_integerId - In the implementation block
@property (readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (readonly) int type;                                  //@synthesize type=_type - In the implementation block
-(NSString *)name;
-(int)type;
-(id)initWithSession:(id)arg1 name:(id)arg2 type:(int)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)integerId;
-(id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(int)arg3 withOptions:(unsigned)arg4 error:(id*)arg5 ;
-(char)incrementByValue:(long long)arg1 error:(id*)arg2 ;
-(char)decrementByValue:(long long)arg1 error:(id*)arg2 ;
-(char)compareValueTo:(long long)arg1 swapOnMatchWithValue:(long long)arg2 error:(id*)arg3 ;
-(id)forecastEffectiveOnDate:(id)arg1 error:(id*)arg2 ;
-(char)deleteWithError:(id*)arg1 ;
-(CDSession *)session;
-(id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(int)arg3 error:(id*)arg4 ;
-(long long)creditsRemainingWithError:(id*)arg1 ;
@end

