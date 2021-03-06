/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol SettingsTableViewControllerDelegate, SettingsTableViewControllerObserver;
@class UISnapshotView, NSArray, NSDictionary, MapViewModeSelector, UISwitch;

@interface SettingsTableViewController : UITableViewController {

	CGRect _initialFrame;
	CGRect _finalFrame;
	UISnapshotView* _initialSnapshot;
	UISnapshotView* _finalSnapshot;
	NSArray* _displaySections;
	NSDictionary* _menuItemsPerSections;
	NSArray* _lastDisplaySections;
	NSDictionary* _lastMenuItemsPerSections;
	MapViewModeSelector* _segmentedControl;
	char _showViewModeSelectionAsMenu;
	char _isReloadingData;
	id<SettingsTableViewControllerDelegate> _delegate;
	id<SettingsTableViewControllerObserver> _observer;
	UISwitch* _trafficSwitch;
	UISwitch* _labelsSwitch;

}

@property (assign,nonatomic,__weak) UISwitch * trafficSwitch;                                      //@synthesize trafficSwitch=_trafficSwitch - In the implementation block
@property (assign,nonatomic,__weak) UISwitch * labelsSwitch;                                       //@synthesize labelsSwitch=_labelsSwitch - In the implementation block
@property (assign,nonatomic,__weak) id<SettingsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SettingsTableViewControllerObserver> observer;              //@synthesize observer=_observer - In the implementation block
+(id)weatherAttributionButtonWithDelegate:(id)arg1 ;
+(id)mapAttributionButtonWithDelegate:(id)arg1 ;
-(void)updateTheme;
-(id)_spacerCell;
-(void)_updateSegmentedControlToFitWidth:(float)arg1 ;
-(void)_updateTableViewCells;
-(char)_usesCompactMetrics;
-(int)_numberOfImmediatelyVisibleCells;
-(id)_displayableSectionsInTableView;
-(int)_sectionAtIndex:(int)arg1 ;
-(id)_menuItemsInSection:(int)arg1 ;
-(id)_menuItemsPerSections:(id)arg1 ;
-(id)_viewModeSelectionCellWithText:(id)arg1 ;
-(id)_menuCellWithText:(id)arg1 ;
-(id)_menuCellWithText:(id)arg1 identifier:(id)arg2 ;
-(id)_cellWithIdentifier:(id)arg1 setupBlock:(/*^block*/id)arg2 ;
-(id)_cellForSegmentedControl;
-(id)_switchCellWithText:(id)arg1 enabled:(char)arg2 selected:(char)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(id)_environmentInfoCell;
-(id)_cellForMenuItem:(int)arg1 ;
-(id)indexPathForMenuItem:(int)arg1 ;
-(void)setSegmentedControlColor;
-(void)_handleSegmentedControlTap:(id)arg1 ;
-(void)_switchToViewMode:(int)arg1 ;
-(void)_toggleLabels;
-(void)_toggleTraffic;
-(char)_handleSelectedMenuItem:(int)arg1 ;
-(UISwitch *)trafficSwitch;
-(void)setTrafficSwitch:(UISwitch *)arg1 ;
-(UISwitch *)labelsSwitch;
-(void)setLabelsSwitch:(UISwitch *)arg1 ;
-(id)init;
-(void)setDelegate:(id<SettingsTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<SettingsTableViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setObserver:(id<SettingsTableViewControllerObserver>)arg1 ;
-(id<SettingsTableViewControllerObserver>)observer;
-(id)_attributionCell;
-(void)_contentSizeCategoryDidChange;
-(id)_segmentedControl;
-(void)setupConstraints;
-(float)desiredHeight;
@end

