/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMessageBulletinsObserverDelegate <NSObject>
@required
-(void)protectedDataBecameAvailableForNotificationService:(id)arg1;
-(void)messagesInvalidatedForNotificationService:(id)arg1;
-(void)invalidateSectionParametersForNotificationService:(id)arg1;
-(void)notificationService:(id)arg1 didChangeAccounts:(id)arg2 error:(id)arg3;
-(void)notificationService:(id)arg1 didFetchMessages:(id)arg2;
-(void)notificationService:(id)arg1 didFetchSummaryForMessages:(id)arg2;
-(void)notificationService:(id)arg1 didRemoveMessageIds:(id)arg2;

@end

