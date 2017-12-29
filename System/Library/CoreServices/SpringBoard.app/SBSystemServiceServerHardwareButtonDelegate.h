/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSystemServiceServerHardwareButtonDelegate <SBSystemServiceServerDelegate>
@required
-(void)systemServiceServer:(id)arg1 clientDidDisconnect:(id)arg2;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 acquireAssertionOfType:(int)arg3 forReason:(id)arg4 withCompletion:(/*^block*/id)arg5;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setEventMask:(unsigned)arg3 buttonKind:(int)arg4 priority:(int)arg5;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setHapticType:(int)arg3 buttonKind:(int)arg4;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 fetchHapticTypeForButtonKind:(int)arg3 completion:(/*^block*/id)arg4;

@end
