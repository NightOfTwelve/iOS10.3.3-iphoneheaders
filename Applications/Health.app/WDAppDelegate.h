/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <Health/HKProfileIconObserver.h>
#import <Health/WDFavoriteDataUnitsControllerObserver.h>
#import <UIKit/UIApplicationDelegate.h>

@class WDControllerManager, HKNavigationController, WDTabBarController, WDHealthDataViewController, WDTodayViewController, WDContactConsolidationController, UIWindow, NSString;

@interface WDAppDelegate : UIResponder <UIApplicationTestingDelegate, HKProfileIconObserver, WDFavoriteDataUnitsControllerObserver, UIApplicationDelegate> {

	WDControllerManager* _controllerManager;
	HKNavigationController* _buddyNavigationController;
	HKNavigationController* _profileNavigationController;
	HKNavigationController* _medicalIDNavigationController;
	WDTabBarController* _tabBarController;
	WDHealthDataViewController* _healthDataViewController;
	WDTodayViewController* _todayViewController;
	WDContactConsolidationController* _contactConsolidationController;
	UIWindow* _window;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UIWindow * window;                                      //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) WDControllerManager * controllerManager;              //@synthesize controllerManager=_controllerManager - In the implementation block
-(WDControllerManager *)controllerManager;
-(void)favoriteDataUnitsControllerReady:(id)arg1 ;
-(char)categoryViewScrollTest:(int)arg1 ;
-(char)todayViewScrollTest;
-(char)landscapeChartAnimationTest;
-(void)dismissBuddy;
-(void)presentProfileViewController;
-(void)_showDataCollectionPrompt;
-(void)restoreStoreDemoModeFavoritesIfNeeded;
-(void)_restoreApplicationStateWithUserActivity:(id)arg1 ;
-(void)_restoreToBaseStateAndSelectTabAtIndex:(int)arg1 ;
-(void)resetStoreDemoModeFavorites;
-(id)_storeDemoModeFavoriteDataUnits;
-(UIWindow *)window;
-(char)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(char)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(char)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(char)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)tabBarController;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(void)didTapProfileIcon;
@end

