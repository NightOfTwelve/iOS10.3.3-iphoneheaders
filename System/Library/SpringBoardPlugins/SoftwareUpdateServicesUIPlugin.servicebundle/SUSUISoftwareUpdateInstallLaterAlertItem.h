/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/SoftwareUpdateServicesUIPlugin.servicebundle/SoftwareUpdateServicesUIPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServicesUIPlugin/SUSUIBaseSoftwareUpdateAlertItem.h>

@class SUSUISoftwareUpdateInstallOperationLifeCycleHandler, NSString;

@interface SUSUISoftwareUpdateInstallLaterAlertItem : SUSUIBaseSoftwareUpdateAlertItem {

	SUSUISoftwareUpdateInstallOperationLifeCycleHandler* _tryTonightOperationLifeCycleHandler;
	NSString* _repopReason;
	char _choseInstallTonight;
	char _scheduleInstallAlertRepopOnDismiss;

}

@property (nonatomic,retain) SUSUISoftwareUpdateInstallOperationLifeCycleHandler * tryTonightOperationLifeCycleHandler;              //@synthesize tryTonightOperationLifeCycleHandler=_tryTonightOperationLifeCycleHandler - In the implementation block
-(id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 tryTonightOperationLifeCycleHandler:(id)arg3 ;
-(void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1 ;
-(void)setTryTonightOperationLifeCycleHandler:(SUSUISoftwareUpdateInstallOperationLifeCycleHandler *)arg1 ;
-(SUSUISoftwareUpdateInstallOperationLifeCycleHandler *)tryTonightOperationLifeCycleHandler;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)allowMenuButtonDismissal;
-(char)allowLockScreenDismissal;
-(char)shouldShowInLockScreen;
-(char)undimsScreen;
-(char)reappearsAfterLock;
-(void)willDeactivateForReason:(int)arg1 ;
@end

