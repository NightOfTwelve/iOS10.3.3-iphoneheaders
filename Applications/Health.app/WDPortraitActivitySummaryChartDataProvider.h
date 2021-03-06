/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/HKDateCacheObserver.h>

@class NSHashTable, NSCache, NSMutableDictionary, NSCalendar, HKFetchOperation, HKQuery, WDControllerManager, HKActivitySummary, NSString;

@interface WDPortraitActivitySummaryChartDataProvider : NSObject <HKDateCacheObserver> {

	NSHashTable* _observers;
	NSCache* _activitySummaryForTimeScopeCache;
	NSMutableDictionary* _activitySummaryChartPointsForTimeScopeCache;
	NSCalendar* _cachedCalendar;
	HKFetchOperation* _outstandingFetchOperation;
	HKQuery* _observerQuery;
	WDControllerManager* _controllerManager;

}

@property (nonatomic,retain) WDControllerManager * controllerManager;                  //@synthesize controllerManager=_controllerManager - In the implementation block
@property (nonatomic,readonly) HKActivitySummary * latestActivitySummary; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithControllerManager:(id)arg1 ;
-(WDControllerManager *)controllerManager;
-(void)setControllerManager:(WDControllerManager *)arg1 ;
-(id)activitySummariesForTimeScope:(int)arg1 ;
-(HKActivitySummary *)latestActivitySummary;
-(void)_alertObserversDidUpdateValues;
-(void)_fetchValueWithRetryCount:(int)arg1 ;
-(void)_setupActivitySummaryChangeObserver;
-(void)_stopActivitySummaryChangeObserver;
-(char)activitySummariesAreLoading;
-(id)cachedCalendar;
-(id)_chartPointsWithMove:(double)arg1 moveGoal:(double)arg2 exercise:(double)arg3 exerciseGoal:(double)arg4 standHour:(double)arg5 standHourGoal:(double)arg6 timestamp:(id)arg7 ;
-(id)_activitySummaryChartPointsForActivitySummariesOfYearScope:(id)arg1 ;
-(void)_transitionToFetchFailureForTimeScope:(int)arg1 ;
-(void)_partitionAndProcessActivitySummariesForAllTimeScopes:(id)arg1 ;
-(id)_fetchOperationForTimeScope:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_queriesForTimeScope:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)activitySummaryChartPointsForTimeScope:(int)arg1 ;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_clearCaches;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
@end

