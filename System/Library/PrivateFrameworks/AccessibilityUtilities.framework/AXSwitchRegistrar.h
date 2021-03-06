/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSwitchRegistrarDelegate;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class AXSwitch;

@interface AXSwitchRegistrar : NSObject {

	char _addLongPressSwitch;
	id<AXSwitchRegistrarDelegate> _delegate;
	AXSwitch* _aSwitch;
	IOHIDDeviceRef _device;
	IOHIDEventSystemClientRef _eventSystemClient;
	IOHIDManagerRef _manager;

}

@property (nonatomic,retain) AXSwitch * aSwitch;                                       //@synthesize aSwitch=_aSwitch - In the implementation block
@property (nonatomic,retain) IOHIDDeviceRef device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) IOHIDEventSystemClientRef eventSystemClient;              //@synthesize eventSystemClient=_eventSystemClient - In the implementation block
@property (nonatomic,retain) IOHIDManagerRef manager;                                  //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) id<AXSwitchRegistrarDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char addLongPressSwitch;                                  //@synthesize addLongPressSwitch=_addLongPressSwitch - In the implementation block
-(id)init;
-(void)setDelegate:(id<AXSwitchRegistrarDelegate>)arg1 ;
-(void)dealloc;
-(id<AXSwitchRegistrarDelegate>)delegate;
-(void)setASwitch:(AXSwitch *)arg1 ;
-(void)_filterEvents:(char)arg1 ;
-(char)isSwitchWithName:(id)arg1 ;
-(char)_isSwitchWithSource:(NSString*)arg1 keyCode:(unsigned short)arg2 buttonNumber:(unsigned)arg3 ATVRemoteButtonUsage:(long)arg4 ;
-(char)addLongPressSwitch;
-(char)_isKeyboardSwitchWithKeyCode:(unsigned short)arg1 longPress:(char)arg2 ;
-(AXSwitch *)aSwitch;
-(char)_isATVRemoteButtonSwitchWithUsage:(long)arg1 longPress:(char)arg2 ;
-(char)_isMFISwitchWithButtonNumber:(unsigned)arg1 longPress:(char)arg2 ;
-(IOHIDEventSystemClientRef)eventSystemClient;
-(id)_keyboardMatching;
-(void)setEventSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(id)_mfiMatching;
-(void)beginFilteringEvents;
-(void)endFilteringEvents;
-(id)firstAvailableName;
-(void)_handleKeyboardKeyDownEvent:(IOHIDEventRef)arg1 ;
-(void)_handleATVRemoteButtonDownEvent:(IOHIDEventRef)arg1 ;
-(void)_handleMFIButtonDownValue:(IOHIDValueRef)arg1 ;
-(id)_atvRemoteMatching;
-(void)setAddLongPressSwitch:(char)arg1 ;
-(IOHIDManagerRef)manager;
-(void)setManager:(IOHIDManagerRef)arg1 ;
-(void)_handleApplicationDidBecomeActive:(id)arg1 ;
-(void)_handleApplicationWillResignActive:(id)arg1 ;
-(IOHIDDeviceRef)device;
-(void)setDevice:(IOHIDDeviceRef)arg1 ;
@end

