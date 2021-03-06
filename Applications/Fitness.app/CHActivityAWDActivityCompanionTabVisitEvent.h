/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CHActivityAWDActivityCompanionTabVisitEvent : PBCodable <NSCopying> {

	long long _childViewVisits;
	unsigned long long _timestamp;
	int _tab;
	int _visitDuration;
	char _didScroll;
	SCD_Struct_CH1 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasTab; 
@property (assign,nonatomic) int tab;                                   //@synthesize tab=_tab - In the implementation block
@property (assign,nonatomic) char hasVisitDuration; 
@property (assign,nonatomic) int visitDuration;                         //@synthesize visitDuration=_visitDuration - In the implementation block
@property (assign,nonatomic) char hasDidScroll; 
@property (assign,nonatomic) char didScroll;                            //@synthesize didScroll=_didScroll - In the implementation block
@property (assign,nonatomic) char hasChildViewVisits; 
@property (assign,nonatomic) long long childViewVisits;                 //@synthesize childViewVisits=_childViewVisits - In the implementation block
-(void)setTab:(int)arg1 ;
-(void)setVisitDuration:(int)arg1 ;
-(void)setChildViewVisits:(long long)arg1 ;
-(void)setDidScroll:(char)arg1 ;
-(int)tab;
-(void)setHasTab:(char)arg1 ;
-(char)hasTab;
-(id)tabAsString:(int)arg1 ;
-(int)StringAsTab:(id)arg1 ;
-(int)visitDuration;
-(void)setHasVisitDuration:(char)arg1 ;
-(char)hasVisitDuration;
-(id)visitDurationAsString:(int)arg1 ;
-(int)StringAsVisitDuration:(id)arg1 ;
-(void)setHasDidScroll:(char)arg1 ;
-(char)hasDidScroll;
-(void)setHasChildViewVisits:(char)arg1 ;
-(char)hasChildViewVisits;
-(long long)childViewVisits;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)didScroll;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTimestamp;
@end

