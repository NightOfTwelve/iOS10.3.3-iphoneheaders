/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSXPCConnection;

@interface MCMDMClient : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedClient;
-(void)_createAndStartMDMXPCConnection;
-(void)scheduleTokenUpdate;
-(void)simulatePush;
-(void)simulatePushIfNetworkTetheredWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateMDMWithContext:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)processDeviceRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)processUserRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)accessRights;
-(char)authenticateWithCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 topic:(id)arg3 useDevelopmentAPNS:(char)arg4 signMessage:(char)arg5 outError:(id*)arg6 ;
-(char)checkOutCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 topic:(id)arg3 signMessage:(char)arg4 outError:(id*)arg5 ;
-(void)notifyNewConfiguration;
-(void)scheduleTokenUpdateIfNecessary;
-(void)retryNotNowResponse;
-(void)uprootMDM;
-(char)isManagedByMDM;
-(char)isActivationLockAllowedWhileSupervised;
-(id)processDeviceRequest:(id)arg1 outError:(id*)arg2 ;
-(id)processUserRequest:(id)arg1 outError:(id*)arg2 ;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

