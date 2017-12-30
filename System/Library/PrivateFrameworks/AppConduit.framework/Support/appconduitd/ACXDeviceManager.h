/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/Support/appconduitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appconduitd/ACXIDSMessagingDeviceManager.h>

@protocol ACXDeviceManagerDelegate, OS_dispatch_queue;
@class NSMutableDictionary, ACXDevice, NSObject, NSArray, NSString;

@interface ACXDeviceManager : NSObject <ACXIDSMessagingDeviceManager> {

	id<ACXDeviceManagerDelegate> _delegate;
	NSMutableDictionary* _devices;
	ACXDevice* _activePairedDevice;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (readonly) NSMutableDictionary * devices;                           //@synthesize devices=_devices - In the implementation block
@property (retain) ACXDevice * activePairedDevice;                            //@synthesize activePairedDevice=_activePairedDevice - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (__weak) id<ACXDeviceManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSArray * allDevices; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)currentActivePairedDevice;
-(id)deviceForIDSIdentifier:(id)arg1 ;
-(void)updatedIDSDevices:(id)arg1 ;
-(ACXDevice *)activePairedDevice;
-(void)setActivePairedDevice:(ACXDevice *)arg1 ;
-(id)init;
-(void)setDelegate:(id<ACXDeviceManagerDelegate>)arg1 ;
-(id<ACXDeviceManagerDelegate>)delegate;
-(id)deviceForNRDevice:(id)arg1 ;
-(id)deviceForPairingID:(id)arg1 ;
-(NSArray *)allDevices;
-(NSMutableDictionary *)devices;
-(NSObject*<OS_dispatch_queue>)internalQueue;
@end
