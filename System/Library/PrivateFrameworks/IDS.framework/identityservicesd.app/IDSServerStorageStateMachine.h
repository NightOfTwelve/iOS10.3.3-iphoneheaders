/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface IDSServerStorageStateMachine : NSObject {

	NSMutableDictionary* _currentStorageRetriesPerTopic;
	NSMutableDictionary* _deathTimerToTopicMap;
	NSMutableSet* _inflightStorageRequests;
	NSMutableSet* _pendingStorageRequests;

}
+(id)sharedInstance;
-(void)_sendServerStorageMessageForTopic:(id)arg1 retryCount:(int)arg2 ;
-(void)terminateStateMachineForTopic:(id)arg1 ;
-(void)_stateMachineTimedOut:(id)arg1 ;
-(void)_startTimeoutTimerForTopic:(id)arg1 ;
-(void)incomingStorageRequestForTopic:(id)arg1 messageContext:(id)arg2 ;
-(void)recievedNoStorageResponseForTopic:(id)arg1 messageContext:(id)arg2 ;
-(void)recievedLastMessageFromStorageForTopic:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

