/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAsset.h>

@class NSMutableSet, NSSet;

@interface MCAssetAudio : MCAsset {

	NSMutableSet* mSongs;

}

@property (readonly) NSSet * songs; 
-(void)demolish;
-(NSSet *)songs;
-(void)addSong:(id)arg1 ;
-(void)removeSong:(id)arg1 ;
-(char)isInUse;
@end

