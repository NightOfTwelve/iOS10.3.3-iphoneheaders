/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/ICSSettingsBundle.bundle/ICSSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface ICSCallAnnouncementSettingsController : PSListController {

	PSSpecifier* _selectedSpecifier;
	unsigned _announcements;
	PSSpecifier* _groupSpecifier;
	PSSpecifier* _alwaysListItemSpecifier;
	PSSpecifier* _neverListItemSpecifier;
	PSSpecifier* _handsFreeListItemSpecifier;
	PSSpecifier* _headphonesOnlyListItemSpecifier;

}

@property (assign,nonatomic) unsigned announcements;                                     //@synthesize announcements=_announcements - In the implementation block
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                               //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * selectedSpecifier;                            //@synthesize selectedSpecifier=_selectedSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * alwaysListItemSpecifier;                      //@synthesize alwaysListItemSpecifier=_alwaysListItemSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * neverListItemSpecifier;                       //@synthesize neverListItemSpecifier=_neverListItemSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * handsFreeListItemSpecifier;                   //@synthesize handsFreeListItemSpecifier=_handsFreeListItemSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * headphonesOnlyListItemSpecifier;              //@synthesize headphonesOnlyListItemSpecifier=_headphonesOnlyListItemSpecifier - In the implementation block
+(id)localizationTableName;
+(id)labelTextForCurrentSelection;
+(id)localizedStringForKey:(id)arg1 ;
-(void)setSelectedSpecifier:(PSSpecifier *)arg1 ;
-(void)setNeverListItemSpecifier:(PSSpecifier *)arg1 ;
-(void)setHandsFreeListItemSpecifier:(PSSpecifier *)arg1 ;
-(void)loadDataSource;
-(void)setHeadphonesOnlyListItemSpecifier:(PSSpecifier *)arg1 ;
-(void)refreshGroupForSpecifier:(id)arg1 ;
-(void)setAlwaysListItemSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)alwaysListItemSpecifier;
-(PSSpecifier *)handsFreeListItemSpecifier;
-(PSSpecifier *)headphonesOnlyListItemSpecifier;
-(PSSpecifier *)neverListItemSpecifier;
-(PSSpecifier *)selectedSpecifier;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned)announcements;
-(void)setAnnouncements:(unsigned)arg1 ;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(id)specifiers;
@end

