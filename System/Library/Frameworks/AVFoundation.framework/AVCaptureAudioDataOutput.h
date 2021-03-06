/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureAudioDataOutputInternal;

@interface AVCaptureAudioDataOutput : AVCaptureOutput {

	AVCaptureAudioDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)supportedAssetWriterOutputFileTypes;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id<AVCaptureAudioDataOutputSampleBufferDelegate>)sampleBufferDelegate;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
@end

