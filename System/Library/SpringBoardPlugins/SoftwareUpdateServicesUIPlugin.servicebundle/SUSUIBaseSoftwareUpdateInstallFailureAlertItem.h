/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/SoftwareUpdateServicesUIPlugin.servicebundle/SoftwareUpdateServicesUIPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServicesUIPlugin/SUSUIBaseSoftwareUpdateAlertItem.h>

@interface SUSUIBaseSoftwareUpdateInstallFailureAlertItem : SUSUIBaseSoftwareUpdateAlertItem {

	char _actionTaken;

}

@property (assign,nonatomic) char actionTaken;              //@synthesize actionTaken=_actionTaken - In the implementation block
-(char)actionTaken;
-(void)setActionTaken:(char)arg1 ;
-(void)willDeactivateForReason:(int)arg1 ;
-(char)allowInSetup;
@end

