/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMailboxFilterProvider, MFObserver;
@class NSArray, NSFormatter, MFObservable;

@interface MFMailboxFilterViewModel : NSObject {

	char _filterEnabled;
	NSArray* _selectedFilters;
	id<MFMailboxFilterProvider> _provider;
	NSFormatter* _formatter;
	MFObservable*<MFObserver> _filterEnabledObservable;
	MFObservable*<MFObserver> _selectedFiltersObservable;

}

@property (nonatomic,retain) NSFormatter * formatter;                                                   //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) id<MFMailboxFilterProvider> provider;                                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain,readonly) NSArray * reducedSelectedFilters; 
@property (nonatomic,retain,readonly) MFObservable*<MFObserver> filterEnabledObservable;                //@synthesize filterEnabledObservable=_filterEnabledObservable - In the implementation block
@property (nonatomic,retain,readonly) MFObservable*<MFObserver> selectedFiltersObservable;              //@synthesize selectedFiltersObservable=_selectedFiltersObservable - In the implementation block
@property (nonatomic,retain) NSArray * selectedFilters;                                                 //@synthesize selectedFilters=_selectedFilters - In the implementation block
@property (assign,getter=isFilterEnabled,nonatomic) char filterEnabled;                                 //@synthesize filterEnabled=_filterEnabled - In the implementation block
-(char)isFilterEnabled;
-(id)observableFilterEnabled;
-(id)observableSelectedFilters;
-(id)selectedFiltersDescription;
-(id)sourcesByApplyingFiltersToSource:(id)arg1 ;
-(void)setSelectedFilters:(NSArray *)arg1 ;
-(NSArray *)selectedFilters;
-(id)initWithProvider:(id)arg1 formatter:(id)arg2 selectedFilters:(id)arg3 ;
-(id)_sourcesByApplyingFiltersToSource:(id)arg1 ;
-(NSArray *)reducedSelectedFilters;
-(id)_compoundCriterionForFilters:(id)arg1 ;
-(MFObservable*<MFObserver>)filterEnabledObservable;
-(MFObservable*<MFObserver>)selectedFiltersObservable;
-(void)_notifySelectedFiltersObserver;
-(void)_notifyFilterEnabledObserver;
-(id)initWithProvider:(id)arg1 formatter:(id)arg2 ;
-(void)dealloc;
-(id<MFMailboxFilterProvider>)provider;
-(NSFormatter *)formatter;
-(void)setFormatter:(NSFormatter *)arg1 ;
-(void)setProvider:(id<MFMailboxFilterProvider>)arg1 ;
-(void)setFilterEnabled:(char)arg1 ;
@end
