/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLTextureArgument : MTLArgumentInternal {

	unsigned _textureType : 15;
	unsigned _isDepthTexture : 1;
	unsigned short _textureDataType;
	unsigned short _textureArrayLength;

}
-(id)formattedDescription:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 access:(unsigned)arg2 isActive:(char)arg3 locationIndex:(unsigned)arg4 arraySize:(unsigned)arg5 dataType:(unsigned)arg6 textureType:(unsigned)arg7 isDepthTexture:(BOOL)arg8 ;
-(char)isDepthTexture;
-(unsigned)textureDataType;
-(unsigned)textureType;
-(unsigned)arrayLength;
@end

