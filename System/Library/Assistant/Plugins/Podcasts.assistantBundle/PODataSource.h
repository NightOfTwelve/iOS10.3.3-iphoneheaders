/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSString, NSDate;

@interface PODataSource : NSObject {

	char _constructingData;
	NSMutableDictionary* _podcastCollectionsByUUID;
	NSMutableDictionary* _podcastStationsByUUID;
	NSMutableArray* _podcastRevisions;
	NSString* _databaseUUID;
	NSString* _firstRevisionUUID;
	NSDate* _podcastDataPlistLastModified;
	NSDate* _revisionsDataPlistLastModified;

}

@property (nonatomic,retain) NSMutableDictionary * podcastCollectionsByUUID;              //@synthesize podcastCollectionsByUUID=_podcastCollectionsByUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * podcastStationsByUUID;                 //@synthesize podcastStationsByUUID=_podcastStationsByUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * podcastRevisions;                           //@synthesize podcastRevisions=_podcastRevisions - In the implementation block
@property (retain) NSString * databaseUUID;                                               //@synthesize databaseUUID=_databaseUUID - In the implementation block
@property (retain) NSString * firstRevisionUUID;                                          //@synthesize firstRevisionUUID=_firstRevisionUUID - In the implementation block
@property (retain) NSDate * podcastDataPlistLastModified;                                 //@synthesize podcastDataPlistLastModified=_podcastDataPlistLastModified - In the implementation block
@property (retain) NSDate * revisionsDataPlistLastModified;                               //@synthesize revisionsDataPlistLastModified=_revisionsDataPlistLastModified - In the implementation block
@property (assign) char constructingData;                                                 //@synthesize constructingData=_constructingData - In the implementation block
+(id)sharedInstance;
-(char)constructingData;
-(NSString *)firstRevisionUUID;
-(char)isPodcastRevisionDataStale;
-(void)setConstructingData:(char)arg1 ;
-(id)arrayFromPlistURL:(id)arg1 ;
-(void)setFirstRevisionUUID:(NSString *)arg1 ;
-(id)podcastCollectionsMatchingString:(id)arg1 maxResults:(int)arg2 ;
-(id)podcastStationsMatchingString:(id)arg1 maxResults:(int)arg2 ;
-(NSMutableDictionary *)podcastCollectionsByUUID;
-(NSMutableDictionary *)podcastStationsByUUID;
-(NSMutableArray *)podcastRevisions;
-(char)isPodcastsInstalled;
-(id)podcastRevisionsSinceAnchor:(unsigned)arg1 ;
-(id)domainObjectWithUUID:(id)arg1 ;
-(NSDate *)revisionsDataPlistLastModified;
-(NSDate *)podcastDataPlistLastModified;
-(char)isPodcastDataStale;
-(id)podcastsIndexPath;
-(id)podcastCollectionWithUUID:(id)arg1 ;
-(id)podcastStationWithUUID:(id)arg1 ;
-(void)setPodcastCollectionsByUUID:(NSMutableDictionary *)arg1 ;
-(id)constructModelObjectsFromDictionaries:(id)arg1 withIndexPath:(id)arg2 modelObjectClass:(Class)arg3 ;
-(void)setPodcastDataPlistLastModified:(NSDate *)arg1 ;
-(void)constructRevisionsFromDictionary:(id)arg1 isPodcastCollections:(char)arg2 ;
-(void)setRevisionsDataPlistLastModified:(NSDate *)arg1 ;
-(void)constructRevisionFromDictionary:(id)arg1 isPodcastCollections:(char)arg2 isDelete:(char)arg3 ;
-(id)constructModelObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 ;
-(id)podcastModelObjectsInArray:(id)arg1 matchingString:(id)arg2 maxResults:(int)arg3 ;
-(void)setPodcastStationsByUUID:(NSMutableDictionary *)arg1 ;
-(void)setPodcastRevisions:(NSMutableArray *)arg1 ;
-(void)initializeDataFromDictionary;
-(id)revisionPlistURL;
-(id)dbPlistURL;
-(id)containerURL;
-(NSString *)databaseUUID;
-(void)setDatabaseUUID:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(id)podcastCollections;
-(id)podcastStations;
-(id)validity;
@end
