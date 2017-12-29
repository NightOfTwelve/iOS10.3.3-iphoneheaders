/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MergeAndRemoveMobileMeAccounts/ASSBasicAccount.h>
#import <MergeAndRemoveMobileMeAccounts/AccountSettingsUIAccount.h>
#import <AccountMigrator/AccountCreationProtocol.h>

@class NSString;

@interface ASSDeviceLocalAccount : ASSBasicAccount <AccountSettingsUIAccount, AccountCreationProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void*)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2 ;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
+(id)_identifier;
+(id)accountWithBasicAccount:(id)arg1 ;
+(id)basicAccountProperties;
+(id)typeString;
-(void)_saveChangesToOnMyDeviceAccount;
-(void)setTetheredEnabled:(char)arg1 forDataclass:(id)arg2 ;
-(char)otherAccountEnabledForDataclass:(id)arg1 ;
-(void)hideLocalStoreForDataclass:(id)arg1 ;
-(void)deleteLocalDataSourceForDataclass:(id)arg1 ;
-(char)_setTetheredDataSourceEnabled:(char)arg1 forDataclass:(id)arg2 ;
-(char)_deleteDataSourceForDataclass:(id)arg1 ;
-(void)showLocalStoreIfAppropriateForDataclass:(id)arg1 ;
-(id)identifier;
-(id)uniqueId;
-(id)displayName;
-(void)setEnabled:(char)arg1 forDataclass:(id)arg2 ;
-(char)supportsPush;
-(id)syncStoreIdentifier;
@end
