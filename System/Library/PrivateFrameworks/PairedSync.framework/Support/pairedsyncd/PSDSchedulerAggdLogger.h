/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:21 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pairedsyncd/PSDSchedulerObserver.h>

@class PSDSchedulerAggdSessionState, NSURL, NSString;

@interface PSDSchedulerAggdLogger : NSObject <PSDSchedulerObserver> {

	PSDSchedulerAggdSessionState* _sessionState;
	NSURL* _sessionStateURL;

}

@property (nonatomic,retain) PSDSchedulerAggdSessionState * sessionState;              //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,retain) NSURL * sessionStateURL;                                  //@synthesize sessionStateURL=_sessionStateURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLogger;
-(void)scheduler:(id)arg1 willStartSyncSession:(id)arg2 ;
-(void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2 ;
-(void)saveSessionState;
-(void)clearSessionState;
-(id)initWithSessionState:(id)arg1 URL:(id)arg2 ;
-(void)didStartActivity:(id)arg1 ;
-(void)activityDidCompleteSending:(id)arg1 ;
-(void)didFinishActivity:(id)arg1 ;
-(void)didFinishSession;
-(void)logDurationForActivityWithIdentifier:(id)arg1 bins:(int*)arg2 binCount:(int)arg3 ;
-(NSURL *)sessionStateURL;
-(id)aggdKeyForActivityIdentifier:(id)arg1 ;
-(void)addValue:(long long)arg1 forScalarKey:(id)arg2 clearBeforeAdding:(char)arg3 ;
-(id)binNameForDuration:(double)arg1 bins:(int*)arg2 count:(int)arg3 ;
-(void)setSessionStateURL:(NSURL *)arg1 ;
-(PSDSchedulerAggdSessionState *)sessionState;
-(void)setSessionState:(PSDSchedulerAggdSessionState *)arg1 ;
@end
