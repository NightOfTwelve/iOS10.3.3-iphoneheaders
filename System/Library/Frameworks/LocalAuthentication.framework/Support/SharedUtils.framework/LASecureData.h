/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LASecureData : NSObject {

	unsigned _allocatedLength;
	void* _bytes;
	unsigned _bytesLength;

}
+(void)resetBytes:(void*)arg1 length:(unsigned)arg2 ;
+(id)secureDataWithString:(id)arg1 ;
+(id)secureDataWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)length;
-(void)reset;
-(const void*)bytes;
-(void)appendString:(id)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)initWithString:(id)arg1 ;
-(void)appendData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)prepareBuffer:(unsigned)arg1 ;
-(char)removeLastCharacter;
-(void)resize:(unsigned)arg1 ;
@end
