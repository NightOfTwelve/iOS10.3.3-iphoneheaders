/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoDataOutputInternal, NSDictionary, NSArray;

@interface AVCaptureVideoDataOutput : AVCaptureOutput {

	AVCaptureVideoDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSArray * availableVideoCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
@property (assign,nonatomic) SCD_Struct_AV2 minFrameDuration; 
@property (assign,nonatomic) char alwaysDiscardsLateVideoFrames; 
+(void)initialize;
+(id)supportedVideoSettingsKeys;
-(int)outputFormat;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SCD_Struct_AV2)minFrameDuration;
-(id)supportedAssetWriterOutputFileTypes;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(char)alwaysDiscardsLateVideoFrames;
-(char)usesPreviewSizedBuffers;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(NSArray *)availableVideoCodecTypes;
-(char)hasRequiredOutputFormatForConnection:(id)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(char)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(char)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(unsigned long)requiredOutputFormatForConnection:(id)arg1 ;
-(id)outputScalingModeForSourceFormat:(id)arg1 ;
-(id)vettedVideoSettingsForSettingsDictionary:(id)arg1 ;
-(NSArray *)availableVideoCVPixelFormatTypes;
-(void)_setMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(void)setMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(NSDictionary *)videoSettings;
-(void)removeConnection:(id)arg1 ;
-(id<AVCaptureVideoDataOutputSampleBufferDelegate>)sampleBufferDelegate;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setVideoSettings:(NSDictionary *)arg1 ;
-(void)setAlwaysDiscardsLateVideoFrames:(char)arg1 ;
@end

