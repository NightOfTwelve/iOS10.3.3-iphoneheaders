/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MailboxContentViewController.h>
#import <MobileMail/MessageMiniMallObserver.h>
#import <MobileMail/MFSearchSuggestionsControllerDelegate.h>
#import <MobileMail/MFSearchSuggestionsManagerDelegate.h>
#import <MobileMail/MSSearchSessionControllerDataSource.h>
#import <MobileMail/MFAtomSearchBarDelegate.h>
#import <MobileMail/MFSearchResultsUpdating.h>

@protocol MFKVOObservation;
@class MSDiagnosticManager, MFSearchSuggestionsManager, MFSearchSuggestionsController, MFSpotlightSuggester, MFSearchMailboxSuggester, NSSet, NSString, SearchScopeControl, UIView, MFMailMessageLibrary;

@interface MailboxContentSearchViewController : MailboxContentViewController <MessageMiniMallObserver, MFSearchSuggestionsControllerDelegate, MFSearchSuggestionsManagerDelegate, MSSearchSessionControllerDataSource, MFAtomSearchBarDelegate, MFSearchResultsUpdating> {

	MFSearchSuggestionsManager* _suggestionsManager;
	MFSearchSuggestionsController* _suggestionsController;
	MFSpotlightSuggester* _spotlightSuggester;
	MFSearchMailboxSuggester* _mailboxSuggester;
	NSSet* _alwaysVisibleCategories;
	NSSet* _basicCategories;
	NSString* _lastPhrase;
	SearchScopeControl* _searchGlobalScopeControl;
	NSSet* _mailboxes;
	struct {
		unsigned globalScopeControlDisabled : 1;
		unsigned localMailboxSearchOnly : 1;
		unsigned dismissedSuggestions : 1;
		unsigned enableSuggestionDisplay : 1;
		unsigned excludeTrashFromSearches : 1;
		unsigned hasStartedRemoteSearch : 1;
	}  _flags;
	char _generateCannedSuggestions;
	char _enablePresentationAnimation;
	NSSet* _presentingSources;
	id<MFKVOObservation> _contentInsetObservation;
	id<MFKVOObservation> _scrollIndicatorInsetsObservation;
	UIView* _snapshotViewForDismissal;
	NSString* _initialSearchString;
	id _suggestionsIdentifier;

}

@property (assign,getter=isSearchSuggestionsVisible,nonatomic) char searchSuggestionsVisible; 
@property (nonatomic,retain) id<MFKVOObservation> contentInsetObservation;                                 //@synthesize contentInsetObservation=_contentInsetObservation - In the implementation block
@property (nonatomic,retain) id<MFKVOObservation> scrollIndicatorInsetsObservation;                        //@synthesize scrollIndicatorInsetsObservation=_scrollIndicatorInsetsObservation - In the implementation block
@property (nonatomic,retain) UIView * snapshotViewForDismissal;                                            //@synthesize snapshotViewForDismissal=_snapshotViewForDismissal - In the implementation block
@property (assign,nonatomic) char enablePresentationAnimation;                                             //@synthesize enablePresentationAnimation=_enablePresentationAnimation - In the implementation block
@property (nonatomic,copy) NSString * initialSearchString;                                                 //@synthesize initialSearchString=_initialSearchString - In the implementation block
@property (nonatomic,retain) id suggestionsIdentifier;                                                     //@synthesize suggestionsIdentifier=_suggestionsIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) MFMailMessageLibrary * mailMessageLibrary; 
@property (nonatomic,copy) NSSet * presentingSources;                                                      //@synthesize presentingSources=_presentingSources - In the implementation block
@property (assign,nonatomic) char generateCannedSuggestions;                                               //@synthesize generateCannedSuggestions=_generateCannedSuggestions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MSDiagnosticManager * diagnosticManager; 
-(id)atomSearchBar;
-(char)shouldAutoHideTableHeaderView;
-(id)_additionalBarButtonItems;
-(char)_shouldUpdateBarButtons;
-(void)_setInEditMode:(char)arg1 animated:(char)arg2 ;
-(char)allowsAutoSelectionOfInitialMessage;
-(void)beginSearchWithString:(id)arg1 searchController:(id)arg2 ;
-(void)setMailboxes:(id)arg1 ;
-(void)setPresentingSources:(NSSet *)arg1 ;
-(NSSet *)presentingSources;
-(id)selectionModel:(id)arg1 sourcesForMessageInfos:(id)arg2 ;
-(void)miniMallDidFinishSearch:(id)arg1 ;
-(void)conversationViewController:(id)arg1 didRemoveAllVisibleMessages:(id)arg2 ;
-(char)generateCannedSuggestions;
-(id)scopeIdentifierForPeopleSuggestions;
-(void)_cleanupInsetObservations;
-(void)globalSearchScopeChanged:(id)arg1 ;
-(void)_updateTableHeaderView;
-(void)setGenerateCannedSuggestions:(char)arg1 ;
-(void)setSnapshotViewForDismissal:(UIView *)arg1 ;
-(void)setEnablePresentationAnimation:(char)arg1 ;
-(NSString *)initialSearchString;
-(void)_beginSearchWithInitialString;
-(char)enablePresentationAnimation;
-(UIView *)snapshotViewForDismissal;
-(void)_prepareSnapshotViewForDismissal;
-(void)noteCriterionUpdated:(unsigned)arg1 ;
-(void)_generateSuggestionsForPhrase:(id)arg1 ;
-(id)allExcludedMailboxes;
-(id)excludedMailboxes;
-(id)exclusionPredicate;
-(char)_shouldSearchCurrentMailboxOnly;
-(id)baseSpotlightSuggesterPredicate;
-(id)suggestionsIdentifier;
-(void)setSuggestionsIdentifier:(id)arg1 ;
-(id)_phraseManagerForPhrase:(id)arg1 ;
-(void)_configureSuggestersUsingPhraseManager:(id)arg1 ;
-(void)setSearchSuggestionsVisible:(char)arg1 ;
-(char)isSearchSuggestionsVisible;
-(void)_setupInsetObservations;
-(id)_searchTapToRadarButtonItem;
-(void)_searchTapToRadarButtonSelected:(id)arg1 ;
-(void)invokeTapToRadar;
-(id)_currentEditingStringForSearchBar:(id)arg1 ;
-(id)_criterionForTopSuggestedPeople;
-(id)localMailboxCriterion;
-(id)basicCategories;
-(char)atomSearchBar:(id)arg1 hasAtomFromCategory:(id)arg2 ;
-(char)_shouldUpdateSearchForOptions:(unsigned)arg1 ;
-(id)basicSearchText;
-(id)_engagementAtomsTypesFromSearchBarItems:(id)arg1 ;
-(void)setInitialSearchString:(NSString *)arg1 ;
-(void)_updateSearchCriterionForSuggestionsManagerCompletion;
-(id)alwaysVisibleCategories;
-(void)getDefaultPersonScopeIdentifier:(id*)arg1 alternativeScopeIdentifier:(id*)arg2 ;
-(char)atomSearchBar:(id)arg1 hasAtomWithSelectedScopeIdentifier:(id)arg2 ;
-(id)atomSearchBar:(id)arg1 scopeButtonTitlesForRepresentedObject:(id)arg2 ;
-(MFMailMessageLibrary *)mailMessageLibrary;
-(char)searchSuggestionsController:(id)arg1 shouldShowSuggestionsForCategory:(id)arg2 ;
-(void)searchSuggestionsController:(id)arg1 didSelectSuggestion:(id)arg2 ;
-(void)searchSuggestionsController:(id)arg1 didSelectSearchScopeIndex:(int)arg2 ;
-(int)selectedScopeIndexForSearchSuggestionsController:(id)arg1 ;
-(char)shouldDisableGlobalScopeControlForSearchSuggestionsController:(id)arg1 ;
-(void)suggestionsManager:(id)arg1 hasSuggestions:(id)arg2 categories:(id)arg3 forIdentifier:(id)arg4 ;
-(void)suggestionsManager:(id)arg1 finishedWithIdentifier:(id)arg2 ;
-(id)atomSearchBar:(id)arg1 atomViewForRepresentedObject:(id)arg2 ;
-(int)atomSearchBar:(id)arg1 selectedScopeButtonIndexForRepresentedObject:(id)arg2 ;
-(void)atomSearchBar:(id)arg1 selectedScopeButtonIndexDidChange:(int)arg2 forRepresentedObject:(id)arg3 ;
-(void)searchButtonTappedForAtomSearchBar:(id)arg1 ;
-(id)supportedPasteboardTypesForAtomSearchBar:(id)arg1 ;
-(id)atomSearchBar:(id)arg1 representedObjectsFromPasteboard:(id)arg2 ;
-(char)atomSearchBar:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3 ;
-(id<MFKVOObservation>)contentInsetObservation;
-(void)setContentInsetObservation:(id<MFKVOObservation>)arg1 ;
-(id<MFKVOObservation>)scrollIndicatorInsetsObservation;
-(void)setScrollIndicatorInsetsObservation:(id<MFKVOObservation>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)navigationController;
-(id)splitViewController;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2 ;
-(void)setToolbarItems:(id)arg1 animated:(char)arg2 ;
-(id)toolbarItems;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)criterion;
-(id)mailboxes;
-(char)isSearching;
-(MSDiagnosticManager *)diagnosticManager;
-(unsigned)numberOfMessagesLeftToIndexForSearchSessionController:(id)arg1 ;
@end
