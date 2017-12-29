/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <com.apple.podcasts.SpotlightIndexExtension/IMVideoOverlayDelegate.h>

@protocol OS_dispatch_source, IMVideoViewControllerDelegate;
@class IMVideoPlaybackInlineView, IMVideoPlaybackOverlayView, NSObject, UITapGestureRecognizer, IMAVPlayer, IMPlayerItem, NSString;

@interface IMVideoViewController : UIViewController <IMVideoOverlayDelegate> {

	IMVideoPlaybackInlineView* _videoInlineView;
	IMVideoPlaybackOverlayView* _videoOverlayView;
	NSObject*<OS_dispatch_source> _videoOverlayViewIdleTimer;
	UITapGestureRecognizer* _tap;
	char _canShowControlsOverlay;
	char _controlsOverlayVisible;
	char _canShowInlineOverlay;
	char _inlineOverlayVisible;
	IMAVPlayer* _player;
	IMPlayerItem* _item;
	id<IMVideoViewControllerDelegate> _videoViewControllerDelegate;

}

@property (nonatomic,retain) IMAVPlayer * player;                                                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) IMPlayerItem * item;                                                               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<IMVideoViewControllerDelegate> videoViewControllerDelegate;              //@synthesize videoViewControllerDelegate=_videoViewControllerDelegate - In the implementation block
@property (assign,nonatomic) char canShowControlsOverlay;                                                       //@synthesize canShowControlsOverlay=_canShowControlsOverlay - In the implementation block
@property (assign,nonatomic) char controlsOverlayVisible;                                                       //@synthesize controlsOverlayVisible=_controlsOverlayVisible - In the implementation block
@property (assign,nonatomic) char canShowInlineOverlay;                                                         //@synthesize canShowInlineOverlay=_canShowInlineOverlay - In the implementation block
@property (assign,nonatomic) char inlineOverlayVisible;                                                         //@synthesize inlineOverlayVisible=_inlineOverlayVisible - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)videoInlineView;
-(void)_toggleOverlayVisibile;
-(void)_enablePIP:(id)arg1 ;
-(char)canShowInlineOverlay;
-(void)_startIdleTimer:(double)arg1 ;
-(void)setInlineOverlayVisible:(char)arg1 ;
-(id<IMVideoViewControllerDelegate>)videoViewControllerDelegate;
-(id)initWithItem:(id)arg1 andPlayer:(id)arg2 ;
-(void)setCanShowInlineOverlay:(char)arg1 ;
-(void)setVideoViewControllerDelegate:(id<IMVideoViewControllerDelegate>)arg1 ;
-(char)inlineOverlayVisible;
-(void)traitCollectionDidChange:(id)arg1 ;
-(IMPlayerItem *)item;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setItem:(IMPlayerItem *)arg1 ;
-(void)setCanShowControlsOverlay:(char)arg1 ;
-(char)canShowControlsOverlay;
-(void)setControlsOverlayVisible:(char)arg1 animate:(char)arg2 ;
-(char)controlsOverlayVisible;
-(id)videoOverlayView;
-(void)setControlsOverlayVisible:(char)arg1 animate:(char)arg2 force:(char)arg3 ;
-(void)setControlsOverlayVisible:(char)arg1 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlayTappedPictureInPictureButton:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(unsigned)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(unsigned)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(unsigned)arg2 ;
-(IMAVPlayer *)player;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(void)_cancelIdleTimer;
@end
