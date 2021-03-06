/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4009.appex/Diagnostic-4009
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OSDCaptureDevice, OSDCamera;

@interface OSDCameraCenter : NSObject {

	OSDCaptureDevice* _device;
	OSDCamera* _backCamera;
	OSDCamera* _frontCamera;
	OSDCamera* _telephotoCamera;

}

@property (nonatomic,retain) OSDCaptureDevice * device;                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) OSDCamera * backCamera;                   //@synthesize backCamera=_backCamera - In the implementation block
@property (nonatomic,retain) OSDCamera * frontCamera;                  //@synthesize frontCamera=_frontCamera - In the implementation block
@property (nonatomic,retain) OSDCamera * telephotoCamera;              //@synthesize telephotoCamera=_telephotoCamera - In the implementation block
+(id)ispVersion;
+(BOOL)syncCameras:(id)arg1 slave:(id)arg2 skipSlaveFrames:(BOOL)arg3 enableSlaveOutput:(BOOL)arg4 error:(id*)arg5 ;
+(id)sharedCenter;
-(id)cameraForSource:(unsigned)arg1 error:(id*)arg2 ;
-(id)_backCamera:(id*)arg1 ;
-(id)_frontCameraWithDevice:(id)arg1 error:(id*)arg2 ;
-(id)_telephotoCameraWithDevice:(id)arg1 error:(id*)arg2 ;
-(OSDCamera *)backCamera;
-(void)setBackCamera:(OSDCamera *)arg1 ;
-(OSDCamera *)frontCamera;
-(void)setFrontCamera:(OSDCamera *)arg1 ;
-(OSDCamera *)telephotoCamera;
-(void)setTelephotoCamera:(OSDCamera *)arg1 ;
-(OSDCaptureDevice *)device;
-(void)setDevice:(OSDCaptureDevice *)arg1 ;
@end

