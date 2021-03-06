/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:42 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <storebookkeeperd/SBKUniversalPlaybackPositionMediaItem.h>

@class ML3Track, NSString;

@interface SBDPlaybackPositionML3TrackMediaItem : NSObject <SBKUniversalPlaybackPositionMediaItem> {

	ML3Track* _track;
	long long _persistentID;

}

@property (readonly) long long persistentID;                        //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) ML3Track * track;                              //@synthesize track=_track - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(ML3Track *)track;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
-(long long)persistentID;
@end

