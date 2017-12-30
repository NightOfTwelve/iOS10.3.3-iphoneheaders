/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSLocale, NSDate;

@interface AXTapticTimeManager : NSObject {

	NSMutableArray* _enqueuedSounds;
	NSMutableArray* _enqueuedSoundDelays;
	unsigned long _ssIDHapticFast[24];
	unsigned long _ssIDHapticSlow[24];
	unsigned long _ssIDHapticMorse[10];
	NSMutableDictionary* _soundToPatterns;
	char _is24Hour;
	NSLocale* _localeOverride;
	NSDate* _dateOverride;
	/*^block*/id _queueCallback;

}

@property (nonatomic,retain) NSLocale * localeOverride;              //@synthesize localeOverride=_localeOverride - In the implementation block
@property (nonatomic,retain) NSDate * dateOverride;                  //@synthesize dateOverride=_dateOverride - In the implementation block
@property (nonatomic,copy) id queueCallback;                         //@synthesize queueCallback=_queueCallback - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_atomToLegacyVibePattern:(id)arg1 ;
-(void)_updateIs24HourTime;
-(void)setQueueCallback:(id)arg1 ;
-(NSLocale *)localeOverride;
-(char)_is24HourTime;
-(id)_dateComponentsForClockTime;
-(int)_numberOfTapsForHourNumber:(int)arg1 ;
-(void)_clearQueue;
-(int)_numberOfTapHoursForClockTime;
-(void)_enqueueHours:(unsigned)arg1 encoding:(int)arg2 ;
-(int)_numberOfTapMinutesForClockTime;
-(void)_enqueueMinutes:(unsigned)arg1 encoding:(int)arg2 ;
-(void)_handleTestingQueueCallback;
-(void)_dequeueSound;
-(id)_convertSoundToStringName:(unsigned long)arg1 ;
-(id)queueCallback;
-(void)setLocaleOverride:(NSLocale *)arg1 ;
-(void)outputHoursAndMinutes:(int)arg1 ;
-(void)outputHours:(int)arg1 ;
-(void)outputMinutes:(int)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)setDateOverride:(NSDate *)arg1 ;
-(NSDate *)dateOverride;
@end
