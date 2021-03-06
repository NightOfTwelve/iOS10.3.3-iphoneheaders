/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBClient;

@interface SBHarmonyController : NSObject {

	CBClient* _client;
	char _supportsWhitePointAdaptation;
	char _supportsBlueLightReduction;

}

@property (nonatomic,readonly) char supportsWhitePointAdaptation;                                                //@synthesize supportsWhitePointAdaptation=_supportsWhitePointAdaptation - In the implementation block
@property (assign,getter=isWhitePointAdaptationEnabled,nonatomic) char whitePointAdaptationEnabled; 
@property (assign,nonatomic) int whitePointAdaptivityStyle; 
@property (nonatomic,readonly) char supportsBlueLightReduction;                                                  //@synthesize supportsBlueLightReduction=_supportsBlueLightReduction - In the implementation block
+(id)sharedInstance;
-(float)whitePointAdaptationStrengthForWhitePointAdaptivityStyle:(int)arg1 ;
-(void)setWhitePointAdaptationStrength:(float)arg1 forWhitePointAdaptivityStyle:(int)arg2 ;
-(char)supportsWhitePointAdaptation;
-(void)setWhitePointAdaptivityStyleWithStyles:(id)arg1 animationSettings:(id)arg2 ;
-(void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)arg1 toWhitePointAdaptivityStyleWithStyles:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5 ;
-(void)setWhitePointAdaptivityStyle:(int)arg1 animationSettings:(id)arg2 ;
-(char)isWhitePointAdaptationEnabled;
-(void)setWhitePointAdaptationEnabled:(char)arg1 ;
-(id)init;
-(void)setWhitePointAdaptivityStyle:(int)arg1 ;
-(int)whitePointAdaptivityStyle;
-(char)supportsBlueLightReduction;
@end

