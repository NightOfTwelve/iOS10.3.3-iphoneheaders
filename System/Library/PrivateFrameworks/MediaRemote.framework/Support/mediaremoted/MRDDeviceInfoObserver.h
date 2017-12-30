/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MCProfileConnectionObserver.h>

@protocol MRDDeviceInfoObserving;
@class NSString;

@interface MRDDeviceInfoObserver : NSObject <MCProfileConnectionObserver> {

	MGNotificationTokenStructRef _gestaltNotificationToken;
	void* _deviceInfo;
	id<MRDDeviceInfoObserving> _delegate;

}

@property (assign,nonatomic) id<MRDDeviceInfoObserving> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_deviceInfoDidChange;
-(id)init;
-(void)setDelegate:(id<MRDDeviceInfoObserving>)arg1 ;
-(void)dealloc;
-(id<MRDDeviceInfoObserving>)delegate;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
@end
