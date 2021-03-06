/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/DigitalTouchBalloonProvider-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <DigitalTouchBalloonProvider/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <DigitalTouchBalloonProvider/AVCapturePhotoCaptureDelegate.h>

@protocol OS_dispatch_queue, ETVideoControllerDelegate;
@class AVCaptureSession, AVCaptureConnection, AVAssetWriter, NSObject, AVAssetWriterInput, AVCaptureVideoDataOutput, AVCaptureAudioDataOutput, NSURL, NSString, AVCapturePhotoOutput, UIImage, NSData, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer, AVCaptureDevice;

@interface ETVideoController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCapturePhotoCaptureDelegate> {

	AVCaptureSession* _captureSession;
	SCD_Struct_ET9 _captureSessionStartTime;
	AVCaptureConnection* _audioConnection;
	char _canWrite;
	AVAssetWriter* _writer;
	NSObject*<OS_dispatch_queue> _writerQueue;
	AVAssetWriterInput* _videoWriterInput;
	AVCaptureVideoDataOutput* _videoDataOutput;
	AVAssetWriterInput* _audioWriterInput;
	AVCaptureAudioDataOutput* _audioDataOutput;
	NSURL* _fileURL;
	NSString* _fileUUID;
	AVCapturePhotoOutput* _photoOutput;
	UIImage* _photoImage;
	NSData* _photoData;
	AVCaptureDeviceInput* _videoDeviceInput;
	char _isTogglingCamera;
	char _isChangingOrientation;
	AVCaptureVideoPreviewLayer* _previewLayer;
	NSObject*<OS_dispatch_queue> _previewQueue;
	id<ETVideoControllerDelegate> _delegate;
	unsigned _videoState;
	AVCaptureDevice* _videoDevice;
	SCD_Struct_ET9 _writeStartTime;

}

@property (assign,nonatomic,__weak) id<ETVideoControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned videoState;                                      //@synthesize videoState=_videoState - In the implementation block
@property (nonatomic,readonly) AVCaptureDevice * videoDevice;                            //@synthesize videoDevice=_videoDevice - In the implementation block
@property (nonatomic,readonly) SCD_Struct_ET9 writeStartTime;                            //@synthesize writeStartTime=_writeStartTime - In the implementation block
@property (nonatomic,readonly) double currentFrameIntervalSinceFirstFrame; 
@property (nonatomic,readonly) double timeSinceStartOfPreview; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteWrittenAssets;
-(double)currentFrameIntervalSinceFirstFrame;
-(void)_addCaptureSessionObservers;
-(id)_urlWithFormat:(id)arg1 ;
-(id)_videoCaptureDeviceAtPosition:(int)arg1 ;
-(id)initWithMessageIdentifier:(id)arg1 ;
-(void)_createWriter;
-(void)_previewInterruptedNotification:(id)arg1 ;
-(void)_updatePreviewOrientationWithSize:(CGSize)arg1 ;
-(void)_previewStartedNotification:(id)arg1 ;
-(unsigned)videoState;
-(void)_deleteAssetWithFormat:(id)arg1 ;
-(void)_setVideoState:(unsigned)arg1 ;
-(void)finishRecording;
-(void)writePhotoDataWithCompletion:(/*^block*/id)arg1 ;
-(double)timeSinceStartOfPreview;
-(void)_didReceiveCaptureSessionErrorNotification:(id)arg1 ;
-(void)_toggleCameraToPosition:(int)arg1 ;
-(SCD_Struct_ET9)writeStartTime;
-(void)setDelegate:(id<ETVideoControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ETVideoControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6 ;
-(void)startPreview;
-(void)stopPreview;
-(void)toggleCamera;
-(void)cancelRecording;
-(void)startRecording;
-(AVCaptureDevice *)videoDevice;
-(void)capturePhoto;
-(void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end

