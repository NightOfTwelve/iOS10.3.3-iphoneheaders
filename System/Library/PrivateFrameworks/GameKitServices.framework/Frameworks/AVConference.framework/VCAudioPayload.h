/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSArray;

@interface VCAudioPayload : NSObject {

	SoundDec_t* encoder;
	int payload;
	unsigned long _codecSamplesPerFrame;
	unsigned long blockSize;
	unsigned long _codecSampleRate;
	unsigned long _inputSampleRate;
	double _srcRatio;
	unsigned long ttyBlockSize;
	unsigned long encodedBytesPerFrame;
	unsigned long bundleHeaderBytes;
	unsigned long bitrate;
	NSArray* supportedBitrates;
	char canBundle;
	char canSetBitrate;
	char forcingBitrate;
	char useSBR;
	char shouldReset;
	char shouldLimitMaxPacketSize;
	char dtxEnabled;
	char payloadOctetAligned;
	int format;
	unsigned long internalBundleFactor;

}

@property (nonatomic,readonly) int payload; 
@property (nonatomic,readonly) unsigned long samplesPerFrame; 
@property (nonatomic,readonly) unsigned long blockSize; 
@property (nonatomic,readonly) unsigned long encodedBytesPerFrame; 
@property (nonatomic,readonly) unsigned long bundleHeaderBytes; 
@property (nonatomic,readonly) unsigned long bitrate; 
@property (nonatomic,readonly) NSArray * supportedBitrates; 
@property (nonatomic,readonly) char canBundle; 
@property (nonatomic,readonly) char useCookie; 
@property (assign,nonatomic) char useSBR; 
@property (assign,nonatomic) unsigned long sampleRate;                          //@synthesize codecSampleRate=_codecSampleRate - In the implementation block
@property (assign,nonatomic) char dtxEnabled; 
@property (assign,nonatomic) char payloadOctetAligned; 
+(char)isPayloadSupported:(int)arg1 ;
+(unsigned long)blockSizeForPayload:(int)arg1 ;
-(void)dealloc;
-(int)payload;
-(void)setSampleRate:(unsigned long)arg1 ;
-(unsigned long)sampleRate;
-(char)useSBR;
-(void)setUseSBR:(char)arg1 ;
-(unsigned long)samplesPerFrame;
-(void)setPayloadOctetAligned:(char)arg1 ;
-(char)createEncoderWithInputFormat:(AudioStreamBasicDescription*)arg1 ;
-(unsigned long)encodedBytesPerFrame;
-(void)resetEncoderWithSampleBuffer:(char*)arg1 numBytes:(int)arg2 ;
-(int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 ;
-(char)setBitrate:(unsigned long)arg1 ;
-(void)setInternalBundleSamples:(unsigned long)arg1 ;
-(id)initWithPayload:(int)arg1 blockSize:(unsigned long)arg2 ;
-(unsigned long)bitrate;
-(char)dtxEnabled;
-(unsigned long)blockSize;
-(char)useCookie;
-(char)getMagicCookie:(char*)arg1 withLength:(unsigned*)arg2 ;
-(char)canBundle;
-(unsigned long)bundleHeaderBytes;
-(void)resetEncoder;
-(float)qualityForBitRate:(unsigned long)arg1 ;
-(void)setInputSampleRate:(unsigned long)arg1 ;
-(char)payloadOctetAligned;
-(char)setupInputProperties;
-(char)setupEncodeProperties;
-(char)isDtxEmptyPacket:(unsigned long)arg1 ;
-(NSArray *)supportedBitrates;
-(void)createSupportedBitrates;
-(unsigned long)aacBitrate;
-(void)createSupportedBitratesForAACELD;
-(void)createSupportedBitratesForOpus;
-(void)createSupportedBitratesForAMR8k;
-(void)createSupportedBitratesForAMR16k;
-(void)setDtxEnabled:(char)arg1 ;
-(unsigned)flags;
@end

