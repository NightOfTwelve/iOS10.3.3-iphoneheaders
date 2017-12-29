/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, AVCaptureConnection, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {

	AVCaptureVideoPreviewLayerInternal* _internal;

}

@property (nonatomic,retain) AVCaptureSession * session; 
@property (nonatomic,readonly) AVCaptureConnection * connection; 
@property (copy) NSString * videoGravity; 
@property (getter=isOrientationSupported,nonatomic,readonly) char orientationSupported; 
@property (assign,nonatomic) int orientation; 
@property (getter=isMirroringSupported,nonatomic,readonly) char mirroringSupported; 
@property (assign,nonatomic) char automaticallyAdjustsMirroring; 
@property (assign,getter=isMirrored,nonatomic) char mirrored; 
+(void)initialize;
+(id)layerWithSession:(id)arg1 ;
+(id)layerWithSessionWithNoConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(id)_input;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPaused:(char)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(AVCaptureConnection *)connection;
-(char)isPaused;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(int)changeSeed;
-(id)sinkID;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)bumpChangeSeed;
-(void)setSinkID:(id)arg1 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)liveConnections;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(float)previewRotationDegrees;
-(char)automaticallyAdjustsMirroring;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(id)_initWithSession:(id)arg1 makeConnection:(char)arg2 ;
-(void)centerSublayer:(int)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(char)_automaticallyAdjustsMirroring;
-(char)_isMirrored;
-(void)_updatePreviewTransforms;
-(char)isMirroringSupported;
-(char)isChromaNoiseReductionSupported;
-(void)_setSensorAndEstimatedPreviewSizes;
-(void)_updateCaptureDeviceTransform;
-(char)isOrientationSupported;
-(void)setAutomaticallyAdjustsMirroring:(char)arg1 ;
-(void)setMirrored:(char)arg1 ;
-(char)isChromaNoiseReductionEnabled;
-(void)setChromaNoiseReductionEnabled:(char)arg1 ;
-(id)activeConnections;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(id)connections;
-(NSString *)videoGravity;
-(char)isMirrored;
-(int)_orientation;
-(id)initWithSession:(id)arg1 ;
-(AVCaptureSession *)session;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
@end
