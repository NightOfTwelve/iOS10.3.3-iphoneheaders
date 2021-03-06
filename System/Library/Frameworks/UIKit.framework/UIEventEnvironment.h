/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIApplication, NSMutableArray, UITouchesEvent, UIPressesEvent, UIWheelEvent, _UIGameControllerEvent, UIPhysicalKeyboardEvent, UITouch, NSMutableDictionary;

@interface UIEventEnvironment : NSObject {

	UIApplication* _application;
	NSMutableArray* _eventQueue;
	UITouchesEvent* _touchesEvent;
	UIPressesEvent* _pressesEvent;
	UIWheelEvent* _wheelEvent;
	_UIGameControllerEvent* _gameControllerEvent;
	UIPhysicalKeyboardEvent* _physicalKeyboardEvent;
	char _isSystemApplication;
	UITouch* _currentTouch;
	float _externalTouchScaleFactor;
	int _currentNudgePressType;
	NSMutableDictionary* _pressesMap;
	double _commitTimeForTouchEvents;
	char _hasSeenAnyStylusEvents;
	char _shouldRoundTouchLocation;
	int _disableTouchCoalescingCount;
	char _didDelayedInit;
	NSMutableDictionary* _estimatedTouchRecordsByContextIDAndEstimationIndex;
	NSMutableArray* _estimatedTouchRecordsInIncomingOrder;

}

@property (assign,nonatomic) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
-(id)initWithApplication:(id)arg1 ;
-(void)_registerEstimatedTouches:(id)arg1 event:(id)arg2 forTouchable:(id)arg3 ;
-(id)_pressForType:(int)arg1 ;
-(void)_setPress:(id)arg1 forType:(int)arg2 ;
-(char)eventWantsLowLatency:(id)arg1 ;
-(void)_enqueueHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_removeEstimatedTouchRecord:(id)arg1 ;
-(id)UIKitEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(char)_isTouchCoalescingDisabled;
-(void)_disableTouchCoalescingWithCount:(int)arg1 ;
-(void)_enableTouchCoalescingWithCount:(int)arg1 ;
-(id)_estimatedTouchRecordForContextID:(id)arg1 estimationIndex:(id)arg2 ;
-(void)_dispatchAndRemoveStaleEstimationUpdateRecordsWithEventTime:(double)arg1 upToRecord:(id)arg2 ;
-(UIApplication *)application;
-(void)setApplication:(UIApplication *)arg1 ;
-(NSMutableArray *)eventQueue;
-(void)setEventQueue:(NSMutableArray *)arg1 ;
@end

