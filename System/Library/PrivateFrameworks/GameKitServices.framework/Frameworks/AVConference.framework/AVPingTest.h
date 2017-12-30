/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVPingTest : NSObject {

	NSString* ipAsString;
	char usingWifi;
	NSString* interfaceNameToTest;
	float min;
	float max;
	float avg;
	float stddev;
	float packetLossRate;
	int lastReturnedError;

}

@property (nonatomic,readonly) char usingWifi; 
@property (nonatomic,readonly) float min; 
@property (nonatomic,readonly) float max; 
@property (nonatomic,readonly) float avg; 
@property (nonatomic,readonly) float stddev; 
@property (nonatomic,readonly) float packetLossRate; 
-(void)dealloc;
-(id)description;
-(int)start;
-(float)packetLossRate;
-(void)calculateInterfaceName;
-(int)parseResults:(char*)arg1 secondLastLine:(char*)arg2 ;
-(id)initWithIPAsString:(id)arg1 usingWifi:(char)arg2 ;
-(char)usingWifi;
-(float)avg;
-(char)parsePingLineForBadInterface:(char*)arg1 ;
-(char)parsePingLineForBadCommand:(char*)arg1 ;
-(char)parsePingLineForPLR:(char*)arg1 ;
-(char)parsePingLineForLatencyStats:(char*)arg1 ;
-(float)stddev;
-(float)min;
-(float)max;
@end
