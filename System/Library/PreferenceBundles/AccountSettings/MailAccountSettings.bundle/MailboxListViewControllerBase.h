/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MailAccountSettings/MailboxUtilsClient.h>

@class MFMailboxUid, MailAccount, NSArray;

@interface MailboxListViewControllerBase : UITableViewController <MailboxUtilsClient> {

	MFMailboxUid* _selectedMailbox;
	id _mailboxSelectionTarget;
	MailAccount* _account;
	NSArray* _sortedMailboxes;
	unsigned _loadingMailboxes : 1;
	char _preventNextScrollbarFlash;
	char _promoteFavorites;
	char _interactiveTransitionWasCancelled;

}

@property (nonatomic,retain) MailAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) MFMailboxUid * selectedMailbox;              //@synthesize selectedMailbox=_selectedMailbox - In the implementation block
+(int)tableViewStyle;
-(void)preventNextScrollbarFlash;
-(void)setSelectedMailbox:(MFMailboxUid *)arg1 ;
-(void)setViewingContext:(id)arg1 ;
-(void)_loadMailboxes:(char)arg1 ;
-(void)mailboxListingChanged:(id)arg1 ;
-(float)_defaultRowHeight;
-(void)viewWillReappear:(char)arg1 ;
-(void)viewWillFirstAppear:(char)arg1 ;
-(id)indexPathForSelection;
-(void)setSelectedMailbox:(id)arg1 animated:(char)arg2 ;
-(void)setSelectedMailbox:(id)arg1 forceChange:(char)arg2 animated:(char)arg3 ;
-(void)didSelectMailbox:(id)arg1 changed:(char)arg2 animated:(char)arg3 ;
-(id)mailboxForIndexPath:(id)arg1 ;
-(id)_ntsMailboxesForAccount:(id)arg1 ;
-(void)_loadExtraMailboxes;
-(void)_loadMailboxesForcibly:(id)arg1 ;
-(void)_loadMailboxesAfterMailboxListingChanged;
-(void)_popToMailboxListViewController;
-(id)indexPathForMailbox:(id)arg1 ;
-(void)_loadMailboxes;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(MFMailboxUid *)selectedMailbox;
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(char)shouldHideInbox;
-(char)shouldHideNotesForAccount:(id)arg1 ;
@end

