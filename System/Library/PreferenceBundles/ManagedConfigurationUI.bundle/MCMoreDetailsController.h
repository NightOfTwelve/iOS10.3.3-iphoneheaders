/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UIImage;

@interface MCMoreDetailsController : PSListController {

	UIImage* _iconImage;

}

@property (nonatomic,retain) UIImage * iconImage;              //@synthesize iconImage=_iconImage - In the implementation block
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UIImage *)iconImage;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)_specifierForPayload:(id)arg1 ;
@end

