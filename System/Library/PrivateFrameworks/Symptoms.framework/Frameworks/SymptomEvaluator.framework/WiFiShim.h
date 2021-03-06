/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:47 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiShimDelegate, OS_dispatch_queue, OS_dispatch_source;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject, NSDictionary;

@interface WiFiShim : NSObject {

	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	WiFiDeviceClientRef _awdlDevice;
	char _registeredForCallbacks;
	unsigned char _lqmCallbackRegistrationAttempts;
	id _tdObserver;
	char _awdlLinkUp;
	unsigned char _lqmCallbacks;
	char _registeredForLQMCallbacks;
	char _hasAssociation;
	char _lqmCallbackBradycardiaTimerResumed;
	char _awdlLinkState;
	id<WiFiShimDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _lqmCallbackBradycardiaTimer;
	NSDictionary* _awdlStateDict;
	NSObject*<OS_dispatch_source> _awdlTimer;
	int _awdlTimerCount;

}

@property (assign,nonatomic) unsigned char lqmCallbacks;                                             //@synthesize lqmCallbacks=_lqmCallbacks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char registeredForLQMCallbacks;                                         //@synthesize registeredForLQMCallbacks=_registeredForLQMCallbacks - In the implementation block
@property (assign,nonatomic) char hasAssociation;                                                    //@synthesize hasAssociation=_hasAssociation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> lqmCallbackBradycardiaTimer;              //@synthesize lqmCallbackBradycardiaTimer=_lqmCallbackBradycardiaTimer - In the implementation block
@property (assign,nonatomic) char lqmCallbackBradycardiaTimerResumed;                                //@synthesize lqmCallbackBradycardiaTimerResumed=_lqmCallbackBradycardiaTimerResumed - In the implementation block
@property (nonatomic,retain) NSDictionary * awdlStateDict;                                           //@synthesize awdlStateDict=_awdlStateDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> awdlTimer;                                //@synthesize awdlTimer=_awdlTimer - In the implementation block
@property (assign,nonatomic) int awdlTimerCount;                                                     //@synthesize awdlTimerCount=_awdlTimerCount - In the implementation block
@property (assign,nonatomic) char awdlLinkState;                                                     //@synthesize awdlLinkState=_awdlLinkState - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef awdlDevice;                                         //@synthesize awdlDevice=_awdlDevice - In the implementation block
@property (nonatomic,retain) id<WiFiShimDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char awdlLinkUp;                                                                //@synthesize awdlLinkUp=_awdlLinkUp - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setDelegate:(id<WiFiShimDelegate>)arg1 ;
-(void)dealloc;
-(id<WiFiShimDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(WiFiManagerClientRef)wifiManager;
-(WiFiDeviceClientRef)wifiDevice;
-(void)setWifiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)_triggerDisconnectEdge:(id)arg1 ;
-(id)ssidForInterfaceWithName:(id)arg1 ;
-(id)bssidForInterfaceWithName:(id)arg1 ;
-(id)getAWDLPeerList;
-(void)registerForCallbacks;
-(void)unregisterForCallbacks;
-(void)_unregisterForLQMCallbacks;
-(void)setAWDLDevice:(WiFiDeviceClientRef)arg1 ;
-(void)_registerForLQMCallbacks;
-(void)handleChangeInAssociation;
-(void)handleAWDLStateChange:(id)arg1 ;
-(void)setAwdlStateDict:(NSDictionary *)arg1 ;
-(char)awdlLinkState;
-(void)setAwdlLinkState:(char)arg1 ;
-(void)_setAWDLLinkUp:(char)arg1 ;
-(id)awdlPeerList;
-(NSDictionary *)awdlStateDict;
-(char)hasAssociation;
-(void)setHasAssociation:(char)arg1 ;
-(unsigned char)lqmCallbacks;
-(void)setLqmCallbacks:(unsigned char)arg1 ;
-(void)_wifiDevicesRefresh;
-(void)_delayedRegisterForLQMCallbacks;
-(WiFiDeviceClientRef)awdlDevice;
-(char)awdlLinkUp;
-(char)registeredForLQMCallbacks;
-(void)setRegisteredForLQMCallbacks:(char)arg1 ;
-(NSObject*<OS_dispatch_source>)lqmCallbackBradycardiaTimer;
-(void)setLqmCallbackBradycardiaTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)lqmCallbackBradycardiaTimerResumed;
-(void)setLqmCallbackBradycardiaTimerResumed:(char)arg1 ;
-(NSObject*<OS_dispatch_source>)awdlTimer;
-(void)setAwdlTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)awdlTimerCount;
-(void)setAwdlTimerCount:(int)arg1 ;
-(void)setAwdlDevice:(WiFiDeviceClientRef)arg1 ;
@end

