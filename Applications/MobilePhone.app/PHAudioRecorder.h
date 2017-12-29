/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol PHAudioRecorderDelegate;
@class AVCaptureSession, AVCaptureMovieFileOutput, AVCaptureConnection, NSError, NSTimer, NSString;

@interface PHAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureMovieFileOutput* _captureFileOutput;
	AVCaptureConnection* _captureConnection;
	NSError* _buildCaptureSessionError;
	NSTimer* _updateTimer;
	char _isRecording;
	char _handlingStop;
	NSString* _outputFile;
	id<PHAudioRecorderDelegate> _audioRecorderDelegate;
	double _maxRecordedDuration;

}

@property (assign) char isRecording;                                               //@synthesize isRecording=_isRecording - In the implementation block
@property (readonly) AVCaptureSession * captureSession; 
@property (readonly) AVCaptureMovieFileOutput * captureFileOutput; 
@property (readonly) AVCaptureConnection * captureConnection; 
@property (readonly) NSError * buildCaptureSessionError;                           //@synthesize buildCaptureSessionError=_buildCaptureSessionError - In the implementation block
@property (assign) char handlingStop;                                              //@synthesize handlingStop=_handlingStop - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,retain) NSString * outputFile;                                //@synthesize outputFile=_outputFile - In the implementation block
@property (assign,nonatomic) double maxRecordedDuration;                           //@synthesize maxRecordedDuration=_maxRecordedDuration - In the implementation block
@property (assign) id<PHAudioRecorderDelegate> audioRecorderDelegate;              //@synthesize audioRecorderDelegate=_audioRecorderDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsRecording:(char)arg1 ;
-(id<PHAudioRecorderDelegate>)audioRecorderDelegate;
-(AVCaptureMovieFileOutput *)captureFileOutput;
-(void)_updateRecordProgress:(id)arg1 ;
-(void)_buildCaptureSessionAndOutputIfNecessary;
-(void)_captureSessionWasInterrupted:(id)arg1 ;
-(void)_captureSessionErrored:(id)arg1 ;
-(char)handlingStop;
-(void)setHandlingStop:(char)arg1 ;
-(char)startWithError:(id*)arg1 ;
-(void)setOutputFile:(NSString *)arg1 ;
-(AVCaptureConnection *)captureConnection;
-(NSError *)buildCaptureSessionError;
-(void)setAudioRecorderDelegate:(id<PHAudioRecorderDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(NSTimer *)updateTimer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(double)maxRecordedDuration;
-(char)isRecording;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(AVCaptureSession *)captureSession;
-(void)setMaxRecordedDuration:(double)arg1 ;
-(void)_stopWithError:(id)arg1 ;
-(NSString *)outputFile;
@end
