/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSBTLinkManagerDelegate <NSObject>
@optional
-(void)manager:(id)arg1 didPairedDeviceChange:(char)arg2;

@required
-(void)manager:(id)arg1 didPowerStateChange:(char)arg2;
-(void)manager:(id)arg1 linkDidConnect:(id)arg2;
-(void)manager:(id)arg1 linkDidDisconnect:(id)arg2;

@end
