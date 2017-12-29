/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/HKDateCacheObserver.h>
#import <Health/WDUpdateControllerObserver.h>

@class HKFetchOperation, NSHashTable, WDControllerManager, HKDataUnit, NSString;

@interface WDPortraitDataProvider : NSObject <HKDateCacheObserver, WDUpdateControllerObserver> {

	char _resultsLoaded;
	char _needsToReFetchValue;
	id _value;
	HKFetchOperation* _outstandingFetchOperation;
	NSHashTable* _observers;
	WDControllerManager* _controllerManager;
	HKDataUnit* _dataUnit;

}

@property (nonatomic,__weak,readonly) WDControllerManager * controllerManager;              //@synthesize controllerManager=_controllerManager - In the implementation block
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) char hasLoadedData; 
@property (nonatomic,readonly) HKDataUnit * dataUnit;                                       //@synthesize dataUnit=_dataUnit - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithControllerManager:(id)arg1 dataUnit:(id)arg2 ;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(WDControllerManager *)controllerManager;
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleUnitPreferencesDidChangeNotification:(id)arg1 ;
-(void)_refreshValueIfNecessary;
-(char)_currentlyFetchingValue;
-(void)_setNeedsReFetchValue;
-(void)_alertObserversDidUpdateValues;
-(char)_requiresValueFetch;
-(void)_fetchValueWithRetryCount:(int)arg1 ;
-(void)_transitionToFetchFailure;
-(void)_updateValueWithValue:(id)arg1 ;
-(void)didUpdateValue;
-(void)invalidateValue;
-(void)unitPreferencesDidUpdate;
-(char)hasLoadedData;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(id)value;
-(void)removeObserver:(id)arg1 ;
-(id)currentValue;
-(id)secondaryValue;
-(HKDataUnit *)dataUnit;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
@end
