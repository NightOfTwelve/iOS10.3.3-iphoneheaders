/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZOTFullscreenEventHandlerDelegate <NSObject>
@required
-(void)sendCancelEventToAppDirectlyWithSenderID:(unsigned long long)arg1;
-(void)dispatchEntireEventQueue;
-(void)postHandCancelWithSenderID:(unsigned long long)arg1;
-(void)dispatchEventToSystem:(id)arg1;
-(void)resetEventQueue;
-(void)disableSleepTimer:(char)arg1;

@end

