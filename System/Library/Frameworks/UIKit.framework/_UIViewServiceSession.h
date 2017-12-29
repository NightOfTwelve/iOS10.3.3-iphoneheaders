/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <UIKit/_UIViewServiceDeputyManagerDelegate.h>
#import <UIKit/_UIViewServiceViewControllerOperatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, _UIViewServiceDeputyManager, _UIAsyncInvocation, NSString;

@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	_UIViewServiceDeputyManager* _deputyManager;
	_UIAsyncInvocation* _invalidationInvocation;
	/*^block*/id _terminationHandler;
	int __automatic_invalidation_retainCount;
	char __automatic_invalidation_invalidated;

}

@property (nonatomic,copy) id terminationHandler;                   //@synthesize terminationHandler=_terminationHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionWithConnection:(id)arg1 ;
-(oneway void)release;
-(void)dealloc;
-(id)retain;
-(unsigned)retainCount;
-(char)_isDeallocating;
-(int)__automatic_invalidation_logic;
-(char)_tryRetain;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2 ;
-(void)unregisterDeputyClass:(Class)arg1 ;
-(void)registerDeputyClass:(Class)arg1 withConnectionHandler:(/*^block*/id)arg2 ;
-(void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2 ;
-(void)setTerminationHandler:(id)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(char)arg3 ;
-(void)deputy:(id)arg1 didFailWithError:(id)arg2 ;
-(id)terminationHandler;
@end
