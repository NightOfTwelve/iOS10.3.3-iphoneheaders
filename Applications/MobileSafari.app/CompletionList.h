/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/CompletionProviderDelegate.h>
#import <MobileSafari/FindOnPageCompletionProviderDataSource.h>
#import <MobileSafari/SearchSuggestionProviderDelegate.h>

@protocol CompletionItem, CompletionListDelegate;
@class WBSCompletionQuery, NSArray, SearchQueryRestorationCompletionItem, NSMutableDictionary, NSDate, NSTimer, CompletionListGroup, NSString, BrowserController, UniversalSearchSession, URLCompletionProvider, SearchSuggestionProvider, ReadingListCompletionProvider, FindOnPageCompletionProvider, QuickWebsiteSearchCompletionProvider, CompletionProvider, UniversalSearchCompletionProvider;

@interface CompletionList : NSObject <CompletionProviderDelegate, FindOnPageCompletionProviderDataSource, SearchSuggestionProviderDelegate> {

	WBSCompletionQuery* _query;
	unsigned _inputTypeOfStringToComplete;
	NSArray* _groups;
	SearchQueryRestorationCompletionItem* _queryRestorationCompletionItem;
	NSMutableDictionary* _rankingFeedbackForHiddenOrDuplicateResults;
	NSDate* _nextAllowedUpdateTime;
	NSDate* _showPartialCompletionsTime;
	NSTimer* _updateTimer;
	CompletionListGroup* _findOnPageGroup;
	NSString* _stringMatchedByTopHit;
	NSString* _matchingStringInTopHit;
	id<CompletionItem> _topHit;
	char _tryParsecRewritesIfNoTopHit;
	WBSCompletionQuery* _rewrittenQuery;
	char _shouldIncludeSearchSuggestions;
	char _networkIsReachable;
	BrowserController* _browserController;
	UniversalSearchSession* _parsecSearchSession;
	id<CompletionListDelegate> _delegate;
	unsigned _maximumCompletionsPerGroup;
	URLCompletionProvider* _URLCompletionProvider;
	SearchSuggestionProvider* _suggestionProvider;
	ReadingListCompletionProvider* _readingListProvider;
	FindOnPageCompletionProvider* _findOnPageProvider;
	QuickWebsiteSearchCompletionProvider* _quickWebsiteSearchProvider;
	CompletionProvider* _firstRemoteCompletionProviderToRespondToQuery;
	UniversalSearchCompletionProvider* _universalSearchProvider;
	NSDate* _otherRenderTimeoutStartTime;
	NSDate* _searchRenderTimeoutStartTime;
	NSDate* _minRenderTimeoutStartTime;

}

@property (nonatomic,retain) URLCompletionProvider * URLCompletionProvider;                                   //@synthesize URLCompletionProvider=_URLCompletionProvider - In the implementation block
@property (nonatomic,retain) SearchSuggestionProvider * suggestionProvider;                                   //@synthesize suggestionProvider=_suggestionProvider - In the implementation block
@property (nonatomic,retain) ReadingListCompletionProvider * readingListProvider;                             //@synthesize readingListProvider=_readingListProvider - In the implementation block
@property (nonatomic,retain) FindOnPageCompletionProvider * findOnPageProvider;                               //@synthesize findOnPageProvider=_findOnPageProvider - In the implementation block
@property (nonatomic,retain) QuickWebsiteSearchCompletionProvider * quickWebsiteSearchProvider;               //@synthesize quickWebsiteSearchProvider=_quickWebsiteSearchProvider - In the implementation block
@property (nonatomic,retain) CompletionProvider * firstRemoteCompletionProviderToRespondToQuery;              //@synthesize firstRemoteCompletionProviderToRespondToQuery=_firstRemoteCompletionProviderToRespondToQuery - In the implementation block
@property (nonatomic,retain) UniversalSearchCompletionProvider * universalSearchProvider;                     //@synthesize universalSearchProvider=_universalSearchProvider - In the implementation block
@property (nonatomic,retain) NSDate * otherRenderTimeoutStartTime;                                            //@synthesize otherRenderTimeoutStartTime=_otherRenderTimeoutStartTime - In the implementation block
@property (nonatomic,retain) NSDate * searchRenderTimeoutStartTime;                                           //@synthesize searchRenderTimeoutStartTime=_searchRenderTimeoutStartTime - In the implementation block
@property (nonatomic,retain) NSDate * minRenderTimeoutStartTime;                                              //@synthesize minRenderTimeoutStartTime=_minRenderTimeoutStartTime - In the implementation block
@property (nonatomic,__weak,readonly) BrowserController * browserController;                                  //@synthesize browserController=_browserController - In the implementation block
@property (nonatomic,retain) UniversalSearchSession * parsecSearchSession;                                    //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (assign,nonatomic,__weak) id<CompletionListDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldIncludeSearchSuggestions;                                             //@synthesize shouldIncludeSearchSuggestions=_shouldIncludeSearchSuggestions - In the implementation block
@property (nonatomic,retain) WBSCompletionQuery * query;                                                      //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) char hasCompletions; 
@property (assign,nonatomic) unsigned maximumCompletionsPerGroup;                                             //@synthesize maximumCompletionsPerGroup=_maximumCompletionsPerGroup - In the implementation block
@property (assign,nonatomic) char networkIsReachable;                                                         //@synthesize networkIsReachable=_networkIsReachable - In the implementation block
@property (nonatomic,readonly) unsigned findOnPageGroupIndex; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)completionBookmarkProvider;
-(void)_invalidateUpdateTimer;
-(BrowserController *)browserController;
-(void)restoreCachedCompletions;
-(void)stopCompleting;
-(void)searchSuggestionProviderDidStartConnection:(id)arg1 ;
-(void)searchSuggestionProviderDidStopConnection:(id)arg1 ;
-(void)cacheCurrentCompletionsAfterAcceptanceOfCompletionItem:(id)arg1 ;
-(void)completionProvider:(id)arg1 didFinishCompletingString:(id)arg2 ;
-(void)completionProviderDidFail:(id)arg1 ;
-(id)_groupWithTitle:(id)arg1 completions:(id)arg2 maximumCompletions:(unsigned)arg3 ;
-(id)_groupWithTitle:(id)arg1 completions:(id)arg2 ;
-(id)_groupsOnUnreachableNetworkForString:(id)arg1 ;
-(char)_shouldFetchSearchSuggestions;
-(id)_recentSearchesForString:(id)arg1 ;
-(void)_removeSearchURLsFromCompletions:(id)arg1 ;
-(void)_searchForURLTopHits:(id)arg1 intoTopHits:(id)arg2 andAddresses:(id)arg3 ;
-(void)_addTopHits:(id)arg1 intoGroups:(id)arg2 ;
-(char)_searchRenderTimeoutHasElapsed;
-(void)_scheduleUpdateOnOrBeforeDate:(id)arg1 withCurrentDate:(id)arg2 ;
-(void)_addResult:(id)arg1 intoGroup:(id)arg2 unlessHiddenBy:(id)arg3 topHit:(id)arg4 ;
-(void)_addResults:(id)arg1 intoGroups:(id)arg2 ;
-(id)_completionsByMergingRecentSearches:(id)arg1 withSuggestions:(id)arg2 andLiteralSearch:(id)arg3 ;
-(char)_urlString:(id)arg1 isProbablyContainedIn:(id)arg2 ;
-(id)_findOnPageGroupForQuery:(id)arg1 ;
-(id)_groupsForQuery:(id)arg1 allowPartialCompletions:(char)arg2 findOnPageGroup:(id*)arg3 topHit:(id*)arg4 topHitReady:(char*)arg5 ;
-(unsigned)findOnPageGroupIndex;
-(void)_updateProviders;
-(void)clearCachedSearchQuery;
-(char)_topHitMatchesString:(id)arg1 ;
-(id)_titleForFindOnPageHeaderWithMatchCount:(unsigned)arg1 ;
-(id)tabDocumentForFindOnPageCompletionProvider:(id)arg1 ;
-(id)initWithParsecSearchSession:(id)arg1 browserController:(id)arg2 ;
-(void)_removeCompletionsWithAddressInSet:(id)arg1 fromArray:(id)arg2 andTruncateTo:(unsigned)arg3 ;
-(id)topHitForString:(id)arg1 ;
-(char)isTopHitReadyForString:(id)arg1 ;
-(id)titleForGroupAtIndex:(unsigned)arg1 ;
-(id)completionsForGroupAtIndex:(unsigned)arg1 ;
-(id)headerViewReuseIdentifierForGroupAtIndex:(unsigned)arg1 ;
-(id)headerViewForGroupAtIndex:(unsigned)arg1 ;
-(void)configureHeaderView:(id)arg1 forGroupAtIndex:(unsigned)arg2 ;
-(char)hasCompletions;
-(void)setMaximumCompletionsPerGroup:(unsigned)arg1 ;
-(void)setNetworkIsReachable:(char)arg1 ;
-(void)setShouldIncludeSearchSuggestions:(char)arg1 ;
-(void)didResumeSearch;
-(void)clearCachedSearches;
-(char)shouldIncludeSearchSuggestions;
-(unsigned)maximumCompletionsPerGroup;
-(char)networkIsReachable;
-(URLCompletionProvider *)URLCompletionProvider;
-(void)setURLCompletionProvider:(URLCompletionProvider *)arg1 ;
-(SearchSuggestionProvider *)suggestionProvider;
-(void)setSuggestionProvider:(SearchSuggestionProvider *)arg1 ;
-(ReadingListCompletionProvider *)readingListProvider;
-(void)setReadingListProvider:(ReadingListCompletionProvider *)arg1 ;
-(FindOnPageCompletionProvider *)findOnPageProvider;
-(void)setFindOnPageProvider:(FindOnPageCompletionProvider *)arg1 ;
-(QuickWebsiteSearchCompletionProvider *)quickWebsiteSearchProvider;
-(void)setQuickWebsiteSearchProvider:(QuickWebsiteSearchCompletionProvider *)arg1 ;
-(CompletionProvider *)firstRemoteCompletionProviderToRespondToQuery;
-(void)setFirstRemoteCompletionProviderToRespondToQuery:(CompletionProvider *)arg1 ;
-(UniversalSearchCompletionProvider *)universalSearchProvider;
-(void)setUniversalSearchProvider:(UniversalSearchCompletionProvider *)arg1 ;
-(NSDate *)otherRenderTimeoutStartTime;
-(void)setOtherRenderTimeoutStartTime:(NSDate *)arg1 ;
-(NSDate *)searchRenderTimeoutStartTime;
-(void)setSearchRenderTimeoutStartTime:(NSDate *)arg1 ;
-(NSDate *)minRenderTimeoutStartTime;
-(void)setMinRenderTimeoutStartTime:(NSDate *)arg1 ;
-(void)setDelegate:(id<CompletionListDelegate>)arg1 ;
-(void)dealloc;
-(id<CompletionListDelegate>)delegate;
-(WBSCompletionQuery *)query;
-(void)_update;
-(void)setQuery:(WBSCompletionQuery *)arg1 ;
-(void)_updateTimerFired:(id)arg1 ;
-(UniversalSearchSession *)parsecSearchSession;
-(void)setParsecSearchSession:(UniversalSearchSession *)arg1 ;
-(unsigned)numberOfGroups;
-(void)_setNeedsUpdate;
@end

