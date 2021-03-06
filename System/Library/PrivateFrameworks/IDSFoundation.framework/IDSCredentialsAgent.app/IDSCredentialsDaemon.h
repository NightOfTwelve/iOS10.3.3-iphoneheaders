/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSCredentialsAgent.app/IDSCredentialsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSCredentialsDaemon : NSObject {

	NSMutableDictionary* _uniqueIDToCredentialLoaderMap;
	void* _transaction;
	id _stateMonitor;

}
+(id)sharedInstance;
-(void)_pidSuspended:(int)arg1 ;
-(void)_terminate;
-(void)logState;
-(void)addCredentialLoader:(id)arg1 ;
-(void)removeCredentialLoaderForUniqueID:(id)arg1 ;
-(id)credentialLoaderForUniqueID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)shutdown;
@end

