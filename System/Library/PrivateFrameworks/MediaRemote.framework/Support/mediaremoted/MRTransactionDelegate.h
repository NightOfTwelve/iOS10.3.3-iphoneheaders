/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRTransactionDelegate <NSObject>
@optional
-(void)transaction:(id)arg1 didReceivePackets:(id)arg2 receivedSize:(unsigned)arg3 requestedSize:(unsigned)arg4 completion:(/*^block*/id)arg5;
-(void)transactionDidEnd:(id)arg1;
-(unsigned)transactionRequestingMemorySize:(id)arg1;

@end
