/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/CompletionProvider.h>
#import <MobileSafari/WBSParsecSearchSessionDelegate.h>

@class NSTimer, NSString, WBSCompletionQuery, NSNumber, UniversalSearchSession;

@interface UniversalSearchCompletionProvider : CompletionProvider <WBSParsecSearchSessionDelegate> {

	NSTimer* _timeoutTimer;
	NSString* _queryString;
	NSString* _currentQueryString;
	WBSCompletionQuery* _currentQuery;
	NSNumber* _searchRenderTimeout;
	NSNumber* _otherRenderTimeout;
	NSNumber* _minRenderTimeout;
	UniversalSearchSession* _parsecSearchSession;

}

@property (nonatomic,retain) NSNumber * searchRenderTimeout;                            //@synthesize searchRenderTimeout=_searchRenderTimeout - In the implementation block
@property (nonatomic,readonly) NSNumber * otherRenderTimeout;                           //@synthesize otherRenderTimeout=_otherRenderTimeout - In the implementation block
@property (nonatomic,readonly) NSNumber * minRenderTimeout;                             //@synthesize minRenderTimeout=_minRenderTimeout - In the implementation block
@property (nonatomic,retain) UniversalSearchSession * parsecSearchSession;              //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionsForString:(id)arg1 ;
-(id)completionsForQuery:(id)arg1 ;
-(void)setStringToComplete:(id)arg1 ;
-(unsigned)maximumCachedCompletionCount;
-(void)_updateTimeoutsFromBag:(id)arg1 ;
-(void)_parsecBagDidLoad:(id)arg1 ;
-(id)currentInputTypeForSession:(id)arg1 ;
-(char)shouldHideParsecResult:(id)arg1 basedOnHideRankGivenTopHit:(id)arg2 indexOfTopHitInFrequentlyVisitedSites:(unsigned*)arg3 ;
-(void)setSearchRenderTimeout:(NSNumber *)arg1 ;
-(NSNumber *)minRenderTimeout;
-(void)session:(id)arg1 didReceiveResults:(id)arg2 forQuery:(id)arg3 ;
-(UniversalSearchSession *)parsecSearchSession;
-(void)setParsecSearchSession:(UniversalSearchSession *)arg1 ;
-(NSNumber *)searchRenderTimeout;
-(NSNumber *)otherRenderTimeout;
@end
