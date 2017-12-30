/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class iAP2SessionEATransport;

@interface EAProtocolTransportBuffer : NSObject {

	iAP2SessionEATransport* _session;
	int _error;
	char* _bufPtr;
	char* _readPtr;
	char* _writePtr;
	unsigned _writeAttempts;
	unsigned _bufferLength;

}

@property (assign,nonatomic) iAP2SessionEATransport * session;              //@synthesize session=_session - In the implementation block
@property (assign) int error;                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) char* readPtr;                               //@synthesize readPtr=_readPtr - In the implementation block
@property (nonatomic,readonly) char* writePtr;                              //@synthesize writePtr=_writePtr - In the implementation block
@property (nonatomic,readonly) unsigned writeAttempts;                      //@synthesize writeAttempts=_writeAttempts - In the implementation block
@property (nonatomic,readonly) unsigned dataLength; 
@property (nonatomic,readonly) unsigned writeSpaceRemaining; 
-(id)initWithSession:(id)arg1 bufferSize:(unsigned)arg2 ;
-(unsigned)writeSpaceRemaining;
-(void)moveReadPtr:(unsigned)arg1 ;
-(void)moveWritePtr:(unsigned)arg1 ;
-(void)attemptWrite;
-(char*)writePtr;
-(char*)readPtr;
-(unsigned)writeAttempts;
-(void)dealloc;
-(void)reset;
-(void)setSession:(iAP2SessionEATransport *)arg1 ;
-(iAP2SessionEATransport *)session;
-(int)error;
-(void)setError:(int)arg1 ;
-(unsigned)dataLength;
@end
