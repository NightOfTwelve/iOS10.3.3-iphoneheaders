/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/Support/CloudPhotoDerivativeGenerator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoDerivativeGenerator/CloudPhotoDerivativeGenerator-Structs.h>
#import <CoreFoundation/NSData.h>

@interface IOSurfaceData : NSData {

	IOSurfaceRef _surface;
	const void* _bytes;
	unsigned _length;

}
-(void)dealloc;
-(unsigned)length;
-(const void*)bytes;
-(id)initWithIOSurface:(void*)arg1 length:(unsigned)arg2 ;
@end
