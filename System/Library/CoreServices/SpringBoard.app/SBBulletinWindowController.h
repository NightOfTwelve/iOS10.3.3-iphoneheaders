/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, NSMutableSet, SBBulletinRootViewController, UIViewController;

@interface SBBulletinWindowController : NSObject {

	UIWindow* _bulletinWindow;
	char _rotatingKeyboard;
	char _aboveAssistant;
	NSMutableSet* _windowClients;
	NSMutableSet* _keyClients;
	NSMutableSet* _busyClients;
	NSMutableSet* _busyReasons;
	SBBulletinRootViewController* _rootVC;
	char _wantsKeyWindow;

}

@property (assign,setter=_setWantsKeyWindow:,getter=_wantsKeyWindow,nonatomic) char wantsKeyWindow;              //@synthesize wantsKeyWindow=_wantsKeyWindow - In the implementation block
@property (nonatomic,readonly) UIViewController * rootViewController;                                            //@synthesize rootVC=_rootVC - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                                                                //@synthesize bulletinWindow=_bulletinWindow - In the implementation block
@property (assign,getter=isWindowAboveAssistant,nonatomic) char windowAboveAssistant;                            //@synthesize aboveAssistant=_aboveAssistant - In the implementation block
+(char)shouldSuppressAlertForBulletin:(id)arg1 ;
+(id)sharedInstance;
+(char)_isSecure;
-(char)allowsShowNotificationsSystemGestureFromBanner;
-(void)addWindowClient:(id)arg1 ;
-(void)removeWindowClient:(id)arg1 ;
-(char)allowsShowNotificationsSystemGesture;
-(void)addBusyClient:(id)arg1 ;
-(void)removeBusyClient:(id)arg1 ;
-(void)setWindowAboveAssistant:(char)arg1 ;
-(char)allowsDismissBannerGesture;
-(void)updateKeyWindowStatusIfNecessary;
-(void)_resignAsKeyWindow;
-(char)_allowsShowNotificationsSystemGestureFromBanner:(char)arg1 ;
-(void)_setWantsKeyWindow:(char)arg1 ;
-(void)_becomeKeyWindow;
-(void)_didBecomeKeyWindow:(id)arg1 ;
-(void)_didResignKeyWindow:(id)arg1 ;
-(char)_isBusyForReason:(id)arg1 ;
-(void)addWindowClient:(id)arg1 withChildViewController:(id)arg2 ;
-(void)removeWindowClient:(id)arg1 withChildViewController:(id)arg2 ;
-(char)_hasKeyWindowClients;
-(char)isWindowAboveAssistant;
-(char)_wantsKeyWindow;
-(char)allowsShowNotificationsGesture;
-(char)allowsHideNotificationsGesture;
-(void)setBusy:(char)arg1 forReason:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(UIWindow *)window;
-(UIViewController *)rootViewController;
-(char)isBusy;
-(char)_allowsShowNotificationsGestureFromBanner:(char)arg1 ;
@end
