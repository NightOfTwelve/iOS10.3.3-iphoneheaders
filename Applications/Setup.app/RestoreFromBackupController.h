/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyAppleIDControllerDelegate.h>
#import <Setup/BuddyController.h>
#import <Bridge/BuddyTCSubControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Setup/MBManagerDelegate.h>
#import <Setup/BuddySoftwareUpdateControllerDelegate.h>

@protocol OS_dispatch_queue, BuddyControllerDelegate;
@class NSDateComponentsFormatter, BuddyAppleIDController, MBManager, NSTimer, NSArray, NSMutableArray, BKSProcessAssertion, RestoreProgressView, NSObject, NSString, SSAccount, SSTermsAndConditions, NSMutableDictionary, BuddyAppleIDAuthManager, BuddySoftwareUpdateController, RestorableBackupItem;

@interface RestoreFromBackupController : BuddyTableViewController <BuddyAppleIDControllerDelegate, BuddyController, BuddyTCSubControllerDelegate, UITableViewDataSource, UITableViewDelegate, MBManagerDelegate, BuddySoftwareUpdateControllerDelegate> {

	NSDateComponentsFormatter* _durationFormatter;
	BuddyAppleIDController* _iTunesAppleIDController;
	BuddyAppleIDController* _softwareUpdateAppleIDController;
	MBManager* _backupManager;
	NSTimer* _refreshTimer;
	NSArray* _backupList;
	NSArray* _similarRestorables;
	NSMutableArray* _visibleSimilarRestorables;
	NSMutableArray* _otherRestorables;
	NSMutableArray* _visibleOtherRestorables;
	int _listState;
	char _showAllFooterPresent;
	int _restoreState;
	BKSProcessAssertion* _restoringProcessAssertion;
	MKBAssertionRef _restoringLockAssertion;
	RestoreProgressView* _restoreProgressView;
	NSObject*<OS_dispatch_queue> _update_backup_list_queue;
	char _appleAccountRemoved;
	int _compatibleRestoresState;
	NSString* _activeStoreAccount;
	NSMutableArray* _storeAccountsToSignIn;
	SSAccount* _currentStoreAccount;
	SSTermsAndConditions* _currentStoreTerms;
	char _signInWasSilent;
	NSString* _appleIDPassword;
	NSMutableDictionary* _authManagers;
	char _scannedForUpdate;
	BuddyAppleIDAuthManager* _softwareUpdateAuthManager;
	BuddySoftwareUpdateController* _softwareUpdateController;
	char _scanningForUpdate;
	id<BuddyControllerDelegate> _delegate;
	RestorableBackupItem* _selectedRestorable;
	NSString* _availableUpdateVersion;

}

@property (nonatomic,retain) RestorableBackupItem * selectedRestorable;                //@synthesize selectedRestorable=_selectedRestorable - In the implementation block
@property (assign,nonatomic) char scanningForUpdate;                                   //@synthesize scanningForUpdate=_scanningForUpdate - In the implementation block
@property (nonatomic,copy) NSString * availableUpdateVersion;                          //@synthesize availableUpdateVersion=_availableUpdateVersion - In the implementation block
@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)launchIntoRestoreWithNavigationController:(id)arg1 delegate:(id)arg2 ;
-(void)buddyTCSubController:(id)arg1 didFinishWithAgree:(char)arg2 ;
-(void)handleDebugGesture;
-(void)controllerWasPopped;
-(void)startRestore;
-(void)setListState:(int)arg1 ;
-(id)mostSimilarRestorablesInsertRemainingIntoArray:(id)arg1 getOtherUniqueDevicesCount:(unsigned*)arg2 ;
-(void)_updateTable:(id)arg1 toMatchArray:(id)arg2 withVisibleArray:(id)arg3 maxVisible:(unsigned)arg4 fromOldSection:(int)arg5 toNewSection:(int)arg6 ;
-(void)updateVisibleSnapshots;
-(void)updateListStateWithReload:(char)arg1 ;
-(id)filteredRestorableItemsFromBackupList:(id)arg1 ;
-(void)setBackupList:(id)arg1 withError:(id)arg2 ;
-(void)updateBackupListCompletion:(/*^block*/id)arg1 ;
-(void)_reallyStartRestore;
-(void)registerKeychainCredentialsOptionally:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSpinningWithIdentifier:(id)arg1 ;
-(void)stopSpinningForIdentifier:(id)arg1 ;
-(id)createRestoreProgressController;
-(void)_removeOldStoreSignInAndTermsPages;
-(id)alertForBackupError:(id)arg1 ;
-(void)takeProcessAndLockAssertionCompletion:(/*^block*/id)arg1 ;
-(void)upgradeStoreAccountSignInPageDidSignInWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 ;
-(void)upgradeStoreAccountSignInPageDidSkip;
-(void)showStoreSignIn;
-(void)showRestoreProgressView;
-(void)releaseProcessAndLockAssertion;
-(void)setScanningForUpdate:(char)arg1 ;
-(void)setAvailableUpdateVersion:(NSString *)arg1 ;
-(void)refreshBackupListFromTimer:(id)arg1 ;
-(void)scanForUpdateIfNecessaryForBackupList:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removePrimaryAppleAccount;
-(void)didDismiss;
-(void)_showNextStoreAccountTerms;
-(void)_showStoreTermsForAccount:(id)arg1 ;
-(char)shouldSetCloudRestoreMiniBuddyBreadcrumb;
-(char)shouldSetPaymentRestoreMiniBuddyBreadcrumb;
-(void)showAllBackups;
-(id)restorableItemAtIndexPath:(id)arg1 ;
-(NSString *)availableUpdateVersion;
-(void)setupWithAlternateChoice:(id)arg1 ;
-(void)showStoreTermsIfNeeded;
-(void)showRestoreWarningsIfNeededForRestorable:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSelectedRestorable:(RestorableBackupItem *)arg1 ;
-(id)signInPageForPostRestoreAuthenticationWithNavigationController:(id)arg1 ;
-(void)backBarButtonItemPressed:(id)arg1 ;
-(void)_prepareForSoftwareUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appleIDControllerFinished:(id)arg1 ;
-(void)softwareUpdateController:(id)arg1 prepareToInstallUpdate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)softwareUpdateController:(id)arg1 didStartInstallForUpdate:(id)arg2 ;
-(void)softwareUpdateController:(id)arg1 didFailToInstallUpdateWithError:(id)arg2 ;
-(RestorableBackupItem *)selectedRestorable;
-(char)scanningForUpdate;
-(id)init;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<BuddyControllerDelegate>)delegate;
-(void)significantTimeChange;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2 ;
-(id)titleText;
-(void)willResignActive;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned)arg3 ;
-(void)managerDidFinishRestore:(id)arg1 ;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
@end

