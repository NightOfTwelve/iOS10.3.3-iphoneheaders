/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKAuthorizationSettingsViewController.h>

@class WDControllerManager;

@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController {

	WDControllerManager* _controllerManager;

}

@property (retain) WDControllerManager * controllerManager;              //@synthesize controllerManager=_controllerManager - In the implementation block
-(WDControllerManager *)controllerManager;
-(void)setControllerManager:(WDControllerManager *)arg1 ;
-(id)specialCellWithIdentifier:(id)arg1 textLabelText:(id)arg2 ;
-(id)initWithControllerManager:(id)arg1 style:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)sectionsForAuthController:(id)arg1 ;
@end

