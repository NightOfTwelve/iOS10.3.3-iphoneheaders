/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/XPCClient.h>

@class NSSet, NSString, NSArray;

@interface DownloadManagerClient : XPCClient {

	NSSet* _downloadKinds;
	char _isDownloadsEntitled;
	NSString* _persistenceIdentifier;
	NSArray* _prefetchedDownloadExternalProperties;
	NSArray* _prefetchedDownloadProperties;
	char _shouldFilterExternalDownloads;

}

@property (copy) NSSet * downloadKinds; 
@property (copy) NSString * persistenceIdentifier; 
@property (copy) NSArray * prefetchedDownloadExternalProperties; 
@property (copy) NSArray * prefetchedDownloadProperties; 
@property (assign) char shouldFilterExternalDownloads; 
-(id)initWithInputConnection:(id)arg1 ;
-(char)hasEntitlements;
-(char)canAccessDownload:(id)arg1 ;
-(char)supportsDownloadKind:(id)arg1 ;
-(id)persistentDownloadManagerInDatabase:(id)arg1 ;
-(char)_supportsDownloadKind:(id)arg1 ;
-(char)_isBackgroundApp;
-(char)shouldFilterExternalDownloads;
-(void)sendDownloadsRemovedWithIdentifiers:(id)arg1 ;
-(void)sendDownloadsUpdatedWithIdentifiers:(id)arg1 ;
-(void)sendDownloadStatesChangedWithIdentifiers:(id)arg1 ;
-(void)sendDownloadStateChangedWithID:(long long)arg1 externalValues:(id)arg2 propertyValues:(id)arg3 ;
-(void)_sendCoalescableMessage:(long long)arg1 withDownloadIDs:(id)arg2 ;
-(id)_copyFilteredKindsForKinds:(id)arg1 ;
-(id)_copyPrivateDownloadKinds;
-(id)_copyDownloadKindsFromEntitlement;
-(id)_copyAllowedThirdPartyKinds;
-(void)addClientEntityToDatabase:(id)arg1 ;
-(char)canAccessAsset:(id)arg1 ;
-(id)downloadsQueryForMessage:(id)arg1 database:(id)arg2 ;
-(id)newDownloadWithClientXPCDownload:(id)arg1 error:(id*)arg2 ;
-(char)reloadPersistenceStateInDatabase:(id)arg1 ;
-(void)sendChangeset:(id)arg1 ;
-(void)sendDownloadKindsUsingNetwork:(id)arg1 ;
-(void)setShouldFilterExternalDownloads:(char)arg1 ;
-(NSArray *)prefetchedDownloadExternalProperties;
-(NSArray *)prefetchedDownloadProperties;
-(NSString *)persistenceIdentifier;
-(void)dealloc;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(NSSet *)downloadKinds;
-(void)setDownloadKinds:(NSSet *)arg1 ;
-(void)setPrefetchedDownloadExternalProperties:(NSArray *)arg1 ;
-(void)setPrefetchedDownloadProperties:(NSArray *)arg1 ;
-(void)setClientOptions:(id)arg1 ;
@end

