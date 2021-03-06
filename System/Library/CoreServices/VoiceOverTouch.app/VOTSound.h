/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class VOTOutputAction, NSString, AVAudioPlayer, SCRCThread;

@interface VOTSound : NSObject {

	VOTOutputAction* _action;
	id _delegate;
	id _owner;
	/*^block*/id _completionBlock;
	NSString* _soundPath;
	AVAudioPlayer* _player;
	os_unfair_lock_s _completionBlockLock;
	int _soundChannels;
	char _isPlaying;
	SCRCThread* _soundThread;

}

@property (nonatomic,copy) id completionBlock;                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) char isPlaying;                        //@synthesize isPlaying=_isPlaying - In the implementation block
@property (nonatomic,retain) SCRCThread * soundThread;              //@synthesize soundThread=_soundThread - In the implementation block
-(id)soundPath;
-(void)setSoundThread:(SCRCThread *)arg1 ;
-(void)_updateAudioSessionProperties;
-(void)__updateAudioSessionProperties;
-(void)_updatePlayerWithAudioFile:(char)arg1 ;
-(SCRCThread *)soundThread;
-(void)_finishedPlaying;
-(void)_sendFinishPlayingNotificationsWithCompletionBlock:(/*^block*/id)arg1 delegate:(id)arg2 ;
-(id)initWithSoundPath:(id)arg1 thread:(id)arg2 ;
-(void)resetSoundForLostMediaSession;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(char)isPlaying;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(void)play;
-(void)setIsPlaying:(char)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(char)arg2 ;
@end

