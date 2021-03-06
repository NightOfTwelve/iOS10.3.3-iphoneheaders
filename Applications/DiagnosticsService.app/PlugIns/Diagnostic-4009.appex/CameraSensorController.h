/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4009.appex/Diagnostic-4009
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DKDiagnosticController.h>

@class CameraSensorInputs;

@interface CameraSensorController : DKDiagnosticController {

	int _soloFrameCount;
	int _alphaSyncFrameCount;
	int _bravoSyncFrameCount;
	CameraSensorInputs* _inputs;

}

@property (assign,nonatomic) int soloFrameCount;                       //@synthesize soloFrameCount=_soloFrameCount - In the implementation block
@property (assign,nonatomic) int alphaSyncFrameCount;                  //@synthesize alphaSyncFrameCount=_alphaSyncFrameCount - In the implementation block
@property (assign,nonatomic) int bravoSyncFrameCount;                  //@synthesize bravoSyncFrameCount=_bravoSyncFrameCount - In the implementation block
@property (nonatomic,retain) CameraSensorInputs * inputs;              //@synthesize inputs=_inputs - In the implementation block
-(void)runCameraTest;
-(void)runLegacyCameraTest;
-(void)setSoloFrameCount:(int)arg1 ;
-(void)setAlphaSyncFrameCount:(int)arg1 ;
-(void)setBravoSyncFrameCount:(int)arg1 ;
-(char)setCameraProperties:(id)arg1 error:(id*)arg2 ;
-(char)syncAndStreamCameras:(id)arg1 bravo:(id)arg2 error:(id*)arg3 ;
-(char)streamCamera:(id)arg1 error:(id*)arg2 ;
-(int)alphaSyncFrameCount;
-(int)bravoSyncFrameCount;
-(int)soloFrameCount;
-(char)enableCameraMaxDataRate:(id)arg1 error:(id*)arg2 ;
-(char)enableCameraTestPatternPN9:(id)arg1 error:(id*)arg2 ;
-(void)start;
-(void)setInputs:(CameraSensorInputs *)arg1 ;
-(CameraSensorInputs *)inputs;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2 ;
@end

