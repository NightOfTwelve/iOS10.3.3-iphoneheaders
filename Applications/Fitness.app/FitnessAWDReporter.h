/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AWDServerConnection;

@interface FitnessAWDReporter : NSObject {

	AWDServerConnection* _serverConnection;

}
+(id)sharedAWDReporter;
+(void)setSharedAWDReporter:(id)arg1 ;
-(void)reportSharingItem:(int)arg1 activityType:(id)arg2 ;
-(id)initWithServerConnection:(id)arg1 ;
-(void)reportFriendChangeAction:(int)arg1 relationshipStartDate:(id)arg2 ;
-(void)_reportMetricWithIdentifier:(unsigned long)arg1 metric:(id)arg2 ;
@end
