/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>
#import <Setup/BuddyAppleIDSpinnerPageDelegate.h>
#import <libobjc.A.dylib/RemoteUIWebViewControllerDelegate.h>
#import <Setup/BuddyControllerDelegate.h>

@protocol BuddyAppleIDControllerDelegate;
@class ACAccount, SSAccount, NSString, RUILoader, BuddyAboutPaneLoader, NSMutableArray, NSURL, RUIPage, AAUICloudSyncServicesController, BuddyAppleIDFindMyPhonePage, BuddyEmailSetupPage, BuddyAppleIDiCloudDrivePage, BuddyAppleIDSpinnerPage, NSMutableDictionary, ACAccountStore, BuddyAppleIDAuthManager, BuddyAppleIDSignInController, NSDictionary, UIViewController, UINavigationController, AASetupAssistantService;

@interface BuddyAppleIDController : NSObject <RUIObjectModelDelegate, BuddyAppleIDSpinnerPageDelegate, RemoteUIWebViewControllerDelegate, BuddyControllerDelegate> {

	ACAccount* _accountToUpgrade;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	SSAccount* _storeAccount;
	NSString* _storeUsername;
	NSString* _storePassword;
	RUILoader* _loader;
	BuddyAboutPaneLoader* _aboutLoader;
	NSMutableArray* _objectModels;
	NSURL* _createAppleIDURL;
	NSURL* _existingAccountTermsURL;
	NSURL* _aboutURL;
	NSURL* _genericTermsURL;
	char _upgradeIsSkip;
	char _didLoginDelegates;
	int _desiredPane;
	int _currentPane;
	char _over13;
	RUIPage* _loadingPage;
	AAUICloudSyncServicesController* _iCloudSyncServicesController;
	BuddyAppleIDFindMyPhonePage* _findMyPhonePage;
	BuddyEmailSetupPage* _emailSetupPage;
	BuddyAppleIDiCloudDrivePage* _iCloudDrivePage;
	BuddyAppleIDSpinnerPage* _upgradeWithTokenAuthSpinnerPage;
	NSMutableDictionary* _spinnerApperanceHandlers;
	char _restoreFromBackupMode;
	int _existingAccountType;
	int _operationType;
	char _omitITunesBundle;
	NSString* _existingAccountID;
	NSString* _accountDSID;
	char _completingEnablingCloudServices;
	ACAccountStore* _upgradeAccountStore;
	BuddyAppleIDAuthManager* _authManager;
	BuddyAppleIDAuthManager* _twoAccountsiCloudAuthManager;
	BuddyAppleIDAuthManager* _twoAccountsiTunesAuthManager;
	BuddyAppleIDSignInController* _twoAccountsiCloudSignInPage;
	NSDictionary* _twoAccountsiCloudAuthResults;
	NSString* _emailChoice;
	/*^block*/id _didAuthCompletion;
	UIViewController* _authAttemptLandingViewController;
	char _legacyCreate;
	NSString* _rawPassword;
	char _removeBackToSignInPageOnFirstRemoteUIPush;
	id<BuddyAppleIDControllerDelegate> _delegate;
	UINavigationController* _navigationController;
	AASetupAssistantService* _aaService;

}

@property (assign,nonatomic,__weak) id<BuddyAppleIDControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,copy) NSString * existingAccountID;                                        //@synthesize existingAccountID=_existingAccountID - In the implementation block
@property (nonatomic,readonly) int operationType;                                               //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,retain) AASetupAssistantService * aaService;                               //@synthesize aaService=_aaService - In the implementation block
@property (nonatomic,retain) UIViewController * authAttemptLandingViewController;               //@synthesize authAttemptLandingViewController=_authAttemptLandingViewController - In the implementation block
@property (assign,nonatomic) char restoreFromBackupMode;                                        //@synthesize restoreFromBackupMode=_restoreFromBackupMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buddyControllerDone:(id)arg1 ;
-(void)buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 ;
-(char)shouldAllowStartOver;
-(void)setExistingAccountType:(int)arg1 ;
-(void)showiForgot;
-(void)setAuthAttemptLandingViewController:(UIViewController *)arg1 ;
-(void)setRestoreFromBackupMode:(char)arg1 ;
-(void)didAuthenticateWithResults:(id)arg1 showPostSignIn:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)appleIDControllerCompletedShouldProceed:(char)arg1 error:(id)arg2 ;
-(void)cleanupRemoteUI;
-(void)showAboutAppleID;
-(char)isLoadingRemoteUI;
-(void)skipAppleID;
-(void)showiForgotWithLandingPage:(id)arg1 ;
-(void)showCreateAppleID;
-(void)_downloadURLConfigurationIfNeededCompletion:(/*^block*/id)arg1 ;
-(void)_vetHSAAuthToken:(id)arg1 fullMessage:(id)arg2 sourceAddress:(id)arg3 serviceID:(id)arg4 ;
-(void)_loadCreateAppleIDUI;
-(void)_authCompletedShouldProceed:(char)arg1 error:(id)arg2 ;
-(void)_showCreateAppleIDFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadPostSignInRemoteUI;
-(void)_showUpdateAppleIDFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appleIDControllerFinished;
-(void)_loadSkipDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAboutPageErrorForError:(id)arg1 ;
-(void)_reallyTryShowingPane;
-(void)createOrUpdateAccountWithDelegateSignIn:(char)arg1 ;
-(void)_showSpinnerPageWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_loadRepairCloudAccountRemoteUIWithContinuationData:(id)arg1 ;
-(void)_tryShowingPane;
-(void)_beginPostUpgradeAppleIDLoginWithUsername:(id)arg1 password:(id)arg2 signInController:(id)arg3 ;
-(void)_setAppearanceHandler:(/*^block*/id)arg1 forSpinnerPage:(id)arg2 ;
-(void)_upgradeAccountWithPassword:(id)arg1 rawPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)upgradeiCloudSignInPageDidSkip;
-(void)_loadUpgradeUIForResponseData:(id)arg1 proceedOnFailure:(char)arg2 ;
-(void)_showSignInFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showPasswordFailureWithCompletion:(/*^block*/id)arg1 ;
-(void)showSpinnerPage:(id)arg1 appearanceHandler:(/*^block*/id)arg2 ;
-(void)upgradeAccountWithTokenAuth;
-(void)_setupiTunesAndLoginDelegateAccountsCompletion:(/*^block*/id)arg1 ;
-(void)_createOrUpdateAppleAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_pushNextViewController:(id)arg1 ;
-(void)_vetIfNeeded;
-(void)runFindMyPhoneFlow;
-(NSString *)existingAccountID;
-(void)_clearStoreAccount;
-(void)_showPostSignInRemoteUI;
-(void)enableTouchIDForPurchasesIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_showTwoAccountsiTunesSignInPage;
-(void)_showTwoAccountsiCloudSignInPage;
-(void)showiCloudDrivePageIfNecessary;
-(void)_reallyEnableBackupAndCloudServices;
-(void)_reallyCompleteEnablingCloudServices;
-(void)_enableTouchIDForPurchasesIfNeeded;
-(void)_runFacetimeRegistration;
-(void)_vettingCompleted;
-(void)_vetEmail;
-(char)_needsEmailVetting;
-(char)_needsEmailSetup;
-(char)_canAutoSetupEmail;
-(void)_showEmailSetupPage;
-(void)_enableBackupAndCloudServices;
-(void)enableCloudServices;
-(void)_loginDelegateAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)_didNotifyAppleIDLoginPluginsWithCompletion:(/*^block*/id)arg1 ;
-(void)_createMeCard;
-(void)_nameDevice;
-(void)_postSignInRemoteUIFinishedWithSuccess:(char)arg1 error:(id)arg2 withSpinnerAction:(/*^block*/id)arg3 ;
-(void)_popBackToAuthAttemptLandingPage;
-(void)_showPostSignInPage;
-(id)_remoteUINavController;
-(void)_removeBackToSignInPageIfNeeded;
-(id)_termsVersionFromObjectModel:(id)arg1 ;
-(void)_userRespondedToCombinedTCsWithAgreement:(char)arg1 withSLAVersion:(id)arg2 ;
-(void)buddyAppleIDSpinnerPageDidAppear:(id)arg1 ;
-(id)upgradeAccountSignInViewController;
-(id)silentUpgradeViewControllerWithLoginContext:(id)arg1 ;
-(void)appleIDFindMyPhoneAboutPressed;
-(id)iCloudRestoreSignInViewController;
-(void)buddyEmailSetupPage:(id)arg1 didEnterPassword:(id)arg2 ;
-(void)setExistingAccountID:(NSString *)arg1 ;
-(void)setAaService:(AASetupAssistantService *)arg1 ;
-(UIViewController *)authAttemptLandingViewController;
-(char)restoreFromBackupMode;
-(id)init;
-(void)setDelegate:(id<BuddyAppleIDControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<BuddyAppleIDControllerDelegate>)delegate;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)remoteUIWebViewControllerDonePressed:(id)arg1 ;
-(AASetupAssistantService *)aaService;
-(void)_addHeadersToRequest:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(char)arg1 ;
-(id)signInViewController;
-(void)cancelAuthentication;
-(void)objectModelDidChange:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(char)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(int)operationType;
@end
