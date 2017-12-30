/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray, AppReceiptOperationResult, AppReceiptRefreshOperationOptions;

@interface AppReceiptRefreshOperation : ISOperation {

	NSArray* _familyAccountIDs;
	AppReceiptOperationResult* _operationResult;
	AppReceiptRefreshOperationOptions* _options;
	/*^block*/id _resultsBlock;

}
-(char)_refreshReceiptForApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(char)_wasInstalledByConfigurator:(id)arg1 ;
-(char)_preformMigrationCheckForApp:(id)arg1 ;
-(id)_optionsForApplication:(id)arg1 ;
-(id)_postBodyDataWithApplication:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(char)_handleResponse:(id)arg1 forApp:(id)arg2 options:(id)arg3 ;
-(void)_checkExpirationNotificationDate:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)run;
-(void)setResultsBlock:(/*^block*/id)arg1 ;
@end
