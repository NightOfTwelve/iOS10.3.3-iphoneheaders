/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/Support/appconduitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUUID, NSMutableDictionary;

@interface ACXAvailableApplicationManager : NSObject {

	char _trustChangeEvaluationPending;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSUUID* _lastLSUUID;
	NSMutableDictionary* _companionToWatchAppBundleIDMap;
	NSMutableDictionary* _appList;

}

@property (readonly) NSObject*<OS_dispatch_queue> stateQueue;                         //@synthesize stateQueue=_stateQueue - In the implementation block
@property (retain) NSUUID * lastLSUUID;                                               //@synthesize lastLSUUID=_lastLSUUID - In the implementation block
@property (retain) NSMutableDictionary * companionToWatchAppBundleIDMap;              //@synthesize companionToWatchAppBundleIDMap=_companionToWatchAppBundleIDMap - In the implementation block
@property (retain) NSMutableDictionary * appList;                                     //@synthesize appList=_appList - In the implementation block
@property (assign) char trustChangeEvaluationPending;                                 //@synthesize trustChangeEvaluationPending=_trustChangeEvaluationPending - In the implementation block
+(id)sharedApplicationManager;
-(void)setAppList:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)appList;
-(void)setLastLSUUID:(NSUUID *)arg1 ;
-(void)setCompanionToWatchAppBundleIDMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)companionToWatchAppBundleIDMap;
-(NSUUID *)lastLSUUID;
-(void)_onQueue_reSyncWithLS;
-(char)_onQueue_infoMatchesCurrentLSDatabaseWithUUID:(id*)arg1 ;
-(void)_onQueue_noteDatabaseRebuild;
-(void)_onQueue_noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 ;
-(void)_onQueue_writeAppListToDisk;
-(char)trustChangeEvaluationPending;
-(void)setTrustChangeEvaluationPending:(char)arg1 ;
-(void)_onQueue_noteTrustObtainedForApps:(id)arg1 trustRemovedForApps:(id)arg2 ;
-(void)applicationInstalledWithUserInfoDictionary:(id)arg1 ;
-(void)applicationUninstalledWithUserInfoDictionary:(id)arg1 ;
-(void)profileTrustChanged;
-(id)infoForWatchKitAppsWithBundleIDs:(id)arg1 ;
-(id)watchKitAppWithBundleID:(id)arg1 ;
-(id)allAvailableApps;
-(id)watchAppBundleIDForCompanionAppBundleID:(id)arg1 ;
-(id)watchAppBundleIDsForCompanionAppBundleIDs:(id)arg1 ;
-(id)watchKitAppForCompanionAppBundleID:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)stateQueue;
@end

