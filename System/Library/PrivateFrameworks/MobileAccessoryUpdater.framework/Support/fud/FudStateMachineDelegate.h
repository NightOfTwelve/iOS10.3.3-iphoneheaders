/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:11 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Support/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FudStateMachineDelegate <NSObject>
@required
-(id)getPluginWithName:(id)arg1 forFilter:(id)arg2 delegate:(id)arg3 info:(id*)arg4 options:(id)arg5;
-(id)getStorage;
-(void)stepWillBegin:(int)arg1 stateMachine:(id)arg2;
-(void)stepComplete:(int)arg1 stateMachine:(id)arg2 status:(char)arg3 error:(id)arg4 info:(id)arg5;
-(void)stepProgress:(int)arg1 stateMachine:(id)arg2 progress:(double)arg3 overallProgress:(double)arg4;
-(void)accessoryDisconnected:(id)arg1 error:(id)arg2;

@end
