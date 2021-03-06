/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class HOSHomeViewController, HMHomeManager, NSString;

@interface HOSSettingsController : PSListController <HFHomeManagerObserver, HFHomeObserver> {

	HOSHomeViewController* _detailController;

}

@property (nonatomic,readonly) HMHomeManager * homeManager; 
@property (assign,nonatomic,__weak) HOSHomeViewController * detailController;              //@synthesize detailController=_detailController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)homeHubEnabled:(id)arg1 ;
-(id)_sortedMyHomes;
-(void)deleteHome:(id)arg1 ;
-(id)createHomeHubSpecifiers;
-(char)_showMyHomesGroup;
-(id)createMyHomesSpecifiers;
-(char)_showSharedHomesGroup;
-(id)createGroupSpecifierForSharedHomes;
-(id)createSharedHomesSpecifiers;
-(char)_showNoHomesGroup;
-(id)createGroupSpecifierForNoHomes;
-(id)_sortByNameDescriptor;
-(id)_sortedHomesPassingTest:(/*^block*/id)arg1 ;
-(id)_sortedSharedHomes;
-(id)createGroupSpecifierForHomeHub;
-(id)createSpecifierForHomeHub;
-(id)createGroupSpecifierForMyHomes;
-(id)createSpecifierForHome:(id)arg1 ;
-(void)setHomeHubEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)updateHomesSections;
-(id)specifierForHome:(id)arg1 ;
-(id)localizedKBURL;
-(int)specifierIndexForHome:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)showController:(id)arg1 animate:(char)arg2 ;
-(void)setDetailController:(HOSHomeViewController *)arg1 ;
-(HOSHomeViewController *)detailController;
-(HMHomeManager *)homeManager;
-(void)homeDidUpdateName:(id)arg1 ;
-(void)home:(id)arg1 didAddUser:(id)arg2 ;
-(void)home:(id)arg1 didRemoveUser:(id)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(id)specifiers;
@end

