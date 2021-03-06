/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ODRDeveloperToolsProtocol <NSObject>
@required
-(void)registerManifest:(id)arg1 forBundleID:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)tagStatusForBundle:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)purgeAllTagsInBundleWithID:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)purgeTagWithName:(id)arg1 inBundleWithID:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)fetchManifestForAdamID:(id)arg1 externalVersionID:(id)arg2 variant:(id)arg3 withFetchCompletion:(/*^block*/id)arg4;
-(void)getSimulatedBandwidthWithReply:(/*^block*/id)arg1;
-(void)setSimulatedBandwidth:(unsigned)arg1 withReply:(/*^block*/id)arg2;

@end

