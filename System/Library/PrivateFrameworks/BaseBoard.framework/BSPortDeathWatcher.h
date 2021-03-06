/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BSDispatchSource, BSMachPortSendRight;

@interface BSPortDeathWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BSDispatchSource* _source;
	BSMachPortSendRight* _sendRight;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) BSMachPortSendRight * sendRight;              //@synthesize sendRight=_sendRight - In the implementation block
-(BSMachPortSendRight *)sendRight;
-(id)initWithSendRight:(id)arg1 queue:(id)arg2 deathHandler:(/*^block*/id)arg3 ;
-(void)queue_handlePortDeathEvent;
-(id)initWithPort:(unsigned)arg1 queue:(id)arg2 deathHandler:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)dealloc;
@end

