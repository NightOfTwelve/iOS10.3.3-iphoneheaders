/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/DuetKnowledgeMonitor-Structs.h>
#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CXCallObserver, NSString;

@interface _DKCallMonitor : _DKMonitor <CXCallObserverDelegate> {

	NSObject*<OS_dispatch_queue> _callHistoryQueue;
	char _enabled;
	char _callInProgress;
	CXCallObserver* _observer;
	CTServerConnectionRef _telephony;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventWithState:(id)arg1 interaction:(id)arg2 ;
+(void)setCallInProgress:(char)arg1 ;
+(char)writeRepopulationCheckpoint:(id)arg1 ;
+(id)readRepopulationCheckpoint;
+(id)eventStream;
+(id)entitlements;
-(void)_handleDistributedNotification:(id)arg1 ;
-(void)deleteCallHistory;
-(void)requestCallHistoryRepopulation;
-(id)_initialCallHistoryLookbackDate;
-(void)recordCallHistoryFromStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_recordCallHistoryFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)update;
-(void)synchronouslyReflectCurrentValue;
-(void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(CTServerConnectionRef)arg3 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
@end
