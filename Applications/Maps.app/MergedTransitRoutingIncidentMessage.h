/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitRoutingIncidentMessage.h>

@class NSString, NSArray;

@interface MergedTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage> {

	NSString* _routingMessage;
	NSArray* _transitIncidents;

}

@property (nonatomic,readonly) NSString * routingMessage;               //@synthesize routingMessage=_routingMessage - In the implementation block
@property (nonatomic,readonly) NSArray * transitIncidents;              //@synthesize transitIncidents=_transitIncidents - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGEOTransitIncidentMessage:(id)arg1 ;
-(id)initWithGEOTransitIncidentMessages:(id)arg1 ;
-(void)_mergeTransitRoutingIncidentMessages:(id)arg1 ;
-(NSString *)routingMessage;
-(NSArray *)transitIncidents;
@end
