/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKViewControllerAudioSupport.h>
#import <libobjc.A.dylib/OKVideoControllerDelegate.h>
#import <libobjc.A.dylib/OKWidgetEditable.h>
#import <libobjc.A.dylib/OKWidgetMediaViewProxyExports.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OFUIButton, UIImageView, NSURL, OKWidgetMediaVideoPlayerView, OKVideoPlayerController, AVAsset, NSString, OKAudioDucker, OFUIView;

@interface OKWidgetMediaViewProxy : OKWidgetView <OKViewControllerAudioSupport, OKVideoControllerDelegate, OKWidgetEditable, OKWidgetMediaViewProxyExports, UIGestureRecognizerDelegate> {

	OFUIButton* _videoPlayButton;
	UIImageView* _thumbnailView;
	UIEdgeInsets _mediaEdgeInsets;
	NSURL* _videoURL;
	OKWidgetMediaVideoPlayerView* _videoPlayerView;
	OKVideoPlayerController* _videoPlayerController;
	AVAsset* _videoAsset;
	char _disablePlayButton;
	float _rate;
	double _seekToTime;
	NSString* _didFinishPlayingActionScript;
	OKAudioDucker* _audioDucker;
	char _isVideoAssetLoaded;
	char _autoplay;
	char _loop;
	char _didPlayInteractively;
	char _shouldPlayVideoWhenAvailable;
	char _readyForDisplayAndPlay;
	float _requiredDuckLevel;
	float _volume;
	NSString* _audioTrackID;
	CGPoint _offset;
	CGPoint _originalOffsetWhilePanning;
	float _scale;
	char _editable;
	char _isEditingPanning;
	char _shouldFitRegionOfInterest;
	char _needsReloadThumbnail;
	OFUIView* _faceRect;
	float _reloadThumbnailContentProgress;

}

@property (assign,nonatomic) char shouldPlayVideoWhenAvailable;              //@synthesize shouldPlayVideoWhenAvailable=_shouldPlayVideoWhenAvailable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(char)shouldDrawRegionOfInterest;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)duration;
-(double)currentTime;
-(id)valueForUndefinedKey:(id)arg1 ;
-(char)prepareForDisplay:(char)arg1 ;
-(void)play;
-(char)canPerformAction:(id)arg1 ;
-(void)instantPause;
-(void)setVideoURL:(id)arg1 ;
-(void)setVideoAsset:(id)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(int)settingContentMode;
-(void)setSettingContentMode:(int)arg1 ;
-(void)setSettingAutoplay:(char)arg1 ;
-(char)settingLoop;
-(void)setSettingLoop:(char)arg1 ;
-(float)settingScale;
-(void)setSettingScale:(float)arg1 ;
-(char)prepareForWarmup:(char)arg1 ;
-(char)prepareForUnload:(char)arg1 ;
-(void)networkStatusDidChange:(int)arg1 ;
-(void)prepareForRefresh;
-(void)instantResume;
-(void)prepareForReload;
-(void)setPlaybackAudioVolume:(float)arg1 ;
-(void)beginFadingWithDuration:(double)arg1 ;
-(double)requiredDuckLevel;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(void)setSettingUrl:(id)arg1 ;
-(void)setSettingDisablePlayButton:(char)arg1 ;
-(id)settingUrl;
-(id)layoutSettingsKeys;
-(char)supportsReadiness;
-(void)setSettingAudioVolume:(float)arg1 ;
-(void)setSettingAudioRequiredDuckLevel:(float)arg1 ;
-(void)setAntialiasing:(char)arg1 ;
-(float)_localReadyProgress;
-(double)remainingPlayDuration;
-(id)_contentViewToFocus;
-(float)contentAspectRatio;
-(void)playVideo:(id)arg1 ;
-(void)_cancelThumbnailOperations;
-(void)_reloadThumbnailContent;
-(void)_unloadThumbnailContent;
-(void)_setVideoContentMode:(int)arg1 ;
-(void)calculateOffsetForRegionOfInterest;
-(void)updateOffset;
-(void)_reloadThumbnailContent:(char)arg1 loadVideo:(char)arg2 ;
-(void)drawRegionOfInterestContainerBounds;
-(void)resetVideo;
-(void)showVideoActivityIndicator:(char)arg1 ;
-(void)pauseVideo:(id)arg1 ;
-(void)_hideVideoButton;
-(void)_stopAudioDucking;
-(void)_setupVideoPlayButton;
-(void)_cleanupVideo;
-(void)_setupVideo;
-(void)hideThumbnailAndPlayVideo;
-(void)_showVideoButton;
-(void)setShouldPlayVideoWhenAvailable:(char)arg1 ;
-(void)_beginAudioDucking;
-(void)videoBecomesReady;
-(void)videoPlayerController:(id)arg1 didStartPlayingItem:(id)arg2 ;
-(void)videoPlayerController:(id)arg1 didFinishPlayingItem:(id)arg2 ;
-(void)videoPlayerController:(id)arg1 didFailToPlayItem:(id)arg2 ;
-(void)videoPlayerController:(id)arg1 bufferingStateDidChange:(unsigned)arg2 ;
-(char)endAllEditing:(char)arg1 ;
-(UIEdgeInsets)settingMediaEdgeInsets;
-(void)setSettingMediaEdgeInsets:(UIEdgeInsets)arg1 ;
-(char)settingsAutoplay;
-(double)settingSeekToTime;
-(void)setSettingSeekToTime:(double)arg1 ;
-(CGPoint)settingOffset;
-(void)setSettingOffset:(CGPoint)arg1 ;
-(void)setSettingShouldFitRegionOfInterest:(char)arg1 ;
-(char)settingShouldFitRegionOfInterest;
-(char)settingEditable;
-(void)setSettingEditable:(char)arg1 ;
-(void)setSettingDidFinishPlayingActionScript:(id)arg1 ;
-(void)_showVideoButtonWithDelay;
-(char)shouldPlayVideoWhenAvailable;
-(CGRect)thumbnailRect;
-(id)initWithWidget:(id)arg1 ;
@end
