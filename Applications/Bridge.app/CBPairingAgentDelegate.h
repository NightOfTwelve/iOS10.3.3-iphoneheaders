/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBPairingAgentDelegate <NSObject>
@optional
-(void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(int)arg3 passkey:(id)arg4;
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;

@end
