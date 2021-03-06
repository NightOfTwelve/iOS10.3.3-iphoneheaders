/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned threadExecutionWidth; 
@required
-(unsigned)threadExecutionWidth;
-(unsigned)maxTotalThreadsPerThreadgroup;
-(id<MTLDevice>)device;

@end

