/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/_DKNotificationReceiver.h>

@class _DKPeriod, NSString;

@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor <_DKNotificationReceiver> {

	_DKPeriod* eligibleForNotification;
	int displayStatusNotifyToken;
	int internalSettingChangedNotificationToken;
	char _enabled;
	char _FirstWakeUINotificationEnabled;
	char _SoftwareUpdateUINotificationEnabled;

}

@property (assign,nonatomic) char FirstWakeUINotificationEnabled;                                                             //@synthesize FirstWakeUINotificationEnabled=_FirstWakeUINotificationEnabled - In the implementation block
@property (assign,setter=oftwareUpdateUINotificationEnabled,nonatomic) char SoftwareUpdateUINotificationEnabled;              //@synthesize SoftwareUpdateUINotificationEnabled=_SoftwareUpdateUINotificationEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prettyPrintDateAsLocalTime:(id)arg1 ;
+(id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+(id)fetchMostRecentPastEventForStream:(id)arg1 ;
+(id)eventStream;
-(void)recordFirstWakeup:(id)arg1 ;
-(char)isFirstBacklightOn;
-(void)showFirstWakeupUINotification;
-(char)isUINotificationEnabledForKey:(id)arg1 ;
-(char)eligibleForFirstWakeUINotification;
-(char)SoftwareUpdateUINotificationEnabled;
-(void)showSoftwareUpdateUINotification;
-(char)FirstWakeUINotificationEnabled;
-(void)setSoftwareUpdateUINotificationEnabled:(char)arg1 ;
-(id)firstWakeupEventWithValue:(char)arg1 ;
-(void)setFirstWakeUINotificationEnabled:(char)arg1 ;
-(id)convertUTCToLocalTimeString:(id)arg1 ;
-(void)setUINotificationEligibility;
-(void)handleScreenUnlockEvent;
-(void)setupNotificationEligiblityPeriod;
-(void)handleBacklightTurnedOffEvent;
-(void)handleBacklightTurnedOnEvent;
-(void)registerHandleBacklightEvents;
-(void)setInternalSettingsChangedNotficationHandler;
-(void)unregisterHandleBacklightEvents;
-(id)getNextSWUpdatePrediction;
-(char)didQualifyingScreenLockEndInEligibilityPeriod;
-(void)showUINotification:(id)arg1 ;
-(char)isInternalBuild;
-(void)stop;
-(void)start;
-(void)receiveNotificationEvent:(id)arg1 ;
@end

