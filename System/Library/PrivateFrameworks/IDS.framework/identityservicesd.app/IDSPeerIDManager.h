/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FTMessageDelivery_DualMode, FTMessageDelivery, IDSPushHandler, NSMutableArray, IDSPersistentMap, NSMutableDictionary;

@interface IDSPeerIDManager : NSObject {

	FTMessageDelivery_DualMode* _dualInterfaceidQueryMessageDelivery;
	FTMessageDelivery* _idQueryMessageDelivery;
	IDSPushHandler* _pushHandler;
	NSMutableArray* _queryQueue;
	IDSPersistentMap* _peerMap;
	NSMutableDictionary* _completionBlocksToURIsMap;
	NSMutableDictionary* _extraCompletionBlocks;
	NSMutableDictionary* _clientDataUpdateBlocks;
	NSMutableDictionary* _purgeClientDataBlocks;
	NSMutableDictionary* _disasterModeTokens;
	char _isInServerBackoffMode;

}
+(char)isServerBackoffModeActive;
+(char)_datePassed:(id)arg1 ;
+(char)shouldUseSelfTokens;
+(id)timeToCacheKnownResults:(id)arg1 ;
+(char)isQueryRetryForBadSignatureEnabled;
+(int)serverBackoffModeMaxSenderRetries;
+(int)queryRetryNumberForBadSignature;
+(double)queryRetryIntervalForBadSignature;
+(int)serverBackoffModeReceiverRetryInterval;
+(id)sharedInstance;
-(id)sessionTokenForURI:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4 expirationDate:(id*)arg5 refreshDate:(id*)arg6 fromIdentity:(id)arg7 includeSelfDevice:(char)arg8 ;
-(void)forgetPeerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(char)startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 forSending:(char)arg5 forRefresh:(char)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 forToken:(id)arg2 ;
-(void)removeCompletionBlockForToken:(id)arg1 ;
-(char)hasProperty:(id)arg1 forURI:(id)arg2 pushToken:(id)arg3 fromURI:(id)arg4 service:(id)arg5 ;
-(id)sessionTokensForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3 fromIdentity:(id)arg4 includeSelfDevice:(char)arg5 fullyRemoveSelfDevice:(char)arg6 ;
-(char)hasPeerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)activeURIsFromURI:(id)arg1 service:(id)arg2 ;
-(void)addPurgeClientDataBlock:(/*^block*/id)arg1 forToken:(id)arg2 ;
-(void)removePurgeClientDataBlockForToken:(id)arg1 ;
-(double)timeToCacheURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 forStatus:(unsigned)arg4 ;
-(void)addClientDataUpdateBlock:(/*^block*/id)arg1 forToken:(id)arg2 ;
-(void)removeClientDataUpdateBlockForToken:(id)arg1 ;
-(id)initWithMessageDelivery:(id)arg1 dualMessageDelivery:(id)arg2 ;
-(void)_bagLoaded:(id)arg1 ;
-(id)_existingPeerMapFromURI:(id)arg1 service:(id)arg2 ;
-(void)forgetSessionTokensForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)_peerMapFromURI:(id)arg1 service:(id)arg2 ;
-(void)_purgeMapFromURI:(id)arg1 service:(id)arg2 ;
-(void)_setDisasterModeToken:(id)arg1 forURI:(id)arg2 ;
-(char)_uriHasAllSessionTokensValid:(id)arg1 inPeerMap:(id)arg2 ;
-(id)_peerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ignoreExpiration:(char)arg4 ;
-(id)_peerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)peerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 fullyRemoveSelf:(char)arg4 ;
-(id)_sessionTokenForURI:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4 expirationDate:(id*)arg5 refreshDate:(id*)arg6 fromIdentity:(id)arg7 ;
-(void)forgetSessionTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)_disasterModeTokenForURI:(id)arg1 ;
-(id)_earliestExpirationDateForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(void)_dequeuePendingQueryIfPossible;
-(char)hasPeerTokensForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)_completionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(void)_removeCompletionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(char)_shouldForceCelluarQueries;
-(char)_setIdentityInfo:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 service:(id)arg4 ;
-(char)_addCompletionBlock:(/*^block*/id)arg1 forURIs:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 ;
-(void)_startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 forSending:(char)arg5 forRefresh:(char)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_flushTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(char)_uriHasOneSessionTokenValid:(id)arg1 inPeerMap:(id)arg2 ;
-(id)idQueryMessageDelivery;
-(char)shouldShowPeerErrorsFor:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4 ;
-(void)notePeerToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 service:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(void)clearCache;
@end

