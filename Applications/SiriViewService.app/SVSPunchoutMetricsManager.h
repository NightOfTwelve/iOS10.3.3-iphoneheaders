/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SVSPreferences, NSObject, CDSession;

@interface SVSPunchoutMetricsManager : NSObject {

	SVSPreferences* _preferences;
	NSObject*<OS_dispatch_queue> _duetQueue;
	CDSession* _coreDuetSession;

}
+(id)sharedManager;
-(char)_parseCoreDuetAttributeValue:(id)arg1 punchoutSignature:(id*)arg2 duration:(double*)arg3 ;
-(void)registerPunchoutWithSession:(id)arg1 signature:(id)arg2 ;
-(void)recordPunchoutMetricsWithSession:(id)arg1 ;
-(id)init;
@end
