/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/NewsSettings.bundle/NewsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSystemPolicyForApp;

@interface FRNewsSettingsController : PSListController {

	PSSystemPolicyForApp* _appPolicy;

}

@property (nonatomic,retain) PSSystemPolicyForApp * appPolicy;              //@synthesize appPolicy=_appPolicy - In the implementation block
-(PSSystemPolicyForApp *)appPolicy;
-(void)setAppPolicy:(PSSystemPolicyForApp *)arg1 ;
-(id)specifiers;
@end
