/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AAUIFamilyNotificationObserver : NSObject {

	char _observing;
	/*^block*/id _notificationHandler;

}
+(id)familyNotificationObserverWithNotificationHandler:(/*^block*/id)arg1 ;
+(void)initialize;
-(id)_initWithNotificationHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveNotification;
-(id)init;
-(void)dealloc;
-(void)_startObserving;
-(void)stopObserving;
@end
