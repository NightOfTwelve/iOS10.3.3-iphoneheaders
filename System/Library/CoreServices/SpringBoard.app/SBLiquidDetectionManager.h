/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLiquidDetectionManager : NSObject {

	int _wetToken;
	char _finishedInit;
	char _detectionEnabled;
	char _accessoryPortWet;

}

@property (getter=isAccessoryPortWet,nonatomic,readonly) char accessoryPortWet;              //@synthesize accessoryPortWet=_accessoryPortWet - In the implementation block
@property (getter=isDetectionEnabled,nonatomic,readonly) char detectionEnabled;              //@synthesize detectionEnabled=_detectionEnabled - In the implementation block
@property (getter=isLiquidDetected,nonatomic,readonly) char liquidDetected; 
+(char)showStatusBarIcon;
+(id)sharedInstance;
-(void)_updateWetState;
-(void)_finishInit;
-(char)isDetectionEnabled;
-(char)isAccessoryPortWet;
-(char)_showStatusBarIcon;
-(void)_stateDidUpdate;
-(char)isLiquidDetected;
-(void)_updateStatusBar;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

