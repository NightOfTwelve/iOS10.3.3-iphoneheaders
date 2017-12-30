/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:21 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pairedsyncd/PSDActivityDelegate.h>

@protocol OS_dispatch_queue;
@class PSYSyncSession, NSObject, NSMapTable, NSMutableArray, PSDActivity, PSYOptions, NSEnumerator, NSMutableDictionary, NSString;

@interface PSDScheduler : NSObject <PSDActivityDelegate> {

	PSYSyncSession* _syncSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _alertQueue;
	NSMapTable* _schedulerObservers;
	NSMutableArray* _activityQueue;
	PSDActivity* _currentActivity;
	PSYOptions* _options;
	NSEnumerator* _testInputsEnumerator;
	NSMutableDictionary* _timeoutTimers;

}

@property (nonatomic,retain) NSMapTable * schedulerObservers;                  //@synthesize schedulerObservers=_schedulerObservers - In the implementation block
@property (nonatomic,retain) NSMutableArray * activityQueue;                   //@synthesize activityQueue=_activityQueue - In the implementation block
@property (nonatomic,retain) PSDActivity * currentActivity;                    //@synthesize currentActivity=_currentActivity - In the implementation block
@property (nonatomic,retain) PSYOptions * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSEnumerator * testInputsEnumerator;              //@synthesize testInputsEnumerator=_testInputsEnumerator - In the implementation block
@property (nonatomic,copy) PSYSyncSession * syncSession;                       //@synthesize syncSession=_syncSession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * timeoutTimers;              //@synthesize timeoutTimers=_timeoutTimers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isSyncShameDisabled;
+(char)_isInternalInstall;
+(id)sharedScheduler;
-(void)addSchedulerObserver:(id)arg1 ;
-(void)removeSchedulerObserver:(id)arg1 ;
-(char)scheduleSyncSession:(id)arg1 ;
-(void)activityDidCompleteSending:(id)arg1 ;
-(NSMapTable *)schedulerObservers;
-(id)activitiesForSessionActivites:(id)arg1 ;
-(void)setActivityQueue:(NSMutableArray *)arg1 ;
-(void)_queue_tellObserversWillStartSyncSession;
-(void)_queue_updateWithSyncSession:(id)arg1 ;
-(void)_dequeueNextActivity;
-(void)setCurrentActivity:(PSDActivity *)arg1 ;
-(void)_startActivity:(id)arg1 ;
-(void)_scheduledActivitiesDidComplete;
-(id)_syncOptionsForActivity:(id)arg1 ;
-(void)_queue_updateSyncSessionActivity:(id)arg1 ;
-(void)_scheduleTimeoutForActivity:(id)arg1 ;
-(void)_finishActivity:(id)arg1 success:(char)arg2 error:(id)arg3 ;
-(void)_activityWasInterrupted:(id)arg1 ;
-(void)_clearActivityTimer:(id)arg1 ;
-(char)_shouldHandleCallbackForActivity:(id)arg1 ;
-(char)_canAttemptRetryForActivity:(id)arg1 ;
-(void)_takeStackshotSequenceWithLabel:(id)arg1 ;
-(void)_popATimeoutAlert:(id)arg1 ;
-(double)_timeoutForActivity:(id)arg1 ;
-(void)_activityTimeoutHandler:(id)arg1 ;
-(void)_activityDidTimeout:(id)arg1 ;
-(unsigned)_maximumInterruptionCountForActivity:(id)arg1 ;
-(char)shouldLaunchAsDryRun;
-(NSEnumerator *)testInputsEnumerator;
-(void)_popADropoutAlert:(unsigned)arg1 ;
-(void)_queue_cleanup;
-(void)_queue_tellObserversDidClearSyncSession:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_abortCurrentActivity;
-(void)_queue_tellObserversDidUpdateSyncSessionWithUpdate:(id)arg1 ;
-(void)_evaluateTestingParametersIfNeeded;
-(void)_currentProgressUpdated:(float)arg1 forActivity:(id)arg2 ;
-(void)_queue_enumerateSchedulerObserversWithBlock:(/*^block*/id)arg1 ;
-(void)activity:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)_cancelAllActivityTimers;
-(void)setSchedulerObservers:(NSMapTable *)arg1 ;
-(void)setTestInputsEnumerator:(NSEnumerator *)arg1 ;
-(NSMutableDictionary *)timeoutTimers;
-(void)setTimeoutTimers:(NSMutableDictionary *)arg1 ;
-(id)init;
-(PSYOptions *)options;
-(void)setOptions:(PSYOptions *)arg1 ;
-(NSMutableArray *)activityQueue;
-(id)_localizedString:(id)arg1 ;
-(PSDActivity *)currentActivity;
-(void)clearCurrentResumeContext;
-(void)cancelSyncSession;
-(PSYSyncSession *)syncSession;
-(void)setSyncSession:(PSYSyncSession *)arg1 ;
@end
