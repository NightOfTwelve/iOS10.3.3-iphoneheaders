/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:55 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/Support/voicememod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AssetAccessSessionControllerDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AssetAccessSessionController : NSObject {

	id<AssetAccessSessionControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _clientSessionsByCompositionAVURL;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * clientSessionsByCompositionAVURL;              //@synthesize clientSessionsByCompositionAVURL=_clientSessionsByCompositionAVURL - In the implementation block
@property (assign,nonatomic,__weak) id<AssetAccessSessionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)activeSessionWithAccessToken:(id)arg1 ;
-(id)openAccessSessionWithName:(id)arg1 xpcConnection:(id)arg2 compositionAVURL:(id)arg3 accessIntent:(int)arg4 error:(id*)arg5 ;
-(id)activeSessionsWithWithCompositionAVURL:(id)arg1 ;
-(id)activeSessionsWithXPCConnection:(id)arg1 ;
-(id)_onQueueActiveSessions;
-(id)_onQueueActiveSessionWithAccessToken:(id)arg1 ;
-(id)_performOnSerialQueue:(/*^block*/id)arg1 ;
-(id)_onQueueActiveSessionsWithWithCompositionAVURL:(id)arg1 ;
-(id)_onQueueActiveSessionsWithXPCConnection:(id)arg1 ;
-(id)_onQueueSessionsMatchingPredicate:(/*^block*/id)arg1 ;
-(void)_onQueueEnumerateActiveSessionsWithBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)clientSessionsByCompositionAVURL;
-(id)init;
-(void)setDelegate:(id<AssetAccessSessionControllerDelegate>)arg1 ;
-(id<AssetAccessSessionControllerDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)closeSession:(id)arg1 ;
-(id)activeSessions;
-(void)dumpState;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

