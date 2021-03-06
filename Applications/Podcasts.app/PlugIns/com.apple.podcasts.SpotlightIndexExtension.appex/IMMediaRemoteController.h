/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
@class IMAVPlayer, NSArray;

@interface IMMediaRemoteController : NSObject {

	IMAVPlayer* _player;
	NSArray* _supportedPlaybackRates;

}

@property (nonatomic,retain) IMAVPlayer * player;                           //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSArray * supportedPlaybackRates;              //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
-(int)remotePause:(id)arg1 ;
-(int)remotePlay:(id)arg1 ;
-(int)remoteStop:(id)arg1 ;
-(int)remoteTogglePlayPause:(id)arg1 ;
-(int)remoteSkipBackward:(id)arg1 ;
-(int)remoteSkipForward:(id)arg1 ;
-(int)remoteNextTrack:(id)arg1 ;
-(int)remotePreviousTrack:(id)arg1 ;
-(int)remoteSeekForward:(id)arg1 ;
-(int)remoteSeekBackward:(id)arg1 ;
-(int)remoteChangePlaybackRate:(id)arg1 ;
-(int)remoteSetPlayhead:(id)arg1 ;
-(CFArrayRef)copySupportedCommands;
-(void)dealloc;
-(id)initWithPlayer:(id)arg1 ;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
-(NSArray *)supportedPlaybackRates;
-(IMAVPlayer *)player;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(void)tearDown;
-(void)setup;
@end

