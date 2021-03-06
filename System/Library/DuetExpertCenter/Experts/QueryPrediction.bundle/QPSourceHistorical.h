/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/QueryPrediction.bundle/QueryPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QueryPrediction/QPSource.h>

@class _QPQueryRankerParameters, _QPQueryRanker, _QPQueryRankerConfiguration, NSString;

@interface QPSourceHistorical : NSObject <QPSource> {

	_QPQueryRankerParameters* _parameters;
	_QPQueryRanker* _ranker;
	_QPQueryRankerConfiguration* _configuration;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * identifier; 
+(id)predictionItemFromRank:(id)arg1 ;
-(void)handleDatabaseChangeNotification;
-(id)queryWithLimit:(unsigned)arg1 abGroup:(id)arg2 ;
-(id)init;
-(NSString *)identifier;
-(id)initWithParameters:(id)arg1 ;
@end

