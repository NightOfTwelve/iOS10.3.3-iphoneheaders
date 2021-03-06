/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearch.h>

@class NSDictionary, TIWordSearchCandidateResultSet;

@interface TIWordSearchKana : TIWordSearch {

	NSDictionary* _kanaromapat;
	NSDictionary* _kanaroma;
	unsigned _insertKatakanaAtIndex;
	/*^block*/id _contactObserver;
	TIWordSearchCandidateResultSet* _candidateResultSet;

}

@property (nonatomic,retain) TIWordSearchCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
+(/*^block*/id)configureContactCollectionObserver:(id)arg1 previousObserver:(/*^block*/id)arg2 ;
+(id)sharedMecabraWrapper;
+(void)resetSharedMecabraWrapper;
+(void)clearCachedContactObserver;
+(void)sendDictionaryUpdatePathsForInputMode:(id)arg1 toMecabra:(id)arg2 onQueue:(id)arg3 ;
+(id)dynamicDictionaryFileNames;
-(void)dealloc;
-(TIWordSearchCandidateResultSet *)candidateResultSet;
-(void)setCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(void)updateMecabraState;
-(int)mecabraInputMethodType;
-(unsigned long)mecabraCreationOptions;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2 ;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(void)clearObservers;
-(void)dynamicDictionariesRemoved:(id)arg1 ;
-(char)_insertString:(id)arg1 input:(id)arg2 at:(unsigned)arg3 force:(char)arg4 ;
-(char)isAnalyzingJapaneseRomaji;
-(void)setInsertKatakanaAtIndex:(unsigned)arg1 ;
-(char)_insertKatakana:(id)arg1 reading:(id)arg2 at:(unsigned)arg3 ;
-(id)makeCandidates:(id)arg1 contextString:(id)arg2 predictionEnabled:(char)arg3 reanalysisMode:(char)arg4 withInputManager:(id)arg5 geometryModelData:(id)arg6 flickUsed:(char)arg7 ;
-(id)kanaSearchPat:(id)arg1 ;
-(id)kanaRomaPat:(id)arg1 ;
-(void)updateDictionaryPaths;
@end

