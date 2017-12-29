/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@protocol BWDetectedFacesFilterDelegate, OS_dispatch_group, OS_dispatch_queue;
@class BWFigVideoCaptureDevice, BWFigVideoCaptureStream, NSArray, BWNodeOutput, NSDictionary, BWDeferredMetadataCache, NSMutableDictionary, BWDetectedFacesRingBuffer, NSObject, BWMotionDataPreserver, NSString;

@interface BWMultiStreamCameraSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	BWFigVideoCaptureDevice* _captureDevice;
	BWFigVideoCaptureStream* _captureStream;
	OpaqueFigCaptureStreamRef _stream;
	NSArray* _supportedFormats;
	BWNodeOutput* _previewOutput;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BWNodeOutput* _detectedFacesOutput;
	NSDictionary* _videoCaptureOutputColorInfoOverride;
	char _previewOutputEnabled;
	char _videoCaptureOutputEnabled;
	char _stillImageOutputEnabled;
	char _videoCaptureOutputPixelBufferAttachmentModificationAllowed;
	char _detectedFacesOutputEnabled;
	int _clientSpecifiedFormatIndex;
	int _resolvedFormatIndex;
	int _streamFormatIndex;
	char _resolvedFormatIndexUpToDate;
	SCD_Struct_BW12 _sensorCropDimensions;
	SCD_Struct_BW12 _cropAspectRatio;
	unsigned long _videoPixelFormat;
	SCD_Struct_BW12 _videoCaptureDimensions;
	SCD_Struct_BW12 _preferredPreviewDimensions;
	int _colorSpaceProperties;
	char _stillImageOutputSushiRawAttachmentOptionEnabled;
	char _usesFirmwareStillImageOutput;
	int _firmwareStillImageOutputRetainedBufferCountOverride;
	char _reflectsStillsOnStreamingOutputs;
	int _currentFirmwareStillImageOutputRetainedBufferCount;
	char _usesISPBackEndScalers;
	char _usesIntermediateTapForPreview;
	char _quadraHighResStillImageCaptureEnabled;
	SCD_Struct_BW12 _quadraCropDimensions;
	NSDictionary* _qHDRSensorDefectivePixelInfo;
	OpaqueFigCaptureISPProcessingSessionRef _bayerProcessingSession;
	OpaqueFigSampleBufferProcessorRef _qrmSampleBufferProcessor;
	opaqueCMFormatDescriptionRef _quadraStillOutputFormatDescription;
	opaqueCMSimpleQueueRef _quadraYUVBufferQueue;
	CGSize _overscanPercentage;
	char _cropsOverscanFromFirmwareStillImageOutput;
	SCD_Struct_BW12 _firmwareStillImageDimensionsAfterOverscanCropping;
	char _videoStabilizationEnabled;
	float _overscanPercentageForZoom;
	float _bravoShiftMitigationMaxZoomFactor;
	char _discardsUnstableSphereVideoFrames;
	char _temporalNoiseReductionEnabled;
	char _chromaNoiseReductionEnabled;
	float _aeMaxGain;
	int _maxIntegrationTimeOverride;
	float _minFrameRate;
	float _maxFrameRate;
	NSDictionary* _detectedFacesOutputConfiguration;
	id<BWDetectedFacesFilterDelegate> _detectedFacesFilterDelegate;
	int _motionAttachmentsSource;
	char _deferMetadataCreation;
	char _deferProcessingSessionMetadataCreation;
	BWDeferredMetadataCache* _deferredMetadataCache;
	NSMutableDictionary* _dutyCycleMetadataCache;
	BWDetectedFacesRingBuffer* _detectedFacesRingBuffer;
	CGSize _onDemandStillOverscanPercentage;
	NSObject*<OS_dispatch_group> _streamEventNotificationGroup;
	NSObject*<OS_dispatch_queue> _streamEventDispatchQueue;
	BWStreamOutputStorage* _outputsStorage[6];
	OpaqueVTPixelTransferSessionRef _stillReflectionTransferSession;
	opaqueCMFormatDescriptionRef _stillReflectionFormatDescription;
	OpaqueVTPixelTransferSessionRef _stillReflectionSecondaryTransferSession;
	opaqueCMFormatDescriptionRef _stillReflectionSecondaryFormatDescription;
	float _pixelsPerMicron;
	unsigned _bravoShiftCorrectionFlags;
	BWMotionDataPreserver* _motionDataPreserver;

}

@property (readonly) BWNodeOutput * previewOutput; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWFigVideoCaptureStream * captureStream; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride; 
@property (assign,nonatomic) char videoCaptureOutputPixelBufferAttachmentModificationAllowed; 
+(void)initialize;
+(id)cameraSourceNodeWithCaptureDevice:(id)arg1 captureStream:(id)arg2 ;
-(void)dealloc;
-(id)nodeSubType;
-(BWNodeOutput *)videoCaptureOutput;
-(int)colorSpaceProperties;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setOverscanPercentage:(CGSize)arg1 ;
-(long)prepareForStillImageCaptureWithFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(char)arg3 ;
-(char)usesFirmwareStillImageOutput;
-(char)usesISPBackEndScalers;
-(SCD_Struct_BW12)firmwareStillImageDimensionsAfterOverscanCropping;
-(BWFigVideoCaptureStream *)captureStream;
-(char)usesIntermediateTapForPreview;
-(void)setFormatIndex:(int)arg1 ;
-(char)quadraHighResStillImageCaptureEnabled;
-(void)setUsesFirmwareStillImageOutput:(char)arg1 ;
-(void)setQuadraCropDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setQHDRSensorDefectivePixelInfo:(id)arg1 ;
-(void)setBayerProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 ;
-(SCD_Struct_BW12)sensorCropDimensions;
-(void)setSensorCropDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setCropAspectRatio:(SCD_Struct_BW12)arg1 ;
-(void)setVideoStabilizationEnabled:(char)arg1 ;
-(void)setVideoCaptureDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setVideoPixelFormat:(unsigned long)arg1 ;
-(void)setUsesIntermediateTapForPreview:(char)arg1 ;
-(void)setUsesISPBackEndScalers:(char)arg1 ;
-(void)setCropsOverscanFromFirmwareStillImageOutput:(char)arg1 ;
-(char)videoStabilizationEnabled;
-(void)setBravoShiftMitigationMaxZoomFactor:(float)arg1 ;
-(void)setOverscanPercentageForZoom:(float)arg1 ;
-(void)setPreferredPreviewDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setPreviewOutputEnabled:(char)arg1 ;
-(void)setStillImageOutputEnabled:(char)arg1 ;
-(void)setVideoCaptureOutputEnabled:(char)arg1 ;
-(void)setDetectedFacesOutputEnabled:(char)arg1 ;
-(void)setDetectedFacesOutputConfiguration:(id)arg1 ;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(void)setMinFrameRate:(float)arg1 ;
-(void)setMaxFrameRate:(float)arg1 ;
-(void)setDiscardsUnstableSphereVideoFrames:(char)arg1 ;
-(void)setReflectsStillsOnStreamingOutputs:(char)arg1 ;
-(void)setTemporalNoiseReductionEnabled:(char)arg1 ;
-(void)setAeMaxGain:(float)arg1 ;
-(int)maxIntegrationTimeOverride;
-(void)setMaxIntegrationTimeOverride:(int)arg1 ;
-(void)setColorSpaceProperties:(int)arg1 ;
-(long)updateOutputRequirements;
-(float)aeMaxGain;
-(void)willStop;
-(char)previewOutputEnabled;
-(BWNodeOutput *)previewOutput;
-(char)videoCaptureOutputEnabled;
-(char)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(void)setDetectedFacesFilterDelegate:(id)arg1 ;
-(char)stillImageOutputEnabled;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)setStillImageOutputSushiRawAttachmentOptionEnabled:(char)arg1 ;
-(void)setFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(char)arg1 ;
-(void)setVideoCaptureOutputColorInfoOverride:(NSDictionary *)arg1 ;
-(void)makeCurrentConfigurationLive;
-(char)hasNonLiveConfigurationChanges;
-(long)_bringStreamUpToDate;
-(void)_registerForStreamNotifications;
-(void)_unregisterFromStreamNotifications;
-(void)_updateMetadataConfigurations;
-(void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(int)arg1 ;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(char)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
-(int)motionAttachmentsSource;
-(char)temporalNoiseReductionEnabled;
-(char)chromaNoiseReductionEnabled;
-(id)_initWithCaptureDevice:(id)arg1 captureStream:(id)arg2 ;
-(void)_registerStreamOutputHandlers;
-(int)_firmwareStillImageOutputRetainedBufferCountForClientBracketCount:(int)arg1 ;
-(id)_streamOutputIDForOnDemandStills;
-(id)_streamOutputIDForPreview;
-(id)_videoFormatRequirementsForOutputID:(id)arg1 configuration:(id)arg2 ;
-(long)_verifyColorSpaceProperties:(int)arg1 matchVideoOutputsColorInfo:(id)arg2 forOutputID:(id)arg3 ;
-(id)_streamOutputIDForCapture;
-(id)_colorInfoForOutputID:(id)arg1 videoOutputsColorInfo:(id)arg2 ;
-(id)_enabledNodeOutputsDrivenByThePrimaryStreamingOutput;
-(void)_enableStreamOutputs;
-(long)_setupBayerProcessingSessionForQuadraStillImageCaptures;
-(void)_flushOutRemainingBuffers;
-(void)_markEndOfLiveOutput;
-(long)_setupQRMSampleBufferProcessor;
-(long)_updateFormatIndex;
-(void)_updateOutputsStorage;
-(long)_updateOutputConfigurations;
-(char)_shouldEnableStreamCaptureOutput;
-(char)_shouldEnableStreamPreviewOutput;
-(char)_requiresOneStreamingOutputForMetadata;
-(void)_serviceZoomForPTS:(SCD_Struct_BW2)arg1 ;
-(float)_ispAppliedZoomFactorFromSampleBufferMetadataDictionary:(id)arg1 outputIndex:(int)arg2 ;
-(CGPoint)_bravoShiftMitigationCropOffset:(opaqueCMSampleBufferRef)arg1 totalZoom:(float)arg2 ;
-(int)formatIndex;
-(SCD_Struct_BW12)cropAspectRatio;
-(unsigned long)videoPixelFormat;
-(SCD_Struct_BW12)videoCaptureDimensions;
-(SCD_Struct_BW12)preferredPreviewDimensions;
-(char)stillImageOutputSushiRawAttachmentOptionEnabled;
-(int)firmwareStillImageOutputRetainedBufferCountOverride;
-(char)reflectsStillsOnStreamingOutputs;
-(SCD_Struct_BW12)quadraCropDimensions;
-(id)qHDRSensorDefectivePixelInfo;
-(OpaqueFigCaptureISPProcessingSessionRef)bayerProcessingSession;
-(CGSize)overscanPercentage;
-(char)cropsOverscanFromFirmwareStillImageOutput;
-(float)overscanPercentageForZoom;
-(float)bravoShiftMitigationMaxZoomFactor;
-(id)detectedFacesOutputConfiguration;
-(id)detectedFacesFilterDelegate;
-(char)discardsUnstableSphereVideoFrames;
-(void)_reflectStillSampleBufferOnStreamingOutputs:(opaqueCMSampleBufferRef)arg1 captureType:(int)arg2 ;
-(void)_preserveMotionDataForSoonToBeDroppedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_prependPreservedMotionDataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CGRect)_updateZoomForOutputIndex:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(OpaqueCMClockRef)clock;
-(void)setQuadraHighResStillImageCaptureEnabled:(char)arg1 ;
-(void)setChromaNoiseReductionEnabled:(char)arg1 ;
-(char)start:(id*)arg1 ;
-(char)stop:(id*)arg1 ;
-(BWNodeOutput *)stillImageOutput;
-(BWFigVideoCaptureDevice *)captureDevice;
-(float)minFrameRate;
-(float)maxFrameRate;
@end
