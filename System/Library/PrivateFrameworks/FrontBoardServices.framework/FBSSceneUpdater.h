/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSSceneUpdater <NSObject>
@required
-(void)scene:(id)arg1 didReceiveActions:(id)arg2;
-(void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
-(void)unregisterDelegateForSceneID:(id)arg1;
-(id)hostProcess;
-(char)willObserveLayersManually;
-(void)scene:(id)arg1 didAttachLayer:(id)arg2;
-(void)scene:(id)arg1 didUpdateLayer:(id)arg2;
-(void)scene:(id)arg1 didDetachLayer:(id)arg2;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3;

@end
