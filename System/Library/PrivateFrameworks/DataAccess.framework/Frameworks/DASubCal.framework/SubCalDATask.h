/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DASubCal/DATask.h>

@class DATaskManager, DAStatusReport, NSString;

@interface SubCalDATask : NSObject <DATask> {

	char _finished;
	DATaskManager* _taskManager;
	DAStatusReport* _statusReport;

}

@property (assign,nonatomic) char finished;                                   //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic,__weak) DATaskManager * taskManager;              //@synthesize taskManager=_taskManager - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                   //@synthesize statusReport=_statusReport - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFinished:(char)arg1 ;
-(void)didFinish;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(void)performTask;
-(DATaskManager *)taskManager;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(char)shouldHoldPowerAssertion;
-(void)setTaskManager:(DATaskManager *)arg1 ;
-(DAStatusReport *)statusReport;
-(char)finished;
-(id)consumerDictKey;
-(void)willFinish;
-(void)performDelegateCallbackWithError:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end

