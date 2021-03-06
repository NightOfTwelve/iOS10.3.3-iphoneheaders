/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <medialibraryd/MLDMediaLibraryWriterDelegate.h>
#import <medialibraryd/ML3MusicLibraryDelegate.h>
#import <libobjc.A.dylib/MLMediaLibraryServiceProtocol.h>
#import <medialibraryd/MLDDiagnosticCollection.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCListener, NSMutableDictionary, MLDMediaLibraryWriter, MLDDatabaseImportManager, MLDCacheDeleteController, NSOperationQueue, NSTimer, NSString, NSMutableSet, NSLock;

@interface MLDMediaLibraryService : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate, MLDMediaLibraryWriterDelegate, ML3MusicLibraryDelegate, MLMediaLibraryServiceProtocol, MLDDiagnosticCollection> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _spotlightIndexQueue;
	NSObject*<OS_dispatch_queue> _writerBeginTransactionQueue;
	NSObject*<OS_dispatch_queue> _writerUpdateQueue;
	NSXPCListener* _xpcListener;
	NSMutableDictionary* _xpcClients;
	MLDMediaLibraryWriter* _writer;
	MLDDatabaseImportManager* _importManager;
	MLDCacheDeleteController* _cacheDeleteController;
	NSOperationQueue* _validationOperationQueue;
	NSOperationQueue* _maintenanceTasksOperationQueue;
	int _languageChangeNotifyToken;
	int _homeSharingCachesClearedNotifyToken;
	NSObject*<OS_dispatch_source> _signalDispatchSource;
	NSObject*<OS_dispatch_source> _spotlightIndexCoalescingTimer;
	NSTimer* _idleTimer;
	NSMutableDictionary* _mediaLibraries;
	NSString* _deviceSharedLibraryPath;
	NSMutableSet* _validatedDatabasePaths;
	NSLock* _validationEntryLock;
	char _databaseLocked;
	NSString* _currentLockReason;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)collectDiagnostic:(id)arg1 ;
-(void)_registerForLanguageChangeNotifications;
-(void)_registerForHomeSharingCacheNotifications;
-(void)_registerForLibraryContentChangeNotifications;
-(void)_tearDownLanguageChangeNotifications;
-(void)_tearDownHomeSharingCacheNotifications;
-(void)_tearDownLibraryContentsDidChangeNotification;
-(void)_validateDatabaseAtPath:(id)arg1 byTruncatingFirst:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_performDiagnosticWithReason:(id)arg1 ;
-(id)_currentXPCClient;
-(id)_mediaLibraryForPath:(id)arg1 ;
-(id)_allMediaLibraries;
-(id)_deviceSharedLibraryPath;
-(void)_performMaintenanceOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleXPCDisconnect:(id)arg1 ;
-(void)_unregisterServiceOriginatedTransactionWithConnection:(id)arg1 ;
-(void)_setupNotifyEventHandlers;
-(void)_setupActivityHandlers;
-(void)_setupCacheDeleteController;
-(void)_setupXPCListener;
-(void)_performScheduledBackupOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2 ;
-(id)_clientForConnection:(id)arg1 ;
-(void)_handleDebugSignal;
-(void)_writeDiagnosticToDisk:(id)arg1 ;
-(void)_exitForLocalizationChange;
-(void)_handleHomeSharingCachesClearedNotification;
-(void)_handleLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_idleTimerFired:(id)arg1 ;
-(void)mediaLibraryWriter:(id)arg1 terminatedTransaction:(id)arg2 withError:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)start;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_setupSignalHandler;
-(void)_tearDownSignalHandler;
-(void)_stopIdleTimer;
-(void)_startIdleTimer;
-(void)performDatabaseOperation:(unsigned)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)library:(id)arg1 didBeginDatabaseTransactionWithConnection:(id)arg2 ;
-(void)library:(id)arg1 didCommitDatabaseTransactionWithConnection:(id)arg2 ;
-(void)library:(id)arg1 didRollbackDatabaseTransactionWithConnection:(id)arg2 ;
-(void)getDeviceSharedLibraryPath:(/*^block*/id)arg1 ;
-(void)setDeviceSharedLibraryPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned)arg2 options:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)endTransaction:(id)arg1 shouldCommit:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setOptions:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performImport:(id)arg1 fromSource:(unsigned)arg2 withUUID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelImportOperation:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)lockDatabaseForReason:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unlockDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)getLanguageResourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)performBackupOfDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performRestoreOfLatestBackupForDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_resetIdleTimer;
@end

