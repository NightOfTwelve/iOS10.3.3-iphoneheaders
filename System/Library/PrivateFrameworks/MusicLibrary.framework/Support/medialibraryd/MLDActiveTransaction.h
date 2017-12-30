/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class ML3DatabaseConnection, NSLock, MSVXPCTransaction, ML3MusicLibrary, NSUUID, MLDClient;

@interface MLDActiveTransaction : NSObject <NSLocking> {

	ML3DatabaseConnection* _connection;
	NSLock* _lock;
	MSVXPCTransaction* _xpcTransaction;
	char _terminable;
	char _inUseByOperation;
	char _readOnly;
	ML3MusicLibrary* _library;
	NSUUID* _identifier;
	MLDClient* _client;
	double _lastUsedTime;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnection * connection; 
@property (nonatomic,readonly) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) MLDClient * client;                              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) double lastUsedTime;                               //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) char terminable;                                   //@synthesize terminable=_terminable - In the implementation block
@property (assign,nonatomic) char inUseByOperation;                             //@synthesize inUseByOperation=_inUseByOperation - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) char readOnly;                   //@synthesize readOnly=_readOnly - In the implementation block
-(void)setInUseByOperation:(char)arg1 ;
-(void)updateLastUsed;
-(id)initWithLibrary:(id)arg1 connection:(id)arg2 client:(id)arg3 ;
-(void)setTerminable:(char)arg1 ;
-(id)_relinquishConnection;
-(char)terminable;
-(char)inUseByOperation;
-(void)setReadOnly:(char)arg1 ;
-(id)init;
-(id)description;
-(NSUUID *)identifier;
-(void)lock;
-(void)unlock;
-(ML3DatabaseConnection *)connection;
-(ML3MusicLibrary *)library;
-(char)isReadOnly;
-(MLDClient *)client;
-(double)lastUsedTime;
-(void)setLastUsedTime:(double)arg1 ;
@end
