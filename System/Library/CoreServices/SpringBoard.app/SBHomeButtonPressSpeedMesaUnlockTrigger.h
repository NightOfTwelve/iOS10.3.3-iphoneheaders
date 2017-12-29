/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMesaUnlockTrigger.h>

@class BSTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {

	BSTimer* _slowPressTimer;
	char _bioUnlockOccurredWhileTimerWasRunning;
	char _primed;
	double _slowPressDuration;

}

@property (setter=_setSlowPressTimer:,getter=_slowPressTimer,nonatomic,retain) BSTimer * slowPressTimer;              //@synthesize slowPressTimer=_slowPressTimer - In the implementation block
@property (assign,nonatomic) double slowPressDuration;                                                                //@synthesize slowPressDuration=_slowPressDuration - In the implementation block
-(char)bioUnlock;
-(void)screenOff;
-(void)menuButtonDown;
-(void)fingerOff;
-(double)slowPressDuration;
-(char)_isTimerRunning;
-(void)setSlowPressDuration:(double)arg1 ;
-(id)_slowPressTimer;
-(void)_setSlowPressTimer:(id)arg1 ;
-(id)init;
-(id)description;
-(void)_startTimer;
-(void)_timerFired;
-(void)_cancelTimer;
-(id)succinctDescriptionBuilder;
@end
