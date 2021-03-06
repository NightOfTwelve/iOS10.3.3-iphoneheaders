/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VPNPreferences/VPNPreferences-Structs.h>
#import <Preferences/PSListController.h>

@class UIBarButtonItem, PSSpecifier, NSString, NSDictionary, NSMutableArray, NSArray, UIAlertView;

@interface VPNSetupListController : PSListController {

	char _overviewMode;
	char _editMode;
	char _passwordEditOnly;
	char _dirty;
	char _sendAllTraffic;
	char _useRSASecurID;
	char _usesCertificates;
	char _passwordRequired;
	char _userCreated;
	char _onDemandService;
	char _onDemandEnabled;
	char _alwaysPrompt;
	char _proxyAuthenticated;
	char _pptpWarningAccepted;
	unsigned _currentVPNType;
	unsigned _originalVPNType;
	unsigned _encryptionType;
	unsigned _vpnGrade;
	unsigned _eapType;
	unsigned _authType;
	UIBarButtonItem* _backButton;
	PSSpecifier* _connectSpecifier;
	NSString* _serviceID;
	NSString* _displayName;
	NSString* _appName;
	NSDictionary* _includedBundleIDs;
	NSString* _server;
	NSString* _account;
	NSString* _password;
	NSString* _sharedSecret;
	NSString* _groupDisplayName;
	NSString* _localIdentifier;
	NSString* _remoteIdentifier;
	PSSpecifier* _displayNameSpecifier;
	PSSpecifier* _serverSpecifier;
	PSSpecifier* _serverAddressSpecifier;
	PSSpecifier* _ciscoImageSpecifier;
	PSSpecifier* _sendAllTrafficSpecifier;
	PSSpecifier* _rsaSpecifier;
	PSSpecifier* _sharedSecretSpecifier;
	PSSpecifier* _encryptionTypeSpecifier;
	PSSpecifier* _vpnGradeStaticSpecifier;
	PSSpecifier* _passwordSpecifier;
	PSSpecifier* _groupNameSpecifier;
	PSSpecifier* _useCertificateSwitchSpecifier;
	PSSpecifier* _certificateListSpecifier;
	PSSpecifier* _accountSpecifier;
	PSSpecifier* _localIdentifierSpecifier;
	PSSpecifier* _remoteIdentifierSpecifier;
	PSSpecifier* _eapTypeSpecifier;
	PSSpecifier* _authTypeSpecifier;
	PSSpecifier* _timeSpecifier;
	NSMutableArray* _timeSpecifierArray;
	NSArray* _typeTabSpecifiers;
	PSSpecifier* _editServerSpecifier;
	NSArray* _proxyGroupSpecifiers;
	NSArray* _pacSpecifiers;
	NSArray* _manualProxySpecifiers;
	NSArray* _proxyAuthSpecifiers;
	PSSpecifier* _proxyLabelSpecifier;
	unsigned _proxyType;
	NSString* _proxyServer;
	NSString* _proxyPort;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	NSString* _proxyPACFile;
	id _ciscoCertificate;
	NSArray* _certificateIDs;
	UIAlertView* _deleteConfirmView;
	UIAlertView* _pptpWarningView;
	PSSpecifier* _editButton;
	PSSpecifier* _enableButton;

}

@property (assign) unsigned currentVPNType;                                  //@synthesize currentVPNType=_currentVPNType - In the implementation block
@property (assign) unsigned originalVPNType;                                 //@synthesize originalVPNType=_originalVPNType - In the implementation block
@property (assign) unsigned encryptionType;                                  //@synthesize encryptionType=_encryptionType - In the implementation block
@property (assign) unsigned vpnGrade;                                        //@synthesize vpnGrade=_vpnGrade - In the implementation block
@property (assign) unsigned eapType;                                         //@synthesize eapType=_eapType - In the implementation block
@property (assign) unsigned authType;                                        //@synthesize authType=_authType - In the implementation block
@property (retain) UIBarButtonItem * backButton;                             //@synthesize backButton=_backButton - In the implementation block
@property (assign) char overviewMode;                                        //@synthesize overviewMode=_overviewMode - In the implementation block
@property (assign) char editMode;                                            //@synthesize editMode=_editMode - In the implementation block
@property (assign) char passwordEditOnly;                                    //@synthesize passwordEditOnly=_passwordEditOnly - In the implementation block
@property (assign) char dirty;                                               //@synthesize dirty=_dirty - In the implementation block
@property (assign) char sendAllTraffic;                                      //@synthesize sendAllTraffic=_sendAllTraffic - In the implementation block
@property (assign) char useRSASecurID;                                       //@synthesize useRSASecurID=_useRSASecurID - In the implementation block
@property (assign) char usesCertificates;                                    //@synthesize usesCertificates=_usesCertificates - In the implementation block
@property (assign) char passwordRequired;                                    //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (assign) char userCreated;                                         //@synthesize userCreated=_userCreated - In the implementation block
@property (assign) char onDemandService;                                     //@synthesize onDemandService=_onDemandService - In the implementation block
@property (assign) char onDemandEnabled;                                     //@synthesize onDemandEnabled=_onDemandEnabled - In the implementation block
@property (assign) char alwaysPrompt;                                        //@synthesize alwaysPrompt=_alwaysPrompt - In the implementation block
@property (retain) PSSpecifier * connectSpecifier;                           //@synthesize connectSpecifier=_connectSpecifier - In the implementation block
@property (retain) NSString * serviceID;                                     //@synthesize serviceID=_serviceID - In the implementation block
@property (retain) NSString * displayName;                                   //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * appName;                                       //@synthesize appName=_appName - In the implementation block
@property (retain) NSDictionary * includedBundleIDs;                         //@synthesize includedBundleIDs=_includedBundleIDs - In the implementation block
@property (retain) NSString * server;                                        //@synthesize server=_server - In the implementation block
@property (retain) NSString * account;                                       //@synthesize account=_account - In the implementation block
@property (retain) NSString * password;                                      //@synthesize password=_password - In the implementation block
@property (retain) NSString * sharedSecret;                                  //@synthesize sharedSecret=_sharedSecret - In the implementation block
@property (retain) NSString * groupDisplayName;                              //@synthesize groupDisplayName=_groupDisplayName - In the implementation block
@property (retain) NSString * localIdentifier;                               //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (retain) NSString * remoteIdentifier;                              //@synthesize remoteIdentifier=_remoteIdentifier - In the implementation block
@property (retain) PSSpecifier * displayNameSpecifier;                       //@synthesize displayNameSpecifier=_displayNameSpecifier - In the implementation block
@property (retain) PSSpecifier * serverSpecifier;                            //@synthesize serverSpecifier=_serverSpecifier - In the implementation block
@property (retain) PSSpecifier * serverAddressSpecifier;                     //@synthesize serverAddressSpecifier=_serverAddressSpecifier - In the implementation block
@property (retain) PSSpecifier * ciscoImageSpecifier;                        //@synthesize ciscoImageSpecifier=_ciscoImageSpecifier - In the implementation block
@property (retain) PSSpecifier * sendAllTrafficSpecifier;                    //@synthesize sendAllTrafficSpecifier=_sendAllTrafficSpecifier - In the implementation block
@property (retain) PSSpecifier * rsaSpecifier;                               //@synthesize rsaSpecifier=_rsaSpecifier - In the implementation block
@property (retain) PSSpecifier * sharedSecretSpecifier;                      //@synthesize sharedSecretSpecifier=_sharedSecretSpecifier - In the implementation block
@property (retain) PSSpecifier * encryptionTypeSpecifier;                    //@synthesize encryptionTypeSpecifier=_encryptionTypeSpecifier - In the implementation block
@property (retain) PSSpecifier * vpnGradeStaticSpecifier;                    //@synthesize vpnGradeStaticSpecifier=_vpnGradeStaticSpecifier - In the implementation block
@property (retain) PSSpecifier * passwordSpecifier;                          //@synthesize passwordSpecifier=_passwordSpecifier - In the implementation block
@property (retain) PSSpecifier * groupNameSpecifier;                         //@synthesize groupNameSpecifier=_groupNameSpecifier - In the implementation block
@property (retain) PSSpecifier * useCertificateSwitchSpecifier;              //@synthesize useCertificateSwitchSpecifier=_useCertificateSwitchSpecifier - In the implementation block
@property (retain) PSSpecifier * certificateListSpecifier;                   //@synthesize certificateListSpecifier=_certificateListSpecifier - In the implementation block
@property (retain) PSSpecifier * accountSpecifier;                           //@synthesize accountSpecifier=_accountSpecifier - In the implementation block
@property (retain) PSSpecifier * localIdentifierSpecifier;                   //@synthesize localIdentifierSpecifier=_localIdentifierSpecifier - In the implementation block
@property (retain) PSSpecifier * remoteIdentifierSpecifier;                  //@synthesize remoteIdentifierSpecifier=_remoteIdentifierSpecifier - In the implementation block
@property (retain) PSSpecifier * eapTypeSpecifier;                           //@synthesize eapTypeSpecifier=_eapTypeSpecifier - In the implementation block
@property (retain) PSSpecifier * authTypeSpecifier;                          //@synthesize authTypeSpecifier=_authTypeSpecifier - In the implementation block
@property (retain) PSSpecifier * timeSpecifier;                              //@synthesize timeSpecifier=_timeSpecifier - In the implementation block
@property (retain) NSMutableArray * timeSpecifierArray;                      //@synthesize timeSpecifierArray=_timeSpecifierArray - In the implementation block
@property (retain) NSArray * typeTabSpecifiers;                              //@synthesize typeTabSpecifiers=_typeTabSpecifiers - In the implementation block
@property (retain) PSSpecifier * editServerSpecifier;                        //@synthesize editServerSpecifier=_editServerSpecifier - In the implementation block
@property (retain) NSArray * proxyGroupSpecifiers;                           //@synthesize proxyGroupSpecifiers=_proxyGroupSpecifiers - In the implementation block
@property (retain) NSArray * pacSpecifiers;                                  //@synthesize pacSpecifiers=_pacSpecifiers - In the implementation block
@property (retain) NSArray * manualProxySpecifiers;                          //@synthesize manualProxySpecifiers=_manualProxySpecifiers - In the implementation block
@property (retain) NSArray * proxyAuthSpecifiers;                            //@synthesize proxyAuthSpecifiers=_proxyAuthSpecifiers - In the implementation block
@property (retain) PSSpecifier * proxyLabelSpecifier;                        //@synthesize proxyLabelSpecifier=_proxyLabelSpecifier - In the implementation block
@property (assign) unsigned proxyType;                                       //@synthesize proxyType=_proxyType - In the implementation block
@property (assign) char proxyAuthenticated;                                  //@synthesize proxyAuthenticated=_proxyAuthenticated - In the implementation block
@property (retain) NSString * proxyServer;                                   //@synthesize proxyServer=_proxyServer - In the implementation block
@property (retain) NSString * proxyPort;                                     //@synthesize proxyPort=_proxyPort - In the implementation block
@property (retain) NSString * proxyUsername;                                 //@synthesize proxyUsername=_proxyUsername - In the implementation block
@property (retain) NSString * proxyPassword;                                 //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (retain) NSString * proxyPACFile;                                  //@synthesize proxyPACFile=_proxyPACFile - In the implementation block
@property (retain) id ciscoCertificate;                                      //@synthesize ciscoCertificate=_ciscoCertificate - In the implementation block
@property (retain) NSArray * certificateIDs;                                 //@synthesize certificateIDs=_certificateIDs - In the implementation block
@property (retain) UIAlertView * deleteConfirmView;                          //@synthesize deleteConfirmView=_deleteConfirmView - In the implementation block
@property (retain) UIAlertView * pptpWarningView;                            //@synthesize pptpWarningView=_pptpWarningView - In the implementation block
@property (assign) char pptpWarningAccepted;                                 //@synthesize pptpWarningAccepted=_pptpWarningAccepted - In the implementation block
@property (retain) PSSpecifier * editButton;                                 //@synthesize editButton=_editButton - In the implementation block
@property (retain) PSSpecifier * enableButton;                               //@synthesize enableButton=_enableButton - In the implementation block
-(NSString *)proxyServer;
-(NSString *)proxyPort;
-(void)setProxyServer:(NSString *)arg1 ;
-(void)setProxyPort:(NSString *)arg1 ;
-(void)setProxyType:(unsigned)arg1 ;
-(unsigned)proxyType;
-(unsigned)encryptionType;
-(NSString *)proxyUsername;
-(NSString *)proxyPassword;
-(char)passwordRequired;
-(void)setEncryptionType:(unsigned)arg1 ;
-(void)setPasswordRequired:(char)arg1 ;
-(void)setProxyUsername:(NSString *)arg1 ;
-(void)setProxyPassword:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSString *)server;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(NSString *)localIdentifier;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(id)bundle;
-(NSString *)displayName;
-(id)connection;
-(void)setDirty:(char)arg1 ;
-(char)dirty;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)updateDoneButton;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)setUserCreated:(char)arg1 ;
-(char)userCreated;
-(NSString *)appName;
-(NSString *)account;
-(UIBarButtonItem *)backButton;
-(void)setAccount:(NSString *)arg1 ;
-(void)setOnDemandEnabled:(char)arg1 ;
-(char)onDemandEnabled;
-(void)setRemoteIdentifier:(NSString *)arg1 ;
-(NSString *)sharedSecret;
-(void)setSharedSecret:(NSString *)arg1 ;
-(NSString *)remoteIdentifier;
-(void)editButtonTapped:(id)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(PSSpecifier *)editButton;
-(char)proxyAuthenticated;
-(id)proxyUsesAuthentication:(id)arg1 ;
-(id)proxyType:(id)arg1 ;
-(void)setProxyServer:(id)arg1 specifier:(id)arg2 ;
-(id)proxyServer:(id)arg1 ;
-(void)setProxyUsesAuthentication:(id)arg1 specifier:(id)arg2 ;
-(void)setProxyUsername:(id)arg1 specifier:(id)arg2 ;
-(id)proxyUsername:(id)arg1 ;
-(void)setProxyPassword:(id)arg1 specifier:(id)arg2 ;
-(id)proxyPassword:(id)arg1 ;
-(void)setProxyType:(id)arg1 specifier:(id)arg2 ;
-(char)useRSASecurID;
-(void)setUseRSASecurID:(char)arg1 ;
-(void)vpnStatusChanged:(id)arg1 ;
-(void)vpnConfigurationChanged:(id)arg1 ;
-(void)saveButtonClicked:(id)arg1 ;
-(char)overviewMode;
-(NSMutableArray *)timeSpecifierArray;
-(PSSpecifier *)timeSpecifier;
-(void)timerUpdated:(id)arg1 ;
-(void)setProxyAuthenticated:(char)arg1 ;
-(NSArray *)proxyAuthSpecifiers;
-(void)scrollToSpecifier:(id)arg1 ;
-(NSArray *)manualProxySpecifiers;
-(NSArray *)pacSpecifiers;
-(NSString *)proxyPACFile;
-(void)setProxyPACFile:(NSString *)arg1 ;
-(PSSpecifier *)passwordSpecifier;
-(char)sendAllTraffic;
-(void)setSendAllTraffic:(char)arg1 ;
-(void)saveButtonTapped:(id)arg1 ;
-(void)setOnDemandService:(char)arg1 ;
-(UIAlertView *)deleteConfirmView;
-(unsigned)currentVPNType;
-(id)ciscoCertificate;
-(char)usesCertificates;
-(char)onDemandService;
-(unsigned)vpnGrade;
-(id)onDemand:(id)arg1 ;
-(char)haveEnoughValues;
-(id)useRSASecurIDForSpecifier:(id)arg1 ;
-(id)sendAllTraffic:(id)arg1 ;
-(unsigned)eapType;
-(unsigned)authType;
-(NSString *)groupDisplayName;
-(unsigned)originalVPNType;
-(void)setOriginalVPNType:(unsigned)arg1 ;
-(char)saveConfigurationSettings;
-(char)pptpWarningAccepted;
-(void)warnForPPTP;
-(void)setPptpWarningAccepted:(char)arg1 ;
-(void)leaveEditMode;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(void)setOverviewMode:(char)arg1 ;
-(void)enterEditMode;
-(char)deleteConfiguration:(id)arg1 ;
-(void)setDeleteConfirmView:(UIAlertView *)arg1 ;
-(void)setPptpWarningView:(UIAlertView *)arg1 ;
-(UIAlertView *)pptpWarningView;
-(void)deleteVPNConfiguration:(id)arg1 ;
-(PSSpecifier *)certificateListSpecifier;
-(PSSpecifier *)connectSpecifier;
-(void)setEapType:(unsigned)arg1 ;
-(void)setAuthType:(unsigned)arg1 ;
-(void)setVpnGrade:(unsigned)arg1 ;
-(void)setCurrentVPNType:(unsigned)arg1 ;
-(NSArray *)certificateIDs;
-(void)setUsesCertificates:(char)arg1 ;
-(void)setCiscoCertificate:(id)arg1 ;
-(void)setUsesCertificates:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setGroupDisplayName:(NSString *)arg1 ;
-(void)setOnDemandService:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setDisplayName:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setUsername:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setServer:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setSharedSecret:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setCiscoCertificate:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setUseRSASecurID:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setSendAllTraffic:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPPTPEncryptionLevel:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setEAPType:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAuthType:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setGroupDisplayName:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPassword:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPasswordRequired:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setLocalIdentifier:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setRemoteIdentifier:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setProxyServerPort:(id)arg1 specifier:(id)arg2 ;
-(void)setPacFile:(id)arg1 specifier:(id)arg2 ;
-(void)setAlwaysPrompt:(char)arg1 ;
-(void)setIncludedBundleIDs:(NSDictionary *)arg1 ;
-(void)setStateForServiceID:(id)arg1 ;
-(PSSpecifier *)serverAddressSpecifier;
-(void)setCertificateIDs:(NSArray *)arg1 ;
-(void)setTimeSpecifierArray:(NSMutableArray *)arg1 ;
-(id)interfaceTypeForConnection:(id)arg1 ;
-(id)remoteIPForSpecifier:(id)arg1 ;
-(id)localIPForSpecifier:(id)arg1 ;
-(id)timeConnectedForSpecifier:(id)arg1 ;
-(id)serverForConnection:(id)arg1 ;
-(void)setServerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)serverSpecifier;
-(id)usernameForConnection:(id)arg1 ;
-(void)setAccountSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)accountSpecifier;
-(void)setServerAddressSpecifier:(PSSpecifier *)arg1 ;
-(void)setTimeSpecifier:(PSSpecifier *)arg1 ;
-(void)setConnectionState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getConnectionStateForSpecifier:(id)arg1 ;
-(void)setConnectSpecifier:(PSSpecifier *)arg1 ;
-(void)setEnableButton:(PSSpecifier *)arg1 ;
-(PSSpecifier *)enableButton;
-(void)enableButtonTapped:(id)arg1 ;
-(char)alwaysPrompt;
-(void)setPasswordEditOnly:(char)arg1 ;
-(void)deleteConfirm:(id)arg1 ;
-(void)renewCertificate:(id)arg1 ;
-(NSDictionary *)includedBundleIDs;
-(id)getDescriptionForApp:(id)arg1 ;
-(char)passwordEditOnly;
-(void)setPasswordSpecifier:(PSSpecifier *)arg1 ;
-(void)setVpnGradeStaticSpecifier:(PSSpecifier *)arg1 ;
-(void)setGroupNameSpecifier:(PSSpecifier *)arg1 ;
-(void)setLocalIdentifierSpecifier:(PSSpecifier *)arg1 ;
-(void)setRemoteIdentifierSpecifier:(PSSpecifier *)arg1 ;
-(void)setEapTypeSpecifier:(PSSpecifier *)arg1 ;
-(void)setUseCertificateSwitchSpecifier:(PSSpecifier *)arg1 ;
-(void)setAuthTypeSpecifier:(PSSpecifier *)arg1 ;
-(void)setCertificateListSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)useCertificateSwitchSpecifier;
-(void)setSharedSecretSpecifier:(PSSpecifier *)arg1 ;
-(void)setEncryptionTypeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)encryptionTypeSpecifier;
-(void)setRsaSpecifier:(PSSpecifier *)arg1 ;
-(void)setTypeTabSpecifiers:(NSArray *)arg1 ;
-(void)setEditServerSpecifier:(PSSpecifier *)arg1 ;
-(void)setCiscoImageSpecifier:(PSSpecifier *)arg1 ;
-(void)setDisplayNameSpecifier:(PSSpecifier *)arg1 ;
-(void)setSendAllTrafficSpecifier:(PSSpecifier *)arg1 ;
-(void)setProxyLabelSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)proxyLabelSpecifier;
-(void)setProxyGroupSpecifiers:(NSArray *)arg1 ;
-(void)setPacSpecifiers:(NSArray *)arg1 ;
-(void)setManualProxySpecifiers:(NSArray *)arg1 ;
-(void)setProxyAuthSpecifiers:(NSArray *)arg1 ;
-(PSSpecifier *)ciscoImageSpecifier;
-(NSArray *)typeTabSpecifiers;
-(PSSpecifier *)vpnGradeStaticSpecifier;
-(PSSpecifier *)displayNameSpecifier;
-(PSSpecifier *)editServerSpecifier;
-(PSSpecifier *)remoteIdentifierSpecifier;
-(PSSpecifier *)localIdentifierSpecifier;
-(PSSpecifier *)eapTypeSpecifier;
-(PSSpecifier *)authTypeSpecifier;
-(PSSpecifier *)sharedSecretSpecifier;
-(PSSpecifier *)groupNameSpecifier;
-(PSSpecifier *)rsaSpecifier;
-(PSSpecifier *)sendAllTrafficSpecifier;
-(NSArray *)proxyGroupSpecifiers;
-(id)proxyServerPort:(id)arg1 ;
-(id)pacFile:(id)arg1 ;
-(void)setOnDemand:(id)arg1 forSpecifier:(id)arg2 ;
-(id)pptpEncryptionLevelForSpecifier:(id)arg1 ;
-(id)eapTypeForSpecifier:(id)arg1 ;
-(id)authTypeForSpecifier:(id)arg1 ;
-(void)setVPNGrade:(id)arg1 forSpecifier:(id)arg2 ;
-(id)vpnGradeForSpecifier:(id)arg1 ;
-(id)vpnGradeNameForSpecifier:(id)arg1 ;
-(void)setVPNType:(CFStringRef)arg1 forSpecifier:(id)arg2 ;
-(CFStringRef)vpnTypeForSpecifier:(id)arg1 ;
-(id)usernameForSpecifier:(id)arg1 ;
-(id)displayNameForSpecifier:(id)arg1 ;
-(id)serverForSpecifier:(id)arg1 ;
-(id)passwordForSpecifier:(id)arg1 ;
-(id)sharedSecretForSpecifier:(id)arg1 ;
-(id)ciscoCertificateForSpecifier:(id)arg1 ;
-(id)groupDisplayNameForSpecifier:(id)arg1 ;
-(id)localIdentifierForSpecifier:(id)arg1 ;
-(id)remoteIdentifierForSpecifier:(id)arg1 ;
-(id)usesCertificatesForSpecifier:(id)arg1 ;
-(id)statusForConnection:(id)arg1 ;
-(id)typeForConnection:(id)arg1 ;
-(void)setServer:(NSString *)arg1 ;
-(NSString *)serviceID;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(char)editMode;
-(void)setEditMode:(char)arg1 ;
-(void)setServiceID:(NSString *)arg1 ;
-(void)setEditButton:(PSSpecifier *)arg1 ;
-(id)specifiers;
@end

