/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSLock, NSMutableDictionary, NSNumber;

@interface SSAccount : NSObject <SSXPCCoding, NSCopying> {

	int _accountKind;
	NSString* _accountName;
	int _accountScope;
	int _accountSource;
	char _active;
	char _activeLockerAccount;
	NSString* _altDSID;
	int _availableServiceTypes;
	NSData* _bioToken;
	NSString* _creditsString;
	char _demo;
	char _didFallbackToPassword;
	int _enabledServiceTypes;
	NSString* _firstName;
	int _freeDownloadsPasswordSetting;
	NSString* _itunesPassSerialNumber;
	NSString* _lastName;
	NSLock* _lock;
	char _newCustomer;
	int _paidPurchasesPasswordSetting;
	NSString* _secureToken;
	NSMutableDictionary* _serviceEligibility;
	NSString* _storeFrontID;
	NSNumber* _uniqueIdentifier;
	char _managedAppleID;

}

@property (assign) int accountSource; 
@property (copy) NSString * secureToken; 
@property (getter=isDemoAccount) char demoAccount; 
@property (getter=isActive) char active; 
@property (getter=isActiveLockerAccount) char activeLockerAccount; 
@property (copy) NSString * ITunesPassSerialNumber; 
@property (getter=isNewCustomer) char newCustomer; 
@property (getter=isManagedAppleID) char managedAppleID; 
@property (assign) int accountKind; 
@property (copy) NSString * accountName; 
@property (assign) int accountScope; 
@property (copy) NSString * altDSID; 
@property (copy) NSString * creditsString; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (getter=isSocialEnabled) char socialEnabled; 
@property (copy) NSString * storeFrontIdentifier; 
@property (retain) NSNumber * uniqueIdentifier; 
@property (assign) int availableServiceTypes; 
@property (assign) int enabledServiceTypes; 
@property (assign) int freeDownloadsPasswordSetting; 
@property (assign) int paidPurchasesPasswordSetting; 
@property (getter=isAuthenticated,readonly) char authenticated; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLockdownDictionary:(id)arg1 ;
-(char)isNewCustomer;
-(void)setDemoAccount:(char)arg1 ;
-(char)isDemoAccount;
-(void)_sendBlockingXPCMessage:(id)arg1 ;
-(int)availableServiceTypes;
-(int)freeDownloadsPasswordSetting;
-(int)paidPurchasesPasswordSetting;
-(char)didFallbackToPassword;
-(char)isSocialEnabled;
-(int)accountSource;
-(void)setAccountScope:(int)arg1 ;
-(void)setAccountSource:(int)arg1 ;
-(void)setDidFallbackToPassword:(char)arg1 ;
-(void)setFreeDownloadsPasswordSetting:(int)arg1 ;
-(void)setNewCustomer:(char)arg1 ;
-(void)setPaidPurchasesPasswordSetting:(int)arg1 ;
-(void)setAvailableServiceTypes:(int)arg1 ;
-(void)setEnabledServiceTypes:(int)arg1 ;
-(id)eligibilityForService:(int)arg1 ;
-(void)setEligibility:(id)arg1 forServiceType:(int)arg2 ;
-(void)updateAccountPasswordSettingsWithRequestProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initDemoAccount;
-(void)acceptTermsAndConditions:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)getDownloadKindsEligibleForContentRestoreWithBlock:(/*^block*/id)arg1 ;
-(void)getEligibilityForService:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPurchasedItemsForItems:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getTermsAndConditionsWithBlock:(/*^block*/id)arg1 ;
-(void)addAvailableServiceTypes:(int)arg1 ;
-(void)getKeybagSyncDataWithType:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAvailableServiceTypes:(int)arg1 ;
-(void)resetTransientData;
-(id)copyLockdownRepresentation;
-(char)mergeValuesFromAccount:(id)arg1 ;
-(id)popBiometricToken;
-(void)setBiometricToken:(id)arg1 ;
-(void)updateAccountPasswordSettings:(/*^block*/id)arg1 ;
-(void)_sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(char)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(char)arg1 ;
-(NSNumber *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSNumber *)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)getITunesMatchStatusWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(char)isAuthenticated;
-(int)accountScope;
-(void)setActiveLockerAccount:(char)arg1 ;
-(NSString *)secureToken;
-(void)setSecureToken:(NSString *)arg1 ;
-(char)isActiveLockerAccount;
-(int)accountKind;
-(int)enabledServiceTypes;
-(void)setCreditsString:(NSString *)arg1 ;
-(void)setAccountKind:(int)arg1 ;
-(void)addEnabledServiceTypes:(int)arg1 ;
-(void)removeEnabledServiceTypes:(int)arg1 ;
-(void)setSocialEnabled:(char)arg1 ;
-(NSString *)accountName;
-(char)isManagedAppleID;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)ITunesPassSerialNumber;
-(void)setITunesPassSerialNumber:(NSString *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)creditsString;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)altDSID;
-(void)setManagedAppleID:(char)arg1 ;
@end
