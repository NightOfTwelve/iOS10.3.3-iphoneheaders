/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/AXSpeechAssetUpdater.axuiservice/AXSpeechAssetUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSpeechDelegate <NSObject>
@optional
-(void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1;
-(void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
-(void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2;
-(void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg1;
-(void)assistantConnection:(id)arg1 speechRecordingPerformTwoShotPromptWithType:(int)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
-(void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
-(void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
-(void)assistantConnection:(id)arg1 recognizedAdditionalSpeechInterpretation:(id)arg2 refId:(id)arg3;
-(void)assistantConnection:(id)arg1 recognitionUpdateWithPhrases:(id)arg2 utterances:(id)arg3 refId:(id)arg4;
-(void)assistantConnection:(id)arg1 recognitionUpdateDidFinishWithError:(id)arg2;
-(void)assistantConnection:(id)arg1 recognitionUpdateWillBeginForTask:(id)arg2;
-(void)assistantConnection:(id)arg1 recognitionWithPhrases:(id)arg2 utterances:(id)arg3;
-(void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;

@end

