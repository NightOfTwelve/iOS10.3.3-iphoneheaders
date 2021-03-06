/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableSet;

@interface BKSWorkspace : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listenerConnection;
	NSMutableSet* _hostConnections;
	NSMutableSet* _clientConnections;

}
+(id)sharedInstance;
+(id)sharedConnection;
+(id)sharedQueue;
-(void)_queue_handleServerMessage:(id)arg1 ;
-(void)_queue_handleClientMessage:(id)arg1 ;
-(void)_queue_handleConnectToHostMessage:(id)arg1 ;
-(id)init;
@end

