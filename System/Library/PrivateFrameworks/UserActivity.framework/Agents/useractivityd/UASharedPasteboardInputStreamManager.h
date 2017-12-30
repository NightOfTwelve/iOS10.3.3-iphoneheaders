/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSOutputStream, NSFileHandle, NSProgress, NSSet, UASharedPasteboardInfoWrapper, NSMutableData, NSString;

@interface UASharedPasteboardInputStreamManager : NSObject <NSStreamDelegate> {

	char _receivedDelem;
	NSInputStream* _stream;
	NSOutputStream* _outStream;
	NSFileHandle* _file;
	NSProgress* _progress;
	/*^block*/id _handler;
	NSSet* _typesToReceive;
	UASharedPasteboardInfoWrapper* _pbwrapper;
	NSMutableData* _receivedData;
	int _bytesReceived;
	int _expectedLength;
	unsigned _state;
	unsigned long long _streamStartTime;
	unsigned long long _timeRemaining;

}

@property (retain) NSInputStream * stream;                                 //@synthesize stream=_stream - In the implementation block
@property (retain) NSOutputStream * outStream;                             //@synthesize outStream=_outStream - In the implementation block
@property (retain) NSFileHandle * file;                                    //@synthesize file=_file - In the implementation block
@property (retain) NSProgress * progress;                                  //@synthesize progress=_progress - In the implementation block
@property (copy) id handler;                                               //@synthesize handler=_handler - In the implementation block
@property (retain) NSSet * typesToReceive;                                 //@synthesize typesToReceive=_typesToReceive - In the implementation block
@property (retain) UASharedPasteboardInfoWrapper * pbwrapper;              //@synthesize pbwrapper=_pbwrapper - In the implementation block
@property (retain) NSMutableData * receivedData;                           //@synthesize receivedData=_receivedData - In the implementation block
@property (assign) unsigned long long streamStartTime;                     //@synthesize streamStartTime=_streamStartTime - In the implementation block
@property (assign) unsigned long long timeRemaining;                       //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign) int bytesReceived;                                      //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (assign) int expectedLength;                                     //@synthesize expectedLength=_expectedLength - In the implementation block
@property (assign) unsigned state;                                         //@synthesize state=_state - In the implementation block
@property (assign) char receivedDelem;                                     //@synthesize receivedDelem=_receivedDelem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)absoluteToNSec:(unsigned long long)arg1 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 dataFile:(id)arg3 ;
-(void)receiveTypes:(id)arg1 withProgress:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setOutStream:(NSOutputStream *)arg1 ;
-(NSOutputStream *)outStream;
-(void)setTypesToReceive:(NSSet *)arg1 ;
-(void)setStreamStartTime:(unsigned long long)arg1 ;
-(void)streamDoneWithInfo:(id)arg1 error:(id)arg2 ;
-(void)setReceivedDelem:(char)arg1 ;
-(char)receivedDelem;
-(void)setPbwrapper:(UASharedPasteboardInfoWrapper *)arg1 ;
-(UASharedPasteboardInfoWrapper *)pbwrapper;
-(unsigned long long)streamStartTime;
-(NSSet *)typesToReceive;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)cancel;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSProgress *)progress;
-(unsigned long long)timeRemaining;
-(void)setTimeRemaining:(unsigned long long)arg1 ;
-(int)expectedLength;
-(void)setBytesReceived:(int)arg1 ;
-(int)bytesReceived;
-(void)setExpectedLength:(int)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(NSInputStream *)stream;
-(void)setFile:(NSFileHandle *)arg1 ;
-(NSFileHandle *)file;
-(void)setStream:(NSInputStream *)arg1 ;
@end
