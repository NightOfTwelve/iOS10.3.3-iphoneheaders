/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate_WebKitOnly.h>

@class NSString;

@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly> {

	RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit>* _fullscreenInterface;

}

@property (assign) WebVideoFullscreenInterfaceAVKit* fullscreenInterface; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WebVideoFullscreenInterfaceAVKit*)fullscreenInterface;
-(void)setFullscreenInterface:(WebVideoFullscreenInterfaceAVKit*)arg1 ;
-(void)playerViewControllerFailedToStartPictureInPicture:(id)arg1 withError:(id)arg2 ;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1 ;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(char)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(int)arg2 ;
@end
