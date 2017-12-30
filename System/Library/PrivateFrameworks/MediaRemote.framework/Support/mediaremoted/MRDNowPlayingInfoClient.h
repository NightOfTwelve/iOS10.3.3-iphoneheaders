/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, MRNowPlayingArtwork;

@interface MRDNowPlayingInfoClient : NSObject {

	NSDictionary* _nowPlayingInfo;
	NSString* _parentApplicationDisplayID;
	MRNowPlayingArtwork* _nowPlayingArtwork;
	unsigned _playbackState;
	unsigned _nowPlayingVisibility;
	MRColor _tintColor;

}

@property (nonatomic,copy) NSDictionary * nowPlayingInfo;                          //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,copy) NSString * parentApplicationDisplayID;                  //@synthesize parentApplicationDisplayID=_parentApplicationDisplayID - In the implementation block
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork;              //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                               //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) unsigned nowPlayingVisibility;                        //@synthesize nowPlayingVisibility=_nowPlayingVisibility - In the implementation block
@property (assign,nonatomic) _MRColor tintColor;                                   //@synthesize tintColor=_tintColor - In the implementation block
-(NSString *)parentApplicationDisplayID;
-(void)setParentApplicationDisplayID:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(_MRColor)tintColor;
-(void)setTintColor:(_MRColor)arg1 ;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
-(unsigned)nowPlayingVisibility;
-(void)setNowPlayingVisibility:(unsigned)arg1 ;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)setPlaybackState:(unsigned)arg1 ;
-(unsigned)playbackState;
@end
