/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRTexture, MRImageManager;

@interface MRTextureSource : NSObject {

	MRTexture* _texture;
	SCD_Struct_MR15 _textureOptions;
	unsigned long _pixelFormat;
	float _color[4];
	CVBufferRef _cvPixelBuffer;
	CGContextRef _cgContext;
	CGColorSpaceRef _colorspace;
	CGImageRef _cgImage;
	void** _datas[3];
	unsigned _dataSize;
	unsigned long _dataRowBytes;
	unsigned long _dataWidth;
	unsigned long _dataHeight;
	char _ownsData;
	unsigned char _orientation;
	CVBufferRef _cvTexture;
	char _isPremultiplied;
	char _isOpaque;
	char _wantsSharedTexture;
	MRImageManager* _imageManager;
	NSRange _size;

}

@property (readonly) MRImageManager * imageManager;                //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) NSRange size;                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) char wantsSharedTexture;              //@synthesize wantsSharedTexture=_wantsSharedTexture - In the implementation block
@property (readonly) SCD_Struct_MR15* textureOptions; 
@property (readonly) MRTexture * texture; 
-(id)initWithCGContext:(CGContextRef)arg1 imageManager:(id)arg2 ;
-(id)initWithSize:(NSRange)arg1 andColor:(const float*)arg2 imageManager:(id)arg3 ;
-(id)initWithCGContext:(CGContextRef)arg1 size:(NSRange)arg2 imageManager:(id)arg3 ;
-(SCD_Struct_MR15*)textureOptions;
-(void)addOverlayForROI:(id)arg1 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 size:(NSRange)arg2 orientation:(int)arg3 imageManager:(id)arg4 monochromatic:(char)arg5 ;
-(char)wantsSharedTexture;
-(id)initWithCGImage:(CGImageRef)arg1 textureSize:(NSRange)arg2 orientation:(int)arg3 imageManager:(id)arg4 monochromatic:(char)arg5 ;
-(void)setWantsSharedTexture:(char)arg1 ;
-(void)generateMipmap;
-(id)initWithCVTexture:(CVBufferRef)arg1 size:(NSRange)arg2 orientation:(int)arg3 imageManager:(id)arg4 monochromatic:(char)arg5 ;
-(NSRange)size;
-(void)dealloc;
-(void)cleanup;
-(MRTexture *)texture;
-(MRImageManager *)imageManager;
@end

