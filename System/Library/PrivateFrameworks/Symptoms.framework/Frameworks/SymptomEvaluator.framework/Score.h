/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Score : NSObject {

	double _upPct;
	double _overallStay;
	double _handicapStay;
	double _rttMin;
	double _maxDownlRate;
	double _connSuccesses;
	double _connAttempts;
	double _epochs;
	double _lqmTransitionCount;

}

@property (assign,nonatomic) double upPct;                           //@synthesize upPct=_upPct - In the implementation block
@property (assign,nonatomic) double overallStay;                     //@synthesize overallStay=_overallStay - In the implementation block
@property (assign,nonatomic) double handicapStay;                    //@synthesize handicapStay=_handicapStay - In the implementation block
@property (assign,nonatomic) double rttMin;                          //@synthesize rttMin=_rttMin - In the implementation block
@property (assign,nonatomic) double maxDownlRate;                    //@synthesize maxDownlRate=_maxDownlRate - In the implementation block
@property (assign,nonatomic) double connSuccesses;                   //@synthesize connSuccesses=_connSuccesses - In the implementation block
@property (assign,nonatomic) double connAttempts;                    //@synthesize connAttempts=_connAttempts - In the implementation block
@property (assign,nonatomic) double epochs;                          //@synthesize epochs=_epochs - In the implementation block
@property (assign,nonatomic) double lqmTransitionCount;              //@synthesize lqmTransitionCount=_lqmTransitionCount - In the implementation block
-(id)description;
-(void)setConnSuccesses:(double)arg1 ;
-(double)connSuccesses;
-(void)setConnAttempts:(double)arg1 ;
-(double)connAttempts;
-(void)setEpochs:(double)arg1 ;
-(double)epochs;
-(double)upPct;
-(double)overallStay;
-(double)handicapStay;
-(double)rttMin;
-(double)maxDownlRate;
-(double)lqmTransitionCount;
-(void)setUpPct:(double)arg1 ;
-(void)setOverallStay:(double)arg1 ;
-(void)setHandicapStay:(double)arg1 ;
-(void)setRttMin:(double)arg1 ;
-(void)setMaxDownlRate:(double)arg1 ;
-(void)setLqmTransitionCount:(double)arg1 ;
@end
