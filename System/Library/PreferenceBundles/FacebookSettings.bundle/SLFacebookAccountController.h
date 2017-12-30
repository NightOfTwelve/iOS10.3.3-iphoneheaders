/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, NSString, SLFacebookSession, PSSpecifier, UIBarButtonItem;

@interface SLFacebookAccountController : ACUIViewController {

	ACAccount* _account;
	NSString* _password;
	SLFacebookSession* _session;
	PSSpecifier* _fullNameSpecifier;
	UIBarButtonItem* _saveButton;
	char _userWantsToMergeContacts;

}
-(id)_fullNameSpecifier;
-(id)fullNameWithSpecifier:(id)arg1 ;
-(id)_loginSpecifiers;
-(void)_didEditPasswordField:(id)arg1 ;
-(void)_authenticateAccountIfNeeded;
-(id)usernameWithSpecifier:(id)arg1 ;
-(void)_showErrorMessage:(id)arg1 withTitle:(id)arg2 ;
-(char)_confirmContactsMerge;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)passwordWithSpecifier:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(id)specifiers;
@end
