/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSCNNKernel.h>

@interface MPSCNNLocalContrastNormalization : MPSCNNKernel {

	unsigned _kernelWidth;
	unsigned _kernelHeight;
	float _alpha;
	float _beta;
	float _delta;
	float _p0;
	float _pm;
	float _ps;

}

@property (assign,nonatomic) float alpha;                          //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;                           //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float delta;                          //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) float p0;                             //@synthesize p0=_p0 - In the implementation block
@property (assign,nonatomic) float pm;                             //@synthesize pm=_pm - In the implementation block
@property (assign,nonatomic) float ps;                             //@synthesize ps=_ps - In the implementation block
@property (nonatomic,readonly) unsigned kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(float)beta;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned)arg2 kernelHeight:(unsigned)arg3 ;
-(unsigned)kernelWidth;
-(unsigned)kernelHeight;
-(void)setP0:(float)arg1 ;
-(float)pm;
-(void)setPm:(float)arg1 ;
-(float)ps;
-(void)setPs:(float)arg1 ;
-(void)setBeta:(float)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(float)alpha;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(float)p0;
-(id)initWithDevice:(id)arg1 ;
@end

