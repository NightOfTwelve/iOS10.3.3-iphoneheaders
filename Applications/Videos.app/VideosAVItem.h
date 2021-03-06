/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaQueryNowPlayingItem.h>

@interface VideosAVItem : MPMediaQueryNowPlayingItem {

	char _ignoreBookmarks;

}

@property (assign,getter=isIgnoringBookmarks,nonatomic) char ignoreBookmarks;                            //@synthesize ignoreBookmarks=_ignoreBookmarks - In the implementation block
@property (getter=isRentalCheckoutRequired,nonatomic,readonly) char rentalCheckoutRequired; 
@property (getter=isNonStreamingAsset,nonatomic,readonly) char nonStreamingAsset; 
+(unsigned)_currentPreferredAssetQualityForPlaybackItemMetadata:(id)arg1 ;
-(void)setIgnoreBookmarks:(char)arg1 ;
-(char)isNonStreamingAsset;
-(char)isIgnoringBookmarks;
-(void)dealloc;
-(void)loadAssetAndPlayerItem;
-(id)playbackInfo;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(char)prefersSeekOverSkip;
-(id)rtcReportingServiceIdentifierWithAssetURL:(id)arg1 ;
-(char)isRentalCheckoutRequired;
-(unsigned long long)rentalID;
-(void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(char)arg2 ;
-(id)initWithPlaybackItemMetadata:(id)arg1 options:(unsigned)arg2 ;
-(void)_networkSettingsChanged:(id)arg1 ;
@end

