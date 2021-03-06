/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/XPCServices/com.apple.accounts.dom.xpc/com.apple.accounts.dom
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDDataclassOwnersManagerProtocol <NSObject>
@required
-(void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2;
-(void)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 completion:(/*^block*/id)arg3;
-(void)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 completion:(/*^block*/id)arg3;
-(void)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 completion:(/*^block*/id)arg3;
-(void)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 completion:(/*^block*/id)arg3;
-(void)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 completion:(/*^block*/id)arg4;

@end

