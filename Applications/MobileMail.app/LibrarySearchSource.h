/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/GenericSource.h>
#import <Maps/SearchManagerDelegate.h>
#import <MobileMail/MiniMallSearchWrapper.h>

@protocol OS_dispatch_queue;
@class MFMailMessageLibrary, NSString, NSMutableSet, MessageToMailboxUidCache, NSObject, NSArray, SearchManager, NSNumber, SourceSearchContext, MFMessageCriterion, MFMailMessage;

@interface LibrarySearchSource : GenericSource <SearchManagerDelegate, MiniMallSearchWrapper> {

	MFMailMessageLibrary* _library;
	NSString* _uniqueID;
	NSMutableSet* _messages;
	MessageToMailboxUidCache* _mailboxCache;
	CFDictionaryRef _messageCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _primarySources;
	SearchManager* _searchManager;
	NSNumber* _searchIdentifier;
	SourceSearchContext* _searchContext;
	MFMessageCriterion* _baseCriterion;
	unsigned _isProtectedDataAvailable : 1;
	unsigned _shouldThread : 1;
	MFMailMessage* _oldestKnownMessage;

}

@property (nonatomic,retain) MFMailMessage * oldestKnownMessage;                            //@synthesize oldestKnownMessage=_oldestKnownMessage - In the implementation block
@property (nonatomic,retain,readonly) MFMailMessageLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain,readonly) MFMessageCriterion * effectiveCriterion; 
@property (nonatomic,retain,readonly) MFMessageCriterion * baseCriterion; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isProtectedDataAvailable) char protectedDataAvailable; 
@property (getter=isSearching,readonly) char searching; 
-(id)mailboxUids;
-(char)representsMailboxUid:(id)arg1 ;
-(char)supportsSearch;
-(char)supportsDeleteAll;
-(char)deleteMovesToTrash;
-(char)supportsMoveAll;
-(char)supportsMarkAll;
-(char)shouldCompactOnFetch;
-(id)messageForMessageID:(id)arg1 ;
-(id)uniqueIDForStorage;
-(char)representsMailboxID:(unsigned)arg1 ;
-(id)initWithLibrary:(id)arg1 primarySources:(id)arg2 ;
-(void)reloadPreferences;
-(void)_messagesAdded:(id)arg1 ;
-(void)setProtectedDataAvailable:(char)arg1 ;
-(void)_messageFlagsChanged:(id)arg1 ;
-(char)canLoadOlderMessages;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(char)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(char)representsMailboxUidType:(int)arg1 ;
-(id)noMessagesLabelText;
-(id)searchForMessagesUsingSearchContext:(id)arg1 ;
-(void)performSynchronousLocalSearchUsingContext:(id)arg1 ;
-(id)copyMessageInfos;
-(id)uniqueIDForStatus;
-(char)supportsFlagging;
-(char)deleteMovesToTrashForMessageInfos:(id)arg1 ;
-(char)supportsArchivingForMessageInfos:(id)arg1 ;
-(char)shouldArchiveByDefaultForMessageInfos:(id)arg1 ;
-(char)shouldThreadConversations;
-(char)shouldPlayNewMailSound;
-(id)mailboxSourcesForMessageInfos:(id)arg1 ;
-(void)_messagesWillBeCompacted:(id)arg1 ;
-(void)_conversationFlagsChanged:(id)arg1 ;
-(void)_messagesWereCompacted:(id)arg1 ;
-(id)_baseCriterionFromSources:(id)arg1 ;
-(id)_messageIdentifiersForPendingDeletedMessageLikeObjects:(id)arg1 ;
-(id)_copyMessageInfosFromMessages:(id)arg1 ;
-(id)_messageInfosByApplyingCriterion:(id)arg1 toMessages:(id)arg2 ;
-(id)_filterMessageInfos:(id)arg1 ;
-(void)_nts_determineOldestKnownMessage;
-(void)_cancelSearchWithIdentifier:(id)arg1 ;
-(void)setOldestKnownMessage:(MFMailMessage *)arg1 ;
-(void)_notifyMallWithAddedMessages:(id)arg1 modified:(id)arg2 removedMessages:(id)arg3 group:(id)arg4 ;
-(void)_addMessages:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_setMessages:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_notifyMallSearchFinished;
-(void)_purgeCachedMessages:(id)arg1 ;
-(void)_cacheMessages:(id)arg1 ;
-(id)_nts_unknownMessagesFromArray:(id)arg1 ;
-(id)_nts_knownMessagesFromArray:(id)arg1 ;
-(id)_effectiveCriterionWithBaseCriterion:(id)arg1 messages:(id)arg2 ;
-(id)_applyCriterion:(id)arg1 toMessages:(id)arg2 ;
-(void)_updateMessages:(id)arg1 handler:(/*^block*/id)arg2 ;
-(MFMessageCriterion *)effectiveCriterion;
-(void)_queue_filterInMessages:(id)arg1 usingCriterion:(id)arg2 ;
-(void)_queue_updateMessages:(id)arg1 usingCriterion:(id)arg2 ;
-(void)_removeMessages:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_copyPrimarySources;
-(id)_sourceForMessageInfo:(id)arg1 sources:(id)arg2 ;
-(void)searchManager:(id)arg1 foundMessages:(id)arg2 keepExistingMessages:(char)arg3 forSearchWithIdentifier:(id)arg4 shouldWait:(char)arg5 ;
-(void)searchManager:(id)arg1 finishedSearchWithIdentifier:(id)arg2 ;
-(MFMessageCriterion *)baseCriterion;
-(/*function pointer*/void*)comparator;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isProtectedDataAvailable;
-(void)close;
-(unsigned)messageCount;
-(void)open;
-(void)applyChanges;
-(MFMailMessageLibrary *)library;
-(char)supportsArchiving;
-(char)shouldArchiveByDefault;
-(char)canFetchSearchResults;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(MFMailMessage *)oldestKnownMessage;
-(char)isSearching;
-(void)flushCaches;
-(id)diagnosticDescription;
@end

