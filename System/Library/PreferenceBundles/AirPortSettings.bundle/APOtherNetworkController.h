/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/TrustCertificateViewControllerDelegate.h>

@class WiFiNetwork, WiFiManager, NSMutableArray, NSArray, NSString, APAlert, PSSpecifier, UIProgressIndicator, PSEditableTableCell, UIBarButtonItem;

@interface APOtherNetworkController : PSListController <TrustCertificateViewControllerDelegate> {

	WiFiNetwork* _network;
	WiFiManager* _manager;
	int _securityMode;
	int _displayedSecurityMode;
	int _displayedProfile;
	NSMutableArray* _allSpecifiers;
	NSArray* _allAuthTitles;
	NSArray* _allAuthValues;
	char _success;
	char _joining;
	NSString* _cancel;
	NSString* _done;
	NSString* _validation;
	NSString* _joined;
	NSString* _failed;
	char _joiningOtherNetwork;
	char _popping;
	APAlert* _alert;
	NSString* _oldUsername;
	NSString* _oldPassword;
	int _oldSecurityMode;
	int _oldProfile;
	id _oldIdentity;
	id _oldWAPIRoot;
	id _oldWAPIIdentity;
	PSSpecifier* _passwordSpec;
	PSSpecifier* _tlsIdenSpec;
	PSSpecifier* _wapiRootSpec;
	PSSpecifier* _wapiIdentitySpec;
	NSMutableArray* _wapiIdentityDictsArray;
	NSArray* _nameGroup;
	NSArray* _hiddenNoPasswordGroup;
	NSArray* _hiddenWithPasswordGroup;
	NSArray* _hiddenWithEnterpriseGroup;
	NSArray* _hiddenWithEnterpriseTLSGroup;
	NSArray* _userNamePasswordGroup;
	NSArray* _userNameIdentityGroup;
	NSArray* _wapiCertsGroup;
	NSArray* _wapiCertsOtherGroup;
	NSArray* _currentSecurityGroup;
	NSArray* _profileGroup;
	int _indexToSelect;
	NSArray* _certificateChain;
	char _showingCert;
	char _showProfileUI;
	UIProgressIndicator* _spinner;
	PSEditableTableCell* _ssid;
	PSEditableTableCell* _username;
	PSEditableTableCell* _password;
	UIBarButtonItem* _joinButton;
	UIBarButtonItem* _cancelButton;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_networksControllerForPresentingViewController:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(id)contentScrollView;
-(void)didWake;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)returnKeyPressed:(id)arg1 ;
-(void)joinFailed:(id)arg1 ;
-(void)joinSuccess:(id)arg1 ;
-(void)enterpriseStatusChanged:(id)arg1 ;
-(char)_showingCert;
-(void)joinButtonClicked:(id)arg1 ;
-(void)_showJoinButton:(char)arg1 ;
-(void)updateNavBar;
-(char)securityModeDisplayEquivalent:(int)arg1 forType:(int)arg2 ;
-(void)_updateReturnKey;
-(void)_dismissSheet;
-(void)_showProgressInNavBar:(char)arg1 ;
-(void)_setReturnKeyEnabled:(char)arg1 ;
-(void)resetAfterFailedJoin;
-(void)_hideProgressInNavBar;
-(void)_joinFailedWithError:(int)arg1 ;
-(void)_layoutProgressIndicator:(id)arg1 ;
-(void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2 ;
-(void)setAuthenticationType:(id)arg1 specifier:(id)arg2 ;
-(id)authenticationType:(id)arg1 ;
-(void)setUsername:(id)arg1 specifier:(id)arg2 ;
-(id)username:(id)arg1 ;
-(void)setPassword:(id)arg1 specifier:(id)arg2 ;
-(id)password:(id)arg1 ;
-(void)setName:(id)arg1 specifier:(id)arg2 ;
-(id)name:(id)arg1 ;
-(void)setEnterpriseProfile:(id)arg1 specifier:(id)arg2 ;
-(id)enterpriseProfile:(id)arg1 ;
-(void)setTLSIdentity:(id)arg1 specifier:(id)arg2 ;
-(id)TLSIdentity:(id)arg1 ;
-(void)setWAPIRoot:(id)arg1 specifier:(id)arg2 ;
-(id)WAPIRoot:(id)arg1 ;
-(void)setWAPIIdentity:(id)arg1 specifier:(id)arg2 ;
-(id)WAPIIdentity:(id)arg1 ;
-(void)alertSheetDismissed:(id)arg1 ;
-(id)specifiers;
@end
