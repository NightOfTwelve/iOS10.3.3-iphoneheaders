/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBXpcConnectionDelegate.h>
#import <libobjc.A.dylib/CBPairingAgentParentDelegate.h>

@class CBXpcConnection, CBPairingAgent, NSString;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate> {

	CBXpcConnection* _connection;
	CBPairingAgent* _pairingAgent;
	int _state;

}

@property (assign,nonatomic) int state;                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain,readonly) CBPairingAgent * sharedPairingAgent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3 ;
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(char)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)peerWithInfo:(id)arg1 ;
-(char)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(char)isMsgAllowedAlways:(unsigned short)arg1 ;
-(void)xpcConnectionIsInvalid;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)xpcConnectionDidReset;
-(void)handleStateUpdatedMsg:(id)arg1 ;
-(void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)setConnectionTargetQueue:(id)arg1 ;
-(CBPairingAgent *)sharedPairingAgent;
-(id)initInternal;
@end

