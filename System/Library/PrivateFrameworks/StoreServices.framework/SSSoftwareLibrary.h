/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection;

@interface SSSoftwareLibrary : NSObject {

	SSXPCConnection* _connection;

}
-(void)_sendDemotionMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_getItemsWithMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)demoteApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)hasDemotedApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)isInstalledApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)refreshReceiptsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)restoreAllDemotedApplicationsWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restoreDemotedApplicationWithBundleIdentifier:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)getRemovableSytemApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getLibraryItemsForITunesStoreItemIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)playableApplicationsWithBundleIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getLibraryItemForBundleIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)isRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restoreRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
