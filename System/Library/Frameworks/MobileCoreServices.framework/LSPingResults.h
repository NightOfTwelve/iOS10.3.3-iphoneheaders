/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface LSPingResults : NSObject <NSSecureCoding> {

	NSMutableDictionary* _devices;
	NSMutableDictionary* _errorsMap;
	NSMutableDictionary* _resultsMap;
	double _pingAvg;

}

@property (retain) NSMutableDictionary * devices;                 //@synthesize devices=_devices - In the implementation block
@property (retain) NSMutableDictionary * errorsMap;               //@synthesize errorsMap=_errorsMap - In the implementation block
@property (retain) NSMutableDictionary * resultsMap;              //@synthesize resultsMap=_resultsMap - In the implementation block
@property (assign) double pingAvg;                                //@synthesize pingAvg=_pingAvg - In the implementation block
+(char)supportsSecureCoding;
-(void)setErrorsMap:(NSMutableDictionary *)arg1 ;
-(void)setResultsMap:(NSMutableDictionary *)arg1 ;
-(void)setPingAvg:(double)arg1 ;
-(NSMutableDictionary *)errorsMap;
-(NSMutableDictionary *)resultsMap;
-(double)pingAvg;
-(void)addKeysForDevice:(id)arg1 ;
-(void)incrementResultForStatus:(int)arg1 andDevice:(id)arg2 ;
-(id)seenDevices;
-(int)statusForDevice:(id)arg1 ;
-(id)dateDeviceLastSeen:(id)arg1 ;
-(id)resultCountsForDevice:(id)arg1 ;
-(void)updateDevice:(id)arg1 withStatus:(int)arg2 ;
-(void)updateDevice:(id)arg1 withError:(id)arg2 ;
-(double)averagePingTime;
-(void)updatePingAverageWithInterval:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)clear;
-(id)errors;
-(void)setDevices:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)devices;
-(void)addDevice:(id)arg1 ;
@end

