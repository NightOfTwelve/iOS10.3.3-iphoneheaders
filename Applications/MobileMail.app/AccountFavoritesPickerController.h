/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MailboxListViewControllerBase.h>
#import <MobileMail/MailboxUtilsClient.h>

@protocol AccountFavoritesPickerControllerDelegate;
@interface AccountFavoritesPickerController : MailboxListViewControllerBase <MailboxUtilsClient> {

	id<AccountFavoritesPickerControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<AccountFavoritesPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(int)tableViewStyle;
-(id)indexPathForMailbox:(id)arg1 ;
-(id)mailboxForIndexPath:(id)arg1 ;
-(id)_ntsMailboxesForAccount:(id)arg1 ;
-(void)setDelegate:(id<AccountFavoritesPickerControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<AccountFavoritesPickerControllerDelegate>)delegate;
-(char)shouldAutorotate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)doneButtonClicked:(id)arg1 ;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(char)shouldHideInbox;
-(char)shouldHideNotesForAccount:(id)arg1 ;
@end
