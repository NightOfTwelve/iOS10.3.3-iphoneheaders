/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding> {

	unsigned _outgoingRecipientCount;
	unsigned _incomingSenderCount;
	unsigned _incomingRecipientCount;
	NSDate* _lastOutgoingRecipientDate;
	NSDate* _lastIncomingSenderDate;
	NSDate* _lastIncomingRecipientDate;
	NSDate* _firstOutgoingRecipientDate;
	NSDate* _firstIncomingSenderDate;
	NSDate* _firstIncomingRecipientDate;

}

@property (assign) unsigned outgoingRecipientCount;                  //@synthesize outgoingRecipientCount=_outgoingRecipientCount - In the implementation block
@property (assign) unsigned incomingSenderCount;                     //@synthesize incomingSenderCount=_incomingSenderCount - In the implementation block
@property (assign) unsigned incomingRecipientCount;                  //@synthesize incomingRecipientCount=_incomingRecipientCount - In the implementation block
@property (retain) NSDate * lastOutgoingRecipientDate;               //@synthesize lastOutgoingRecipientDate=_lastOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * lastIncomingSenderDate;                  //@synthesize lastIncomingSenderDate=_lastIncomingSenderDate - In the implementation block
@property (retain) NSDate * lastIncomingRecipientDate;               //@synthesize lastIncomingRecipientDate=_lastIncomingRecipientDate - In the implementation block
@property (retain) NSDate * firstOutgoingRecipientDate;              //@synthesize firstOutgoingRecipientDate=_firstOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * firstIncomingSenderDate;                 //@synthesize firstIncomingSenderDate=_firstIncomingSenderDate - In the implementation block
@property (retain) NSDate * firstIncomingRecipientDate;              //@synthesize firstIncomingRecipientDate=_firstIncomingRecipientDate - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)updateWithStatistics:(id)arg1 ;
-(unsigned)interactionCount;
-(double)interactionTimeInterval;
-(id)firstInteractionDate;
-(id)lastInteractionDate;
-(unsigned)outgoingRecipientCount;
-(double)outgoingRecipientTimeInterval;
-(NSDate *)firstOutgoingRecipientDate;
-(NSDate *)lastOutgoingRecipientDate;
-(unsigned)incomingSenderCount;
-(double)incomingSenderTimeInterval;
-(NSDate *)firstIncomingSenderDate;
-(NSDate *)lastIncomingSenderDate;
-(unsigned)incomingRecipientCount;
-(double)incomingRecipientTimeInterval;
-(NSDate *)firstIncomingRecipientDate;
-(NSDate *)lastIncomingRecipientDate;
-(void)setOutgoingRecipientCount:(unsigned)arg1 ;
-(void)setIncomingSenderCount:(unsigned)arg1 ;
-(void)setIncomingRecipientCount:(unsigned)arg1 ;
-(id)firstDate:(id)arg1 updatedWith:(id)arg2 ;
-(void)setFirstOutgoingRecipientDate:(NSDate *)arg1 ;
-(void)setFirstIncomingSenderDate:(NSDate *)arg1 ;
-(void)setFirstIncomingRecipientDate:(NSDate *)arg1 ;
-(id)lastDate:(id)arg1 updatedWith:(id)arg2 ;
-(void)setLastOutgoingRecipientDate:(NSDate *)arg1 ;
-(void)setLastIncomingSenderDate:(NSDate *)arg1 ;
-(void)setLastIncomingRecipientDate:(NSDate *)arg1 ;
@end
