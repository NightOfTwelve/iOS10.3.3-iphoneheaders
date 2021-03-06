/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface URLBagTimer : NSObject {

	NSString* _bagKey;
	NSString* _cellularBagKey;
	double _defaultInterval;
	double _defaultWindow;
	/*^block*/id _eventBlock;
	NSString* _identifier;
	char _started;
	/*^block*/id _preconditionsBlock;
	id _taskObserver;

}

@property (nonatomic,copy) id eventBlock;                          //@synthesize eventBlock=_eventBlock - In the implementation block
@property (nonatomic,copy) id preconditionsBlock;                  //@synthesize preconditionsBlock=_preconditionsBlock - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                      //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,copy) NSString * cellularBagKey;              //@synthesize cellularBagKey=_cellularBagKey - In the implementation block
@property (assign,nonatomic) double defaultInterval;               //@synthesize defaultInterval=_defaultInterval - In the implementation block
@property (assign,nonatomic) double defaultWindow;                 //@synthesize defaultWindow=_defaultWindow - In the implementation block
+(id)playActivityFeedFlushTimer;
+(id)subscriptionRenewTimer;
-(void)_attemptFireForJob:(id)arg1 withName:(id)arg2 ;
-(void)setDefaultInterval:(double)arg1 ;
-(void)setDefaultWindow:(double)arg1 ;
-(void)_setLastFireDate:(id)arg1 ;
-(void)_resetBackgroundTaskJobs;
-(id)_userDefaultsKeyLastTimeCheck;
-(double)_timerInterval;
-(void)_fireTimer;
-(id)_userDefaultsKeyWindowOverride;
-(double)_windowWithUserDefaultsKey:(id)arg1 ;
-(id)_userDefaultsKeyWiFiOverride;
-(double)_timerIntervalWithBagKey:(id)arg1 userDefaultsKey:(id)arg2 ;
-(id)_nextFireDateWithInterval:(double)arg1 ;
-(void)_addJobWithDate:(id)arg1 window:(double)arg2 allowsCellular:(char)arg3 ;
-(id)_userDefaultsKeyCellularOverride;
-(double)_readTimeIntervalFromUserDefaultsKey:(id)arg1 ;
-(NSString *)cellularBagKey;
-(void)setCellularBagKey:(NSString *)arg1 ;
-(double)defaultInterval;
-(double)defaultWindow;
-(id)preconditionsBlock;
-(void)setPreconditionsBlock:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)reset;
-(void)start;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(void)setEventBlock:(id)arg1 ;
-(id)eventBlock;
-(NSString *)bagKey;
@end

