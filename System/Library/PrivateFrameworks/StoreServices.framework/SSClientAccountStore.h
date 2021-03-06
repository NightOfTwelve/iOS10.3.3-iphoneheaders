/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSAccountStore.h>

@class NSArray;

@interface SSClientAccountStore : SSAccountStore {

	NSArray* _accounts;
	char _accountsValid;

}

@property (copy) NSArray * accounts; 
-(void)signOutAllAccountsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)accountWithUniqueIdentifier:(id)arg1 scope:(int)arg2 ;
-(id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(char)arg2 ;
-(void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(id)_accountsFromDaemon;
-(void)_reloadAccountsIfNeeded;
-(id)_addAccount:(id)arg1 asActiveAccount:(char)arg2 activeLockerAccount:(char)arg3 ;
-(id)_accountWithUniqueIdentifier:(id)arg1 ;
-(void)_invalidateAccounts;
-(void)updateAccountsWithMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_signOutWithAccountIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_copyDaemonAccounts;
-(id)_copyReloadedAccounts;
-(id)init;
-(void)dealloc;
-(id)activeLockerAccount;
-(void)signOutAllAccounts;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(id)setActiveAccount:(id)arg1 ;
-(id)setActiveLockerAccount:(id)arg1 ;
-(id)activeAccount;
-(id)addAccount:(id)arg1 ;
-(void)signOutAccount:(id)arg1 ;
-(void)reloadAccounts;
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
@end

