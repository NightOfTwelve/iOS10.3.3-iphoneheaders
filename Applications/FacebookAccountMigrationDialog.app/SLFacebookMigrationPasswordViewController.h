/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FacebookAccountMigrationDialog.app/FacebookAccountMigrationDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SLFacebookMigrationPasswordViewControllerDelegate;
@class UITableViewCell, UIActivityIndicatorView, NSTimer, NSString;

@interface SLFacebookMigrationPasswordViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableViewCell* _signInButton;
	char _validationInProgress;
	UIActivityIndicatorView* _progressIndicator;
	NSTimer* _idleJiggleTimer;
	void* _powerAssertion;
	id<SLFacebookMigrationPasswordViewControllerDelegate> _delegate;
	NSString* _username;
	NSString* _password;

}

@property (assign,nonatomic,__weak) id<SLFacebookMigrationPasswordViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * username;                                                                //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * password;                                                              //@synthesize password=_password - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)passwordWasVerified;
-(void)presentErrorMessage:(id)arg1 ;
-(void)_passwordFieldChanged:(id)arg1 ;
-(void)_signInTapped;
-(void)_unfreezeUI;
-(void)_showUserNotificationWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_freezeUI;
-(void)_setCellsChecked:(char)arg1 ;
-(void)_layoutProgressIndicator;
-(void)_jiggleIdleTimer;
-(void)setDelegate:(id<SLFacebookMigrationPasswordViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<SLFacebookMigrationPasswordViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)_preventSleepAndDimming:(char)arg1 ;
-(void)_cancelTapped:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)password;
@end
