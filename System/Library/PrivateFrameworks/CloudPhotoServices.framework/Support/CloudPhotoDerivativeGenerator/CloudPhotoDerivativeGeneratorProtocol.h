/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/Support/CloudPhotoDerivativeGenerator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CloudPhotoDerivativeGeneratorProtocol
@required
-(void)remoteStatusWithReply:(/*^block*/id)arg1;
-(void)remoteResizeImageAtURL:(id)arg1 destinationURL:(id)arg2 maximumPixelCount:(int)arg3 bakeInOrientation:(char)arg4 colorOutput:(int)arg5 reply:(/*^block*/id)arg6;
-(void)remoteGeneratePosterFrameForVideoAtURL:(id)arg1 maximumPixelCount:(int)arg2 destinationURL:(id)arg3 reply:(/*^block*/id)arg4;
-(void)remoteTranscodeVideoAtURL:(id)arg1 withAdjustmentsPropertyList:(id)arg2 destinationURL:(id)arg3 presetName:(id)arg4 outputFileType:(id)arg5 reply:(/*^block*/id)arg6;
-(void)remoteTerminateWithReply:(/*^block*/id)arg1;

@end

