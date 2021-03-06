/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IAPEAClient, iAP2Connection;

@interface iAP2EASession : NSObject {

	IAPEAClient* _client;
	iAP2Connection* _connection;
	unsigned _connectionID;
	unsigned char _protocolID;
	unsigned short _sessionID;
	int _listenSock;
	int _sock;
	char _openPipeToAppAfterAccept;
	char _openPipeFromAppAfterAccept;
	char _isWirelessSession;

}

@property (nonatomic,readonly) IAPEAClient * client;                     //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) unsigned short sessionID;                 //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) unsigned char protocolID;                 //@synthesize protocolID=_protocolID - In the implementation block
@property (nonatomic,readonly) iAP2Connection * connection;              //@synthesize connection=_connection - In the implementation block
+(void)resetSessionIDCounter;
-(char)openPipeFromApp;
-(char)openPipeToApp;
-(unsigned char)protocolID;
-(id)initWithClient:(id)arg1 connection:(id)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(char)closeDataPipes;
-(void)shuttingDownSession;
-(int)_createListenSocket;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(id)init;
-(void)dealloc;
-(id)description;
-(iAP2Connection *)connection;
-(unsigned short)sessionID;
-(IAPEAClient *)client;
@end

