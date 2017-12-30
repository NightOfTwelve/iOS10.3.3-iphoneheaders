/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, NSString, TICandidateSorter, NSOperationQueue, NSMutableArray;

@interface TIKeyboardInputManager_ja : TIKeyboardInputManager_zh_ja {

	TIWordSearch* _kbws;
	NSString* _convertStringForCurrentCandidates;
	unsigned _remainingInputLength;
	char _shouldLearnAcceptedCandidate;
	char _isPhraseBoundarySet;
	char _isCandidateSelectionSuppressed;
	char _flickUsed;
	char _isEmojiFacemarkMode;
	TICandidateSorter* _candidateSorter;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _recentlyCommittedCandidatesForReanalysis;
	NSString* _alternateDisplayString;

}

@property (readonly) TICandidateSorter * candidateSorter;                                            //@synthesize candidateSorter=_candidateSorter - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                                              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentlyCommittedCandidatesForReanalysis;              //@synthesize recentlyCommittedCandidatesForReanalysis=_recentlyCommittedCandidatesForReanalysis - In the implementation block
@property (assign,nonatomic) char flickUsed;                                                         //@synthesize flickUsed=_flickUsed - In the implementation block
@property (assign,nonatomic) char isEmojiFacemarkMode;                                               //@synthesize isEmojiFacemarkMode=_isEmojiFacemarkMode - In the implementation block
@property (nonatomic,copy) NSString * alternateDisplayString;                                        //@synthesize alternateDisplayString=_alternateDisplayString - In the implementation block
+(Class)wordSearchClass;
+(char)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
+(id)sortTitleFromSort:(unsigned)arg1 ;
+(unsigned)sortFromSortTitle:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(id)keyboardBehaviors;
-(id)candidateResultSet;
-(unsigned)initialSelectedIndex;
-(char)usesCandidateSelection;
-(void)clearInput;
-(id)searchStringForMarkedText;
-(char)usesAutoDeleteWord;
-(char)supportsSetPhraseBoundary;
-(id)inputString;
-(char)shouldExtendPriorWord;
-(char)suppressCompletionsForFieldEditor;
-(char)suppliesCompletions;
-(id)replacementForDoubleSpace;
-(unsigned)phraseBoundary;
-(unsigned)inputIndex;
-(unsigned)inputCount;
-(void)lastAcceptedCandidateCorrected;
-(id)defaultCandidate;
-(NSOperationQueue *)operationQueue;
-(id)initWithConfig:(id)arg1 ;
-(id)geometryModelData;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(char)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(id)wordSearch;
-(char)supportsLearning;
-(char)shouldAddModifierSymbolsToWordCharacters;
-(id)dictionaryInputMode;
-(id)wordCharacters;
-(void)setAutoCorrects:(char)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(void)loadFavoniusLanguageModel;
-(void)setLearnsCorrection:(char)arg1 ;
-(void)clearDynamicDictionary;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned*)arg4 fromVariantKey:(char)arg5 ;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(id)rawInputString;
-(id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(id)remainingInput;
-(void)setPhraseBoundary:(unsigned)arg1 ;
-(char)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setInput:(id)arg1 ;
-(char)flickUsed;
-(id)_convertStringWithBoundary:(unsigned)arg1 ;
-(void)setFlickUsed:(char)arg1 ;
-(void)_deleteFromInput;
-(void)setIsEmojiFacemarkMode:(char)arg1 ;
-(void)_addInput:(id)arg1 ;
-(NSString *)alternateDisplayString;
-(id)_convertString;
-(unsigned)remainingInputLengthOfString:(id)arg1 index:(unsigned)arg2 candidate:(id)arg3 ;
-(unsigned)remainingInputLengthOfCandidate:(id)arg1 ;
-(void)setAlternateDisplayString:(NSString *)arg1 ;
-(void)_cancelCandidatesThread;
-(char)isEmojiFacemarkMode;
-(id)_inputString;
-(unsigned)actualInputIndex;
-(char)makeCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(char)arg2 reanalysisMode:(char)arg3 ;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(char)hasGroupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(TICandidateSorter *)candidateSorter;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(void)addRecentlyCommittedCandidatesForReanalysis:(void*)arg1 ;
-(NSMutableArray *)recentlyCommittedCandidatesForReanalysis;
-(void)loadAddressBook;
-(void)setRecentlyCommittedCandidatesForReanalysis:(NSMutableArray *)arg1 ;
@end
