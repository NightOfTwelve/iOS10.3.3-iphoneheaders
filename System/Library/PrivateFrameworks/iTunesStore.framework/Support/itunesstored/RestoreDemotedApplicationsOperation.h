/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/RestoreDownloadItemsOperationDelegate.h>

@class NSArray, NSDictionary, AccountCacheDBClient, NSString;

@interface RestoreDemotedApplicationsOperation : ISOperation <RestoreDownloadItemsOperationDelegate> {

	NSArray* _bundleIDs;
	NSDictionary* _options;
	AccountCacheDBClient* _accountsCacheDB;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_appleIDForApp:(id)arg1 ;
-(id)_accountIdForAppleID:(id)arg1 ;
-(void)_notifyCompletion;
-(void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithBundleIdentifiers:(id)arg1 options:(id)arg2 ;
-(void)run;
@end

