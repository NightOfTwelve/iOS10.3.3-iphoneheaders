/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:21 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pairedsyncd/PSDSchedulerObserver.h>

@class NSString;

@interface PSDSchedulerPowerLogger : NSObject <PSDSchedulerObserver>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scheduler:(id)arg1 willStartSyncSession:(id)arg2 ;
-(void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2 ;
-(void)didStartActivity:(id)arg1 ;
-(void)didFinishActivity:(id)arg1 ;
-(void)didFinishSession;
-(void)didStartSyncSessionWithActivityCount:(unsigned)arg1 isResuming:(char)arg2 ;
-(id)stringForPowerLogEvent:(unsigned)arg1 ;
@end

