/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsDataClassMigrator/RecentsItem.h>
#import <MapsDataClassMigrator/LegacyHistoryPersistentItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, SearchResult, NSString;

@interface PersistentDirectionsHistoryItem : PBCodable <RecentsItem, LegacyHistoryPersistentItem, NSCopying> {

	double _position;
	double _timestamp;
	NSData* _directionsResponseID;
	SearchResult* _endSearchResult;
	NSString* _reportAProblemAttachment;
	SearchResult* _startSearchResult;
	NSString* _syncIdentifier;
	int _transportType;
	SCD_Struct_Pe5 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasStartSearchResult; 
@property (nonatomic,retain) SearchResult * startSearchResult;                 //@synthesize startSearchResult=_startSearchResult - In the implementation block
@property (nonatomic,readonly) char hasEndSearchResult; 
@property (nonatomic,retain) SearchResult * endSearchResult;                   //@synthesize endSearchResult=_endSearchResult - In the implementation block
@property (nonatomic,readonly) char hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                    //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,readonly) char hasReportAProblemAttachment; 
@property (nonatomic,retain) NSString * reportAProblemAttachment;              //@synthesize reportAProblemAttachment=_reportAProblemAttachment - In the implementation block
@property (nonatomic,readonly) char hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;                        //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) char hasPosition; 
@property (assign,nonatomic) double position;                                  //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                                //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
-(void)setEndSearchResult:(SearchResult *)arg1 ;
-(void)setReportAProblemAttachment:(NSString *)arg1 ;
-(id)initWithPersistedHistoryRepresentation:(id)arg1 ;
-(void)setStartSearchResult:(SearchResult *)arg1 ;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(SearchResult *)startSearchResult;
-(SearchResult *)endSearchResult;
-(char)hasSyncIdentifier;
-(char)hasReportAProblemAttachment;
-(char)hasEndSearchResult;
-(NSString *)reportAProblemAttachment;
-(char)hasStartSearchResult;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)hasDirectionsResponseID;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTimestamp;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(char)arg1 ;
-(char)hasTransportType;
-(char)hasPosition;
-(NSString *)syncIdentifier;
-(void)setHasPosition:(char)arg1 ;
@end

