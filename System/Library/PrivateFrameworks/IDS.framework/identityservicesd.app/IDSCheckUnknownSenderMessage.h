/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>

@class NSString, NSNumber;

@interface IDSCheckUnknownSenderMessage : FTIDSMessage {

	NSString* _hardwareVersion;
	NSString* _OSVersion;
	NSString* _softwareVersion;
	NSString* _sender;
	NSNumber* _attemptCount;
	NSString* _geo;
	int _status;
	char _abusive;
	double _delay;

}

@property (copy) NSString * hardwareVersion;              //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (copy) NSString * OSVersion;                    //@synthesize OSVersion=_OSVersion - In the implementation block
@property (copy) NSString * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (copy) NSString * sender;                       //@synthesize sender=_sender - In the implementation block
@property (copy) NSNumber * attemptCount;                 //@synthesize attemptCount=_attemptCount - In the implementation block
@property (copy) NSString * geo;                          //@synthesize geo=_geo - In the implementation block
@property (assign) int status;                            //@synthesize status=_status - In the implementation block
@property (assign) char abusive;                          //@synthesize abusive=_abusive - In the implementation block
@property (assign) double delay;                          //@synthesize delay=_delay - In the implementation block
-(NSString *)geo;
-(void)setGeo:(NSString *)arg1 ;
-(char)abusive;
-(void)setAbusive:(char)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(NSString *)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSender:(NSString *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setOSVersion:(NSString *)arg1 ;
-(char)wantsHTTPGet;
-(id)additionalMessageHeaders;
-(id)additionalQueryStringParameters;
-(NSNumber *)attemptCount;
-(void)setAttemptCount:(NSNumber *)arg1 ;
-(NSString *)OSVersion;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(NSString *)hardwareVersion;
-(NSString *)softwareVersion;
@end
