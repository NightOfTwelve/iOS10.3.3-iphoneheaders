/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <cloudphotod/CPLEngineSchedulerImplementation.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface CPLBaseScheduler : CPLPlatformObject <CPLEngineSchedulerImplementation> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notePullQueueIsFull;
-(char)shouldStartSyncSessionFromState:(unsigned)arg1 ;
-(void)scheduleNextSyncSessionAtDate:(id)arg1 ;
-(void)unscheduleNextSyncSession;
-(void)notePushQueueIsEmpty;
-(void)notePushQueueIsFull;
-(void)noteServerHasChanges;
-(void)noteSyncSessionSucceeded;
-(void)noteSyncSessionFailedWithError:(id)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
@end
