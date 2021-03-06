/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Bridge/NRDevicePropertyObserver.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class COSRestoreHeaderView, NSMutableArray, UIView, NRDevice, NSArray, NSString;

@interface COSRestoreSelectionViewController : UITableViewController <NRDevicePropertyObserver, COSBuddyController> {

	id<COSBuddyControllerDelegate> _delegate;
	COSRestoreHeaderView* _headerView;
	NSMutableArray* _restoreInstances;
	UIView* _navBlackoutView;
	int _backupIndex;
	NRDevice* _device;
	NSArray* _backups;
	NSArray* _pairedDevices;

}

@property (nonatomic,retain) COSRestoreHeaderView * headerView;                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSMutableArray * restoreInstances;                           //@synthesize restoreInstances=_restoreInstances - In the implementation block
@property (nonatomic,retain) UIView * navBlackoutView;                                    //@synthesize navBlackoutView=_navBlackoutView - In the implementation block
@property (assign,nonatomic) int backupIndex;                                             //@synthesize backupIndex=_backupIndex - In the implementation block
@property (nonatomic,retain) NRDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSArray * backups;                                           //@synthesize backups=_backups - In the implementation block
@property (nonatomic,retain) NSArray * pairedDevices;                                     //@synthesize pairedDevices=_pairedDevices - In the implementation block
@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)backups;
-(void)_triggerRestoreFromIndex:(int)arg1 ;
-(void)_triggerRestoreFromDeviceIndex:(int)arg1 ;
-(void)_triggerRestoreFromBackupIndex:(int)arg1 ;
-(void)_restoreFailedWithError:(id)arg1 ;
-(void)_restoreCompletedWithSuccess;
-(NSMutableArray *)restoreInstances;
-(void)setRestoreInstances:(NSMutableArray *)arg1 ;
-(UIView *)navBlackoutView;
-(void)setNavBlackoutView:(UIView *)arg1 ;
-(int)backupIndex;
-(void)setBackupIndex:(int)arg1 ;
-(void)setBackups:(NSArray *)arg1 ;
-(id)init;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<COSBuddyControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(COSRestoreHeaderView *)headerView;
-(void)setHeaderView:(COSRestoreHeaderView *)arg1 ;
-(char)controllerAllowsNavigatingBackTo;
-(NRDevice *)device;
-(NSArray *)pairedDevices;
-(void)setPairedDevices:(NSArray *)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(void)setDevice:(NRDevice *)arg1 ;
@end

