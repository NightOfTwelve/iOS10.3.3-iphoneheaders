/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface _DASBatchingQueue : NSObject {

	unsigned _maxQueueDepth;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _executionQueue;
	/*^block*/id _workHandler;
	NSMutableArray* _workItems;
	NSObject*<OS_dispatch_source> _timer;
	double _maxDelay;

}

@property (assign,nonatomic) double maxDelay;                                          //@synthesize maxDelay=_maxDelay - In the implementation block
@property (assign,nonatomic) unsigned maxQueueDepth;                                   //@synthesize maxQueueDepth=_maxQueueDepth - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                   //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (nonatomic,copy) id workHandler;                                             //@synthesize workHandler=_workHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * workItems;                               //@synthesize workItems=_workItems - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                      //@synthesize timer=_timer - In the implementation block
+(id)queueWithName:(id)arg1 maxBatchingDelay:(double)arg2 maxQueueDepth:(unsigned)arg3 queue:(id)arg4 workItemsHandler:(/*^block*/id)arg5 ;
-(void)setWorkHandler:(id)arg1 ;
-(void)addWorkItem:(id)arg1 ;
-(void)setWorkItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)workItems;
-(void)unprotectedExecuteWorkItems;
-(id)initWithName:(id)arg1 maxBatchingDelay:(double)arg2 maxQueueDepth:(unsigned)arg3 queue:(id)arg4 workItemsHandler:(/*^block*/id)arg5 ;
-(unsigned)maxQueueDepth;
-(void)setMaxQueueDepth:(unsigned)arg1 ;
-(id)workHandler;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(double)maxDelay;
-(void)setMaxDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
