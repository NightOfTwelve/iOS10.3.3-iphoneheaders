/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLStencilDescriptor, NSString;

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>

@property (readonly) const MTLDepthStencilDescriptorPrivate* depthStencilPrivate; 
@property (assign,nonatomic) unsigned depthCompareFunction; 
@property (assign,getter=isDepthWriteEnabled,nonatomic) char depthWriteEnabled; 
@property (nonatomic,copy) MTLStencilDescriptor * frontFaceStencil; 
@property (nonatomic,copy) MTLStencilDescriptor * backFaceStencil; 
@property (nonatomic,copy) NSString * label; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

