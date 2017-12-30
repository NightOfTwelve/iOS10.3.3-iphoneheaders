/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:16:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@interface EduModeNotifier : NSObject {

	shared_ptr<iCloudAccountNotificator>* fICloudStateMonitor;
	property_source_t<edu_mode>* fEduModeResource;
	RestModule* fRestModule;
	LoggerBase<std::__1::shared_ptr<ctu::LogServer> >* fLogger;
	shared_ptr<Registry>* fRegistry;
	queue* fQueue;
	BOOL fDaemonReady;

}
-(id)initWithRegistry:(shared_ptr<Registry>*)arg1 andQueue:(queue*)arg2 andLogger:(LoggerBase<std::__1::shared_ptr<ctu::LogServer> >*)arg3 ;
-(void)handleiCloudAccountEventSync:(int)arg1 ;
-(void)updateEDUModeSync;
-(void)registerForNotifications;
-(void)dumpState;
-(void)setup;
@end
