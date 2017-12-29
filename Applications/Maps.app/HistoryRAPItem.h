/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HistoryRAPItem
@property (nonatomic,readonly) id<RecentsItem> historyItem; 
@property (nonatomic,readonly) NSString * searchText; 
@property (nonatomic,readonly) NSString * locationDisplayString; 
@property (nonatomic,readonly) unsigned long searchResultsCount; 
@required
-(NSString *)searchText;
-(id<RecentsItem>)historyItem;
-(unsigned long)searchResultsCount;
-(NSString *)locationDisplayString;

@end
