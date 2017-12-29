/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@class MPSImageConvolution;

@interface MPSImageBox : MPSUnaryImageKernel {

	unsigned _kernelWidth;
	unsigned _kernelHeight;
	unsigned filterInfoH;
	unsigned filterInfoV;
	MPSImageConvolution* hPass;
	MPSImageConvolution* vPass;

}

@property (nonatomic,readonly) unsigned kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned)arg2 kernelHeight:(unsigned)arg3 ;
-(unsigned)kernelWidth;
-(unsigned)kernelHeight;
-(void)initFilterInfo;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP1)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 ;
@end
