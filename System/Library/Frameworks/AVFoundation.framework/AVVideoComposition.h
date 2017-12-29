/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVVideoCompositionInternal, NSString, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {

	AVVideoCompositionInternal* _videoComposition;

}

@property (nonatomic,readonly) NSString * colorPrimaries; 
@property (nonatomic,readonly) NSString * colorYCbCrMatrix; 
@property (nonatomic,readonly) NSString * colorTransferFunction; 
@property (nonatomic,readonly) int sourceTrackIDForFrameTiming; 
@property (nonatomic,readonly) Class customVideoCompositorClass; 
@property (nonatomic,readonly) SCD_Struct_AV2 frameDuration; 
@property (nonatomic,readonly) CGSize renderSize; 
@property (nonatomic,readonly) float renderScale; 
@property (nonatomic,copy,readonly) NSArray * instructions; 
@property (nonatomic,retain,readonly) AVVideoCompositionCoreAnimationTool * animationTool; 
+(void)initialize;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2 ;
+(id)_mutableVideoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
+(id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)renderSize;
-(char)_isValidReturningExceptionReason:(id*)arg1 ;
-(float)renderScale;
-(char)_copyFigVideoCompositor:(const void*)arg1 andSession:(id*)arg2 recyclingSession:(id)arg3 forFigRemaker:(char)arg4 error:(id*)arg5 ;
-(SCD_Struct_AV2)frameDuration;
-(int)sourceTrackIDForFrameTiming;
-(id)_serializableInstructions;
-(AVVideoCompositionCoreAnimationTool *)animationTool;
-(unsigned)_changeSeed;
-(void)videoCompositionOutputColorPropertiesWithCustomCompositor:(id)arg1 formatDescriptions:(id)arg2 colorPrimaries:(id*)arg3 transferFunction:(id*)arg4 yCbCrMatrix:(id*)arg5 ;
-(char)isValidForAsset:(id)arg1 timeRange:(SCD_Struct_AV3)arg2 validationDelegate:(id)arg3 ;
-(char)_hasLayerAsAuxiliaryTrack;
-(id)_auxiliaryTrackLayer;
-(char)_hasPostProcessingLayers;
-(id)_postProcessingRootLayer;
-(int)_auxiliaryTrackID;
-(id)_postProcessingVideoLayers;
-(id)builtInCompositorName;
-(NSString *)colorPrimaries;
-(NSString *)colorYCbCrMatrix;
-(NSString *)colorTransferFunction;
-(void)setBuiltInCompositorName:(id)arg1 ;
-(Class)customVideoCompositorClass;
-(void)setCustomVideoCompositorClass:(Class)arg1 ;
-(void)setFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)setRenderScale:(float)arg1 ;
-(void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg1 ;
-(void)_bumpChangeSeed;
-(id)_postProcessingVideoLayer;
-(id)instructionForFigInstruction:(void*)arg1 ;
-(void)_setFrameDurationForFrameRate:(float)arg1 ;
-(NSArray *)instructions;
-(void)setInstructions:(NSArray *)arg1 ;
-(void)setSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)setColorPrimaries:(NSString *)arg1 ;
-(void)setColorYCbCrMatrix:(NSString *)arg1 ;
-(void)setColorTransferFunction:(NSString *)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(void)finalize;
@end
