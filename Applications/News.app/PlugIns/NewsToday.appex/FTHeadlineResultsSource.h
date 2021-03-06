/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FTReadablePrivateDataStorage, FCContentContext;
@class NSString, PARSession;

@interface FTHeadlineResultsSource : NSObject {

	NSString* _identifier;
	/*^block*/id _newResultsHandler;
	unsigned _desiredThumbnailSizePreset;
	unsigned _desiredSourceNameImageSizePreset;
	id<FTReadablePrivateDataStorage> _privateDataStorage;
	id<FCContentContext> _contentContext;
	PARSession* _session;
	double _backgroundMinimumUpdateInterval;
	double _foregroundMinimumUpdateInterval;

}

@property (nonatomic,copy) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<FTReadablePrivateDataStorage> privateDataStorage;              //@synthesize privateDataStorage=_privateDataStorage - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                              //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) PARSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) id newResultsHandler;                                               //@synthesize newResultsHandler=_newResultsHandler - In the implementation block
@property (nonatomic,readonly) double backgroundMinimumUpdateInterval;                         //@synthesize backgroundMinimumUpdateInterval=_backgroundMinimumUpdateInterval - In the implementation block
@property (nonatomic,readonly) double foregroundMinimumUpdateInterval;                         //@synthesize foregroundMinimumUpdateInterval=_foregroundMinimumUpdateInterval - In the implementation block
@property (nonatomic,readonly) unsigned desiredThumbnailSizePreset;                            //@synthesize desiredThumbnailSizePreset=_desiredThumbnailSizePreset - In the implementation block
@property (nonatomic,readonly) unsigned desiredSourceNameImageSizePreset;                      //@synthesize desiredSourceNameImageSizePreset=_desiredSourceNameImageSizePreset - In the implementation block
-(id<FTReadablePrivateDataStorage>)privateDataStorage;
-(unsigned)desiredThumbnailSizePreset;
-(unsigned)desiredSourceNameImageSizePreset;
-(id)initWithIdentifier:(id)arg1 desiredThumbnailSizePreset:(unsigned)arg2 desiredSourceNameImageSizePreset:(unsigned)arg3 privateDataStorage:(id)arg4 contentContext:(id)arg5 session:(id)arg6 ;
-(void)fetchLatestHeadlinesWithResultsLimit:(unsigned)arg1 qualityOfService:(int)arg2 relativePriority:(int)arg3 completion:(/*^block*/id)arg4 ;
-(id)newResultsHandler;
-(void)setNewResultsHandler:(id)arg1 ;
-(void)setPrivateDataStorage:(id<FTReadablePrivateDataStorage>)arg1 ;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSession:(PARSession *)arg1 ;
-(id)newFetchOperation;
-(PARSession *)session;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(double)foregroundMinimumUpdateInterval;
-(double)backgroundMinimumUpdateInterval;
@end

