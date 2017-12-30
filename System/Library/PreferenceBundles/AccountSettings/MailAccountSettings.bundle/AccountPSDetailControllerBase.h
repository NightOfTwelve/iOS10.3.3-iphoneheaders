/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class NSMutableDictionary, NSDictionary, MFAccount, MFAccountValidator, MFConnectionSettings, NSString, UIResponder;

@interface AccountPSDetailControllerBase : ACUIViewController {

	NSMutableDictionary* _accountValues;
	NSMutableDictionary* _originalAccountValues;
	NSDictionary* _accountValuesAfterFailedValidation;
	MFAccount* _account;
	MFAccountValidator* _accountValidator;
	MFConnectionSettings* _originalConnectionSettings;
	unsigned _validating : 1;
	unsigned _attemptedValidation : 1;
	NSString* _initialTitle;
	UIResponder* _lastFirstResponder;

}

@property (nonatomic,retain) MFAccount * account;                                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountValues;                          //@synthesize accountValues=_accountValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * originalAccountValues;                  //@synthesize originalAccountValues=_originalAccountValues - In the implementation block
@property (nonatomic,copy) NSDictionary * accountValuesAfterFailedValidation;              //@synthesize accountValuesAfterFailedValidation=_accountValuesAfterFailedValidation - In the implementation block
@property (nonatomic,retain) MFAccountValidator * accountValidator;                        //@synthesize accountValidator=_accountValidator - In the implementation block
+(id)normalizeAccountProperties:(id)arg1 withAccountClass:(Class)arg2 ;
-(int)validateAccountUsingFallbacks;
-(void)setAccountValues:(NSMutableDictionary *)arg1 ;
-(void)setOriginalAccountValues:(NSMutableDictionary *)arg1 ;
-(void)doneButtonClickedForNewAccount;
-(int)validateAccount:(id)arg1 withFallbacks:(char)arg2 ;
-(MFAccountValidator *)accountValidator;
-(void)setAccountValidator:(MFAccountValidator *)arg1 ;
-(id)setOfKeysForAlteredValuesInDictionary:(id)arg1 originalDictionary:(id)arg2 ;
-(NSDictionary *)accountValuesAfterFailedValidation;
-(void)validateForNewAccount;
-(void)displaySaveAccountAnywaysAlertSheet;
-(void)setViewsEnabled:(char)arg1 ;
-(void)validateForExistingAccount;
-(id)fixAccountInputValues:(id)arg1 ;
-(void)didFinishSaveAccountAnywaysSheetWithResult:(char)arg1 ;
-(void)handleSSLAlertForAccount:(id)arg1 accountValidator:(id)arg2 attemptWithoutSSL:(char)arg3 ;
-(void)handleInvalidAccount:(id)arg1 ;
-(void)setAccountValuesAfterFailedValidation:(NSDictionary *)arg1 ;
-(void)handleValidAccount:(id)arg1 ;
-(void)displaySSLAlertForAccount:(id)arg1 accountValidator:(id)arg2 ;
-(void)_promptUserForWebLoginForAccount:(id)arg1 accountValidator:(id)arg2 error:(id)arg3 ;
-(void)_presentAlertForAccount:(id)arg1 accountValidator:(id)arg2 error:(id)arg3 ;
-(void)_redirectToRecoveryURL:(id)arg1 ;
-(void)sendPreferencesChangedNotificationForChangedValues;
-(id)existingAccountForAccountValues:(id)arg1 ;
-(NSMutableDictionary *)accountValues;
-(void)doneButtonClickedForExistingAccount;
-(void)cancelAccountValidation;
-(NSMutableDictionary *)originalAccountValues;
-(void)sendPreferencesChangedNotificationForKey:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(void)viewDidLoad;
-(Class)accountClass;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(char)arg3 ;
-(void)saveAndDismiss;
-(MFAccount *)account;
-(void)setAccount:(MFAccount *)arg1 ;
-(int)validateAccount;
-(char)haveEnoughValues;
-(void)doneButtonTapped:(id)arg1 ;
@end
