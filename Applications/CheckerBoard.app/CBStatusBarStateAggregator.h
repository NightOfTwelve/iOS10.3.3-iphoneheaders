/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CheckerBoard/CheckerBoard-Structs.h>
@class NSTimer, NSString, UIDevice, CBWiFiManager;

@interface CBStatusBarStateAggregator : NSObject {

	SCD_Struct_CB0 _data;
	char _lastLockState;
	char _lastLockStateSet;
	NSTimer* _timeItemTimer;
	NSString* _timeItemTimeString;
	UIDevice* _device;
	NSString* _batteryDetailString;
	CBWiFiManager* _wifiManager;

}

@property (nonatomic,retain) NSTimer * timeItemTimer;                     //@synthesize timeItemTimer=_timeItemTimer - In the implementation block
@property (nonatomic,retain) NSString * timeItemTimeString;               //@synthesize timeItemTimeString=_timeItemTimeString - In the implementation block
@property (nonatomic,retain) UIDevice * device;                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSString * batteryDetailString;              //@synthesize batteryDetailString=_batteryDetailString - In the implementation block
@property (nonatomic,retain) CBWiFiManager * wifiManager;                 //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) char lastLockState;                          //@synthesize lastLockState=_lastLockState - In the implementation block
@property (assign,nonatomic) char lastLockStateSet;                       //@synthesize lastLockStateSet=_lastLockStateSet - In the implementation block
+(id)sharedInstance;
-(void)_initialStatusBarSetup;
-(void)_stopTimeItemTimer;
-(void)_setupLock;
-(void)_setupTime;
-(void)_setupBattery;
-(void)_setupWiFi;
-(void)_updateLockItem;
-(void)_updateTimeItems;
-(void)_updateBatteryItems;
-(void)_updateDataNetworkItem;
-(void)_postStatusBarUpdates;
-(void)updateStatusBarItem:(int)arg1 ;
-(char)_setItem:(int)arg1 enabled:(char)arg2 ;
-(char)lastLockStateSet;
-(void)setLastLockState:(char)arg1 ;
-(void)setLastLockStateSet:(char)arg1 ;
-(char)lastLockState;
-(void)_restartTimeItemTimer;
-(NSTimer *)timeItemTimer;
-(void)setTimeItemTimer:(NSTimer *)arg1 ;
-(id)_timeItemDateFormatter;
-(NSString *)timeItemTimeString;
-(void)setTimeItemTimeString:(NSString *)arg1 ;
-(char)_isBatterySaverModeActive;
-(id)_batteryItemPercentFormatter;
-(NSString *)batteryDetailString;
-(void)setBatteryDetailString:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_registerForNotifications;
-(CBWiFiManager *)wifiManager;
-(void)setWifiManager:(CBWiFiManager *)arg1 ;
-(UIDevice *)device;
-(void)setDevice:(UIDevice *)arg1 ;
@end
