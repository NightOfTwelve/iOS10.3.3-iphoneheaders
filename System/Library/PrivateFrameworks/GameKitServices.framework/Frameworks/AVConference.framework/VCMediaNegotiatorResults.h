/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface VCMediaNegotiatorResults : NSObject {

	char _supportsDynamicMaxBitrate;
	NSString* _remoteUserAgent;
	NSString* _remoteBasebandCodec;
	unsigned _remoteBasebandCodecSampleRate;
	NSMutableDictionary* _bandwidthSettings;

}

@property (assign,nonatomic) char supportsDynamicMaxBitrate;                       //@synthesize supportsDynamicMaxBitrate=_supportsDynamicMaxBitrate - In the implementation block
@property (nonatomic,retain) NSString * remoteUserAgent;                           //@synthesize remoteUserAgent=_remoteUserAgent - In the implementation block
@property (nonatomic,retain) NSString * remoteBasebandCodec;                       //@synthesize remoteBasebandCodec=_remoteBasebandCodec - In the implementation block
@property (assign,nonatomic) unsigned remoteBasebandCodecSampleRate;               //@synthesize remoteBasebandCodecSampleRate=_remoteBasebandCodecSampleRate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bandwidthSettings;              //@synthesize bandwidthSettings=_bandwidthSettings - In the implementation block
-(id)init;
-(void)dealloc;
-(char)supportsDynamicMaxBitrate;
-(void)setSupportsDynamicMaxBitrate:(char)arg1 ;
-(NSString *)remoteBasebandCodec;
-(unsigned)remoteBasebandCodecSampleRate;
-(NSString *)remoteUserAgent;
-(void)setBandwidthSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)bandwidthSettings;
-(void)setRemoteUserAgent:(NSString *)arg1 ;
-(void)setRemoteBasebandCodec:(NSString *)arg1 ;
-(void)setRemoteBasebandCodecSampleRate:(unsigned)arg1 ;
@end
