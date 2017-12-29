/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSListController.h>

@interface COSPreferencesListController : COSListController {

	char _suppressControllerAnimationForExpiry;
	char _didFirstLoad;

}

@property (nonatomic,readonly) UIViewController*<PSController> categoryController; 
-(char)reloadsWhenBecomingActive;
-(void)becomeActive:(id)arg1 ;
-(id)settingsFileName;
-(id)localizedPrefsStringForString:(id)arg1 ;
-(id)hardcodedSpecifiers;
-(id)additionalSpecifiers;
-(int)indexOfGeneralController;
-(void)suppressControllerAnimationForExpiry;
-(id)settingsBundleDirectory;
-(void)launchBridgeSetup:(id)arg1 ;
-(char)reloadingSpecifiersUpdatesSearchModel;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)title;
-(void)viewDidAppear:(char)arg1 ;
-(UIViewController*<PSController>)categoryController;
-(void)selectGeneralCategoryForced:(char)arg1 showController:(char)arg2 ;
-(void)_showControllerFromSpecifier:(id)arg1 ;
-(void)selectGeneralCategory;
-(id)specifierForBundle:(id)arg1 ;
-(void)selectGeneralCategoryForced:(char)arg1 ;
-(id)generalViewController;
-(id)specifiers;
@end
