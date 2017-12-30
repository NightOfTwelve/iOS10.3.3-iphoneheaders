/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/AgentOperation.h>

@class NSData, NSString, NSURL;

@interface ArtworkCacheOperation : AgentOperation {

	NSData* _artworkData;
	char _fromStore;
	NSString* _path;
	NSURL* _thumbnailURL;
	int _artworkType;

}

@property (readonly) int artworkType;                        //@synthesize artworkType=_artworkType - In the implementation block
@property (copy,readonly) NSData * artworkData; 
-(void)_setArtworkData:(id)arg1 ;
-(id)initWithParentOperation:(id)arg1 artworkType:(int)arg2 path:(id)arg3 thumbnailURL:(id)arg4 isFromStore:(char)arg5 ;
-(void)run;
-(int)artworkType;
-(NSData *)artworkData;
@end
