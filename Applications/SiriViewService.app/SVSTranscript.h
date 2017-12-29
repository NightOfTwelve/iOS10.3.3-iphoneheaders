/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <libobjc.A.dylib/AFQueueDelegate.h>
#import <SiriViewService/SVSTranscriptItemGroupDelegate.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol SVSTranscriptDataSource, SVSTranscriptDelegate;
@class NSMutableArray, NSMutableDictionary, AFQueue, NSString;

@interface SVSTranscript : NSObject <AFQueueDelegate, SVSTranscriptItemGroupDelegate, NSFastEnumeration> {

	id<SVSTranscriptDataSource> _dataSource;
	id<SVSTranscriptDelegate> _delegate;
	NSMutableArray* _allTranscriptItems;
	NSMutableArray* _exposedTranscriptItems;
	NSMutableArray* _waitingTranscriptItems;
	NSMutableDictionary* _exposedIdToWaitingIdMap;
	NSMutableDictionary* _waitingIdToExposedIdMap;
	AFQueue* _loadingTranscriptItemGroupQueue;
	int _discardedItemCount;

}

@property (getter=_allTranscriptItems,nonatomic,readonly) NSMutableArray * allTranscriptItems;                                 //@synthesize allTranscriptItems=_allTranscriptItems - In the implementation block
@property (getter=_exposedTranscriptItems,nonatomic,readonly) NSMutableArray * exposedTranscriptItems;                         //@synthesize exposedTranscriptItems=_exposedTranscriptItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitingTranscriptItems;                                                          //@synthesize waitingTranscriptItems=_waitingTranscriptItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * exposedIdToWaitingIdMap;                                                    //@synthesize exposedIdToWaitingIdMap=_exposedIdToWaitingIdMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * waitingIdToExposedIdMap;                                                    //@synthesize waitingIdToExposedIdMap=_waitingIdToExposedIdMap - In the implementation block
@property (getter=_loadingTranscriptItemGroupQueue,nonatomic,readonly) AFQueue * loadingTranscriptItemGroupQueue;              //@synthesize loadingTranscriptItemGroupQueue=_loadingTranscriptItemGroupQueue - In the implementation block
@property (nonatomic,readonly) int discardedItemCount;                                                                         //@synthesize discardedItemCount=_discardedItemCount - In the implementation block
@property (nonatomic,readonly) int transcriptItemCount; 
@property (assign,nonatomic,__weak) id<SVSTranscriptDataSource> dataSource;                                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SVSTranscriptDelegate> delegate;                                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearTranscriptItemViewControllerDelegates;
-(int)transcriptItemCount;
-(id)transcriptItemAtIndex:(int)arg1 ;
-(void)enumerateTranscriptItemsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insertItemsAtIndexes:(id)arg1 ;
-(void)reloadItemsAtIndexes:(id)arg1 ;
-(void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2 ;
-(void)presentationStateDidChangeForItemsAtIndexes:(id)arg1 ;
-(id)transcriptItemForConversationItemWithIdentifier:(id)arg1 ;
-(id)conversationItemIdentifierForViewController:(id)arg1 ;
-(id)transcriptItemForViewController:(id)arg1 ;
-(unsigned)indexOfTranscriptItem:(id)arg1 ;
-(int)conversationIndexForTranscriptLevelModelItemAtIndex:(int)arg1 ;
-(void)transcriptItemDidBecomeReadyToAppear:(id)arg1 ;
-(void)enumerateTranscriptItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)conversationIndexesForTranscriptLevelModelItemsAtIndexes:(id)arg1 ;
-(void)setErrorViewControllerForTranscriptItem:(id)arg1 ;
-(void)unloadViewControllerAtIndex:(int)arg1 ;
-(id)_exposedTranscriptItems;
-(void)_processLoadingTranscriptItemGroupQueue;
-(id)_allTranscriptItems;
-(id)_loadingTranscriptItemGroupQueue;
-(id)_aceObjectForItemAtIndex:(int)arg1 ;
-(id)_createTranscriptItemForAceObject:(id)arg1 itemIndex:(int)arg2 ;
-(char)_transcriptHasProvisionalItems;
-(id)_transcriptItemForDataSourceItemAtIndex:(int)arg1 ;
-(void)_clearViewControllerDelegateForTranscriptItem:(id)arg1 ;
-(id)_transcriptItemsForDataSourceItemsAtIndexes:(id)arg1 ;
-(unsigned)_conversationIndexForTranscriptItem:(id)arg1 ;
-(void)_notifyThatViewControllerWillBeRemoved:(id)arg1 ;
-(id)_createErrorSnippetViewControllerWithAceObject:(id)arg1 itemIndex:(int)arg2 ;
-(unsigned)_indexOfTranscriptItemWithAceObjectAceId:(id)arg1 ;
-(void)_configureViewController:(id)arg1 withAceObject:(id)arg2 itemIndex:(int)arg3 ;
-(unsigned)_waitingIndexOfTranscriptItemWithAceObjectAceId:(id)arg1 ;
-(unsigned)_conversationIndexOfTranscriptItemWithAceObjectAceId:(id)arg1 ;
-(int)_conversationIndexForWaitingTranscriptItem:(id)arg1 ;
-(void)transcriptItemGroupPresentationEligibilityDidChange:(id)arg1 ;
-(id)transcriptItemsAtIndexes:(id)arg1 ;
-(NSMutableArray *)waitingTranscriptItems;
-(void)setWaitingTranscriptItems:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)exposedIdToWaitingIdMap;
-(void)setExposedIdToWaitingIdMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)waitingIdToExposedIdMap;
-(void)setWaitingIdToExposedIdMap:(NSMutableDictionary *)arg1 ;
-(int)discardedItemCount;
-(id)init;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SV1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)setDataSource:(id<SVSTranscriptDataSource>)arg1 ;
-(void)setDelegate:(id<SVSTranscriptDelegate>)arg1 ;
-(void)reloadData;
-(id<SVSTranscriptDataSource>)dataSource;
-(id<SVSTranscriptDelegate>)delegate;
-(void)reloadViewControllerAtIndex:(int)arg1 ;
-(void)queue:(id)arg1 didEnqueueObjects:(id)arg2 ;
-(id)lastItem;
@end
