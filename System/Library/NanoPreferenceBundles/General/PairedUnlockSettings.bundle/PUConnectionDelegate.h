/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/General/PairedUnlockSettings.bundle/PairedUnlockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUConnectionDelegate <NSObject>
@optional
-(void)unlockConnection:(id)arg1 didPairForUnlock:(char)arg2 error:(id)arg3;
-(void)unlockConnection:(id)arg1 didUnpairForUnlock:(char)arg2 error:(id)arg3;
-(void)unlockConnection:(id)arg1 didEnableOnlyRemoteUnlock:(char)arg2 error:(id)arg3;
-(void)unlockConnection:(id)arg1 didDisableOnlyRemoteUnlock:(char)arg2 error:(id)arg3;
-(void)unlockConnection:(id)arg1 remoteDeviceDidCompletePasscodeAction:(char)arg2 error:(id)arg3;
-(void)unlockConnectionRemoteDeviceDidUnlock:(id)arg1;
-(void)unlockConnection:(id)arg1 remoteDeviceDidNotifyStateHasPasscode:(char)arg2 isPasscodeLocked:(char)arg3 isUnlockOnly:(char)arg4;

@end

