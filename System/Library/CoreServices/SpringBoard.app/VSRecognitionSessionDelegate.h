/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSRecognitionSessionDelegate <NSObject>
@optional
-(void)recognitionSessionDidBeginAction:(id)arg1;
-(char)recognitionSessionWillBeginAction:(id)arg1;
-(id)recognitionSession:(id)arg1 openURL:(id)arg2;
-(void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
-(void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;

@end
