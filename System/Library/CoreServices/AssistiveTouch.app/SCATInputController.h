/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATCameraInputSourceDelegate.h>
#import <assistivetouchd/SCATHardwareInputSourceDelegate.h>
#import <assistivetouchd/SCATScreenInputSourceDelegate.h>
#import <assistivetouchd/SCATInterDeviceInputSourceDelegate.h>
#import <assistivetouchd/AXSSInterDeviceActionReceiver.h>

@protocol SCATInputControllerDelegate;
@class AXSwitchRecipe, AXSSInterDeviceCommunicator, AXAccessQueue, SCATCameraInputSource, SCATKeyboardInputSource, SCATMFIInputSource, SCATScreenInputSource, SCATATVRemoteInputSource, SCATInterDeviceInputSource, AXDispatchTimer, AXUIClient, NSString;

@interface SCATInputController : NSObject <SCATCameraInputSourceDelegate, SCATHardwareInputSourceDelegate, SCATScreenInputSourceDelegate, SCATInterDeviceInputSourceDelegate, AXSSInterDeviceActionReceiver> {

	char _valid;
	char _isInputHoldEnabled;
	char _isInputRepeatEnabled;
	char _isInputCoalesceEnabled;
	char _hasInitializedInputSources;
	AXSwitchRecipe* _recipe;
	AXSSInterDeviceCommunicator* _interDeviceCommunicator;
	id<SCATInputControllerDelegate> _delegate;
	AXAccessQueue* _queue;
	SCATCameraInputSource* _cameraInputSource;
	SCATKeyboardInputSource* _keyboardInputSource;
	SCATMFIInputSource* _mfiInputSource;
	SCATScreenInputSource* _screenInputSource;
	SCATATVRemoteInputSource* _atvRemoteInputSource;
	SCATInterDeviceInputSource* _interDeviceInputSource;
	AXDispatchTimer* _inputHoldTimer;
	AXDispatchTimer* _inputRepeatTimer;
	AXDispatchTimer* _inputLongPressTimer;
	double _timeIntervalBeforeSendAction;
	double _timeIntervalBeforeSendLongPressAction;
	double _timeIntervalBeforeSendRepeatAction;
	double _timeIntervalBetweenDidSendActions;
	double _timeIntervalSinceDidSendAction;

}

@property (assign,getter=isValid,nonatomic) char valid;                                            //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) AXUIClient * userInterfaceClient; 
@property (nonatomic,readonly) AXSSInterDeviceCommunicator * interDeviceCommunicator;              //@synthesize interDeviceCommunicator=_interDeviceCommunicator - In the implementation block
@property (assign,nonatomic) id<SCATInputControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AXAccessQueue * queue;                                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) SCATCameraInputSource * cameraInputSource;                            //@synthesize cameraInputSource=_cameraInputSource - In the implementation block
@property (nonatomic,retain) SCATKeyboardInputSource * keyboardInputSource;                        //@synthesize keyboardInputSource=_keyboardInputSource - In the implementation block
@property (nonatomic,retain) SCATMFIInputSource * mfiInputSource;                                  //@synthesize mfiInputSource=_mfiInputSource - In the implementation block
@property (nonatomic,retain) SCATScreenInputSource * screenInputSource;                            //@synthesize screenInputSource=_screenInputSource - In the implementation block
@property (nonatomic,retain) SCATATVRemoteInputSource * atvRemoteInputSource;                      //@synthesize atvRemoteInputSource=_atvRemoteInputSource - In the implementation block
@property (nonatomic,retain) SCATInterDeviceInputSource * interDeviceInputSource;                  //@synthesize interDeviceInputSource=_interDeviceInputSource - In the implementation block
@property (assign,nonatomic) double timeIntervalBeforeSendAction;                                  //@synthesize timeIntervalBeforeSendAction=_timeIntervalBeforeSendAction - In the implementation block
@property (assign,nonatomic) double timeIntervalBeforeSendLongPressAction;                         //@synthesize timeIntervalBeforeSendLongPressAction=_timeIntervalBeforeSendLongPressAction - In the implementation block
@property (assign,nonatomic) double timeIntervalBeforeSendRepeatAction;                            //@synthesize timeIntervalBeforeSendRepeatAction=_timeIntervalBeforeSendRepeatAction - In the implementation block
@property (assign,nonatomic) double timeIntervalBetweenDidSendActions;                             //@synthesize timeIntervalBetweenDidSendActions=_timeIntervalBetweenDidSendActions - In the implementation block
@property (assign,nonatomic) double timeIntervalSinceDidSendAction;                                //@synthesize timeIntervalSinceDidSendAction=_timeIntervalSinceDidSendAction - In the implementation block
@property (assign,nonatomic) char isInputHoldEnabled;                                              //@synthesize isInputHoldEnabled=_isInputHoldEnabled - In the implementation block
@property (assign,nonatomic) char isInputRepeatEnabled;                                            //@synthesize isInputRepeatEnabled=_isInputRepeatEnabled - In the implementation block
@property (assign,nonatomic) char isInputCoalesceEnabled;                                          //@synthesize isInputCoalesceEnabled=_isInputCoalesceEnabled - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * inputHoldTimer;                                     //@synthesize inputHoldTimer=_inputHoldTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * inputRepeatTimer;                                   //@synthesize inputRepeatTimer=_inputRepeatTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * inputLongPressTimer;                                //@synthesize inputLongPressTimer=_inputLongPressTimer - In the implementation block
@property (assign,nonatomic) char hasInitializedInputSources;                                      //@synthesize hasInitializedInputSources=_hasInitializedInputSources - In the implementation block
@property (nonatomic,retain) AXSwitchRecipe * recipe;                                              //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,readonly) int role; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isSwitchWithSource:(NSString*)arg1 ;
-(AXSSInterDeviceCommunicator *)interDeviceCommunicator;
-(id)_allSwitchesInUse;
-(char)_handleHoldAtPointForActionIdentifier:(long)arg1 start:(char)arg2 ;
-(char)isInputCoalesceEnabled;
-(double)timeIntervalBetweenDidSendActions;
-(double)timeIntervalSinceDidSendAction;
-(void)setTimeIntervalSinceDidSendAction:(double)arg1 ;
-(void)_sendActionWithIdentifier:(long)arg1 ;
-(char)isInputHoldEnabled;
-(AXDispatchTimer *)inputHoldTimer;
-(double)timeIntervalBeforeSendAction;
-(void)_endAction;
-(AXDispatchTimer *)inputRepeatTimer;
-(char)isInputRepeatEnabled;
-(double)timeIntervalBeforeSendRepeatAction;
-(void)setTimeIntervalBeforeSendAction:(double)arg1 ;
-(void)setTimeIntervalBeforeSendRepeatAction:(double)arg1 ;
-(void)setTimeIntervalBetweenDidSendActions:(double)arg1 ;
-(void)setIsInputHoldEnabled:(char)arg1 ;
-(void)setIsInputRepeatEnabled:(char)arg1 ;
-(void)setIsInputCoalesceEnabled:(char)arg1 ;
-(void)_didReceiveActionWithIdentifier:(long)arg1 start:(char)arg2 ignoreInputHold:(char)arg3 ;
-(void)_hideAlertForSource:(unsigned)arg1 ;
-(void)_showAlert:(id)arg1 forSource:(unsigned)arg2 ;
-(void)_showState:(id)arg1 forSource:(unsigned)arg2 ;
-(void)_configureMFIAccessoryIfNecessary:(id)arg1 ;
-(SCATCameraInputSource *)cameraInputSource;
-(void)setCameraInputSource:(SCATCameraInputSource *)arg1 ;
-(void)_hideStateForSource:(unsigned)arg1 ;
-(SCATKeyboardInputSource *)keyboardInputSource;
-(SCATMFIInputSource *)mfiInputSource;
-(SCATATVRemoteInputSource *)atvRemoteInputSource;
-(void)setKeyboardInputSource:(SCATKeyboardInputSource *)arg1 ;
-(void)setMfiInputSource:(SCATMFIInputSource *)arg1 ;
-(void)setAtvRemoteInputSource:(SCATATVRemoteInputSource *)arg1 ;
-(SCATScreenInputSource *)screenInputSource;
-(void)setScreenInputSource:(SCATScreenInputSource *)arg1 ;
-(SCATInterDeviceInputSource *)interDeviceInputSource;
-(void)setInterDeviceInputSource:(SCATInterDeviceInputSource *)arg1 ;
-(void)_updateActionsForSource:(id)arg1 ;
-(void)updateWhetherSwitchConfigurationRendersDeviceUnusable;
-(void)_updateCameraInputSource;
-(void)_updateKeyboardInputSource;
-(void)_updateATVRemoteInputSource;
-(void)_updateMFIInputSource;
-(void)_updateScreenInputSource;
-(void)_updateInterDeviceInputSource;
-(void)setHasInitializedInputSources:(char)arg1 ;
-(void)setInputHoldTimer:(AXDispatchTimer *)arg1 ;
-(void)setInputRepeatTimer:(AXDispatchTimer *)arg1 ;
-(void)_removeInputSources;
-(void)_removeInputTimers;
-(void)_updateTimeIntervalBeforeSendAction;
-(void)_updateIsInputHoldEnabled;
-(void)_updateTimeIntervalBeforeSendRepeatAction;
-(void)_updateIsInputRepeatEnabled;
-(void)_updateTimeIntervalBetweenDidSendActions;
-(void)_updateIsInputCoalesceEnabled;
-(void)_updateInputSources;
-(void)_setupInputTimers;
-(char)hasInitializedInputSources;
-(char)_switchConfigurationRendersDeviceUnusable;
-(void)cameraInputSource:(id)arg1 didReceiveActionWithIdentifier:(long)arg2 start:(char)arg3 ;
-(void)cameraInputSource:(id)arg1 didUpdateAvailability:(char)arg2 withDetail:(unsigned)arg3 ;
-(void)cameraInputSource:(id)arg1 didUpdateState:(CGPoint)arg2 ;
-(char)shouldForwardSwitchEventsForInputSource:(id)arg1 ;
-(void)inputSource:(id)arg1 forwardSwitchEvent:(id)arg2 ;
-(void)stopForwardingSwitchEventsForInputSource:(id)arg1 ;
-(void)hardwareInputSource:(id)arg1 didReceiveActionWithIdentifier:(long)arg2 start:(char)arg3 ignoreInputHold:(char)arg4 ;
-(void)hardwareInputSource:(id)arg1 didUpdateAvailability:(char)arg2 withDetail:(unsigned)arg3 ;
-(void)screenInputSource:(id)arg1 didReceiveActionWithIdentifier:(long)arg2 start:(char)arg3 ignoreInputHold:(char)arg4 ;
-(void)interDeviceInputSource:(id)arg1 didReceiveActionWithIdentifier:(long)arg2 start:(char)arg3 ignoreInputHold:(char)arg4 ;
-(id)initWithInterDeviceCommunicator:(id)arg1 ;
-(double)timeIntervalBeforeSendLongPressAction;
-(void)setTimeIntervalBeforeSendLongPressAction:(double)arg1 ;
-(AXDispatchTimer *)inputLongPressTimer;
-(void)setInputLongPressTimer:(AXDispatchTimer *)arg1 ;
-(AXUIClient *)userInterfaceClient;
-(void)setDelegate:(id<SCATInputControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCATInputControllerDelegate>)delegate;
-(char)isValid;
-(AXAccessQueue *)queue;
-(void)setQueue:(AXAccessQueue *)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setRecipe:(AXSwitchRecipe *)arg1 ;
-(AXSwitchRecipe *)recipe;
-(void)setValid:(char)arg1 ;
-(int)role;
-(void)didReceiveSwitchEvent:(id)arg1 forDeviceWithName:(id)arg2 ;
@end

