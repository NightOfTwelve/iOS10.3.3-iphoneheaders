/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSDeviceConnectionAWDMetrics : NSObject {

	NSMutableDictionary* _metrics;

}
+(id)sharedInstance;
-(id)awdMetricsForConnectionUUID:(id)arg1 ;
-(void)setServiceName:(id)arg1 forConnectionUUID:(id)arg2 ;
-(void)setClientInitTime:(double)arg1 forConnectionUUID:(id)arg2 ;
-(void)setDaemonOpenSocketTime:(double)arg1 forConnectionUUID:(id)arg2 ;
-(void)setDaemonOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2 ;
-(void)setClientOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2 ;
-(void)setSuccess:(BOOL)arg1 forConnectionUUID:(id)arg2 ;
-(void)reportAndRemoveForConnectionUUID:(id)arg1 ;
-(void)setFirstPacketReceiveTime:(double)arg1 forConnectionUUID:(id)arg2 ;
-(void)setConnectionInitTime:(double)arg1 forConnectionUUID:(id)arg2 ;
-(char)_canReportMetric:(id)arg1 ;
-(void)_reportAndRemoveForConnectionUUID:(id)arg1 ;
-(id)_currentMetrics;
-(id)init;
@end

