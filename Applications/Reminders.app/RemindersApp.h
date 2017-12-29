/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSMutableArray, CLLocationManager, NSMutableDictionary, RemindersCardController, RemindersScheduledListController, NSString;

@interface RemindersApp : UIApplication <UIApplicationDelegate> {

	NSMutableArray* _sortedCalendars;
	CLLocationManager* _locationManager;
	UIWindow* _window;
	NSMutableDictionary* _cardControllersByCalendar;
	NSMutableDictionary* _contentControllersByCalendar;
	RemindersCardController* _scheduledCard;
	RemindersScheduledListController* _scheduledList;
	char _isUITesting;

}

@property (assign,nonatomic) char isUITesting;                      //@synthesize isUITesting=_isUITesting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)_didPerformShowReminderDetailsKeyboardCommand;
-(void)RemindersAppUITestingSetUpWithArguments:(id)arg1 ;
-(void)RemindersAppUITestingTearDown;
-(void)_performShowReminderDetailsKeyboardCommand;
-(char)isUITesting;
-(void)eventStoreChanged:(id)arg1 ;
-(id)reminderURLFromLaunchURL:(id)arg1 openedViaBB:(char*)arg2 isLocation:(char*)arg3 isDisplayScheduledCard:(char*)arg4 ;
-(id)contentControllerForCalendarToDisplay:(id)arg1 useCache:(char)arg2 ;
-(void)reenableLocationReminders;
-(void)_updateEverConnectedToCar;
-(void)setIsUITesting:(char)arg1 ;
-(void)archive:(char)arg1 ;
-(void)_displayScheduledCard;
-(char)displayAndHighlightReminder:(id)arg1 ;
-(void)_displayCalendar:(id)arg1 ;
-(void)_displayInvitationForUserActivity:(id)arg1 ;
-(CGRect)detailViewContentRect;
-(id)sortedCalendars;
-(void)calendarsChangedWithChangedObjectIDs:(id)arg1 ;
-(id)sortedDisplayOrders:(id)arg1 ;
-(int)highestDisplayOrderInSource:(id)arg1 ;
-(void)removeUnnecessaryCachedControllers;
-(id)cardControllerForCalendarToDisplay:(id)arg1 useCache:(char)arg2 ;
-(id)createReminderInCalendar:(id)arg1 ;
-(void)_alarmsDidFire;
-(void)deleteCalendar:(id)arg1 ;
-(void)moveCalendar:(id)arg1 toSortedIndex:(int)arg2 ;
-(void)assignDisplayOrders:(id)arg1 ;
-(void)calendarsChanged;
-(id)archivedSortedLists;
-(void)startScrollRemindersCardStackTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startShowScheduledRemindersCardTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startShowCardStackTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startScrollScheduledRemindersCardTestWithName:(id)arg1 simulateSync:(char)arg2 options:(id)arg3 ;
-(void)startScrollListWithCompletedTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startScrollListInEditModeTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startSearchTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startScrollSearchTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startRotateTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_simulateExternalChange;
-(void)dealloc;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(id)_extendLaunchTest;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)applicationDidResume;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(void)didRemoveDeactivationReason:(id)arg1 ;
-(void)addCalendar:(id)arg1 ;
@end
