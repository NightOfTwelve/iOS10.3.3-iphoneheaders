/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MFComposeHeaderViewDelegate.h>
#import <libobjc.A.dylib/MFComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/MFContactsSearchConsumer.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol CHAddFriendViewControllerDelegate;
@class NSArray, NSMutableArray, NSPredicate, UIColor, MFContactsSearchManager, CNContactPickerViewController, CNAutocompleteFetchContext, NSNumber, FFFriendListManager, CHFriendManager, CNMonogrammer, MFComposeRecipientTextView, UITableView, NSString;

@interface CHAddFriendViewController : UIViewController <MFComposeHeaderViewDelegate, MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer, CNContactPickerDelegate, UINavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource> {

	NSArray* _reachabilityManagers;
	NSMutableArray* _reachableSuggestedContacts;
	NSArray* _unselectedShownContacts;
	NSArray* _currentFriendDestinations;
	NSPredicate* _recipientArrayFilterPredicate;
	char _showSuggestions;
	char _finishedPopulatingSuggestions;
	UIColor* _separatorColor;
	MFContactsSearchManager* _searchManager;
	CNContactPickerViewController* _peoplePicker;
	CNAutocompleteFetchContext* _context;
	NSNumber* _currentSearchTaskID;
	NSMutableArray* _pendingSearchResults;
	NSArray* _searchResults;
	NSArray* _currentAccountAddresses;
	FFFriendListManager* _friendListManager;
	CHFriendManager* _friendManager;
	CNMonogrammer* _monogrammer;
	id<CHAddFriendViewControllerDelegate> _delegate;
	MFComposeRecipientTextView* _recipientView;
	UITableView* _tableView;
	NSArray* _shownContacts;

}

@property (nonatomic,retain) MFComposeRecipientTextView * recipientView;                         //@synthesize recipientView=_recipientView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * shownContacts;                                            //@synthesize shownContacts=_shownContacts - In the implementation block
@property (assign,nonatomic,__weak) id<CHAddFriendViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_destinationAddressesForCurrentAccount;
-(id)_createPeoplePicker;
-(void)_textFieldShouldBecomeFirstResponder;
-(void)_dismissKeyboard:(id)arg1 ;
-(char)_destinationMatchesCurrentAccountDestination:(id)arg1 ;
-(id)_recipientFromDestination:(id)arg1 ;
-(void)_sendInviteToRecipientsByService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissAndNotifyDelegate;
-(void)_queryAllServicesForDestinations:(id)arg1 reachableUpdateHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setShowSuggestions:(char)arg1 ;
-(void)_addSuggestedContact:(id)arg1 ;
-(void)setShownContacts:(NSArray *)arg1 ;
-(void)_textFieldShouldResignFirstResponder;
-(void)_resetSearchResults;
-(void)_populateSuggestedContactsWithReachability;
-(id)_preferredServiceIdentifierForDestination:(id)arg1 inReachableDestinationsByService:(id)arg2 ;
-(void)_checkReachableForContact:(id)arg1 withDestination:(id)arg2 ;
-(void)_refilterShownContacts;
-(char)_contact:(id)arg1 hasEmailDestination:(id)arg2 ;
-(char)_contact:(id)arg1 hasPhoneNumberDestination:(id)arg2 ;
-(unsigned)_guessedKindForString:(id)arg1 ;
-(void)_mergeRecipient:(id)arg1 ;
-(id)initWithFriendListManager:(id)arg1 friendManager:(id)arg2 ;
-(void)_addContact:(id)arg1 ;
-(NSArray *)shownContacts;
-(void)setDelegate:(id<CHAddFriendViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<CHAddFriendViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)setRecipientView:(MFComposeRecipientTextView *)arg1 ;
-(void)_updateActivityIndicator;
-(MFComposeRecipientTextView *)recipientView;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)_searchForRecipientWithText:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeHeaderView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned)arg2 ;
@end

