/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSMutableArray, AVCaptureDevice, AVWeakReference, AVCaptureInputPort, NSArray, NSString;

@interface AVCaptureConnectionInternal : NSObject {

	NSMutableArray* inputPorts;
	AVCaptureDevice* sourceDevice;
	AVWeakReference* outputWeakReference;
	AVWeakReference* videoPreviewLayerWeakReference;
	char hasActiveObservers;
	char active;
	char enabled;
	int changeSeed;
	AVCaptureInputPort* audioInputPort;
	NSMutableArray* audioChannels;
	NSArray* audioChannelLevels;
	long long lastGetAudioLevelsTime;
	AVCaptureInputPort* videoInputPort;
	AVCaptureInputPort* metadataInputPort;
	AVCaptureInputPort* metadataItemInputPort;
	char videoMirroringSupported;
	char automaticallyAdjustsVideoMirroring;
	char videoMirrored;
	char videoOrientationSupported;
	int videoOrientation;
	SCD_Struct_AV2 videoMinFrameDuration;
	SCD_Struct_AV2 videoMaxFrameDuration;
	float videoMaxScaleAndCropFactor;
	float videoScaleAndCropFactor;
	int videoRetainedBufferCountHint;
	int preferredVideoStabilizationMode;
	char videoStabilizationEnabled;
	int activeVideoStabilizationMode;
	char hasVideoMinFrameDurationObserver;
	NSString* connectionID;

}
@end
