/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSMutableArray, NSDictionary;

@interface AVCaptureStillImageOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* stillImageRequests;
	char squareCropEnabled;
	CGSize previewImageSize;
	unsigned long imageDataFormatType;
	float jpegQuality;
	char jpegQualitySpecified;
	int HDRCaptureMode;
	char EV0CaptureEnabled;
	char noiseReductionEnabled;
	char suspendsVideoProcessingDuringCapture;
	NSDictionary* outputSettings;
	char isCapturingPhoto;
	char rawCaptureEnabled;
	char SISSupported;
	char SISEnabled;
	char SISActive;
	char highResStillEnabled;
	unsigned long shutterSoundID;
	SCD_Struct_AV43 preparedBracket;
	NSMutableArray* prepareRequests;
	unsigned maxBracketedCaptureCount;
	char lensStabilizationDuringBracketedCaptureSupported;
	char lensStabilizationDuringBracketedCaptureEnabled;
	char bravoImageFusionSupported;

}
-(id)init;
-(void)dealloc;
@end
