/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryConcurrentOperation.h>

@class NSMutableArray, NSURLSession, ML3MusicLibrary, NSString, NSURL;

@interface CloudArtworkImportOperation : CloudLibraryConcurrentOperation {

	NSMutableArray* _completionHandlers;
	char _allowsCellularData;
	NSURLSession* _URLSession;
	ML3MusicLibrary* _musicLibrary;
	NSString* _artworkToken;
	int _artworkType;
	int _sourceType;
	unsigned long _mediaType;
	NSURL* _assetURL;
	unsigned long long _cloudID;

}

@property (nonatomic,readonly) NSURLSession * URLSession;                   //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * musicLibrary;              //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudID;                  //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,readonly) NSString * artworkToken;                     //@synthesize artworkToken=_artworkToken - In the implementation block
@property (nonatomic,readonly) int artworkType;                             //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) int sourceType;                              //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) unsigned long mediaType;                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                                //@synthesize assetURL=_assetURL - In the implementation block
@property (assign,nonatomic) char allowsCellularData;                       //@synthesize allowsCellularData=_allowsCellularData - In the implementation block
-(id)initWithURLSession:(id)arg1 musicLibrary:(id)arg2 cloudID:(unsigned long long)arg3 artworkToken:(id)arg4 artworkType:(int)arg5 sourceType:(int)arg6 ;
-(void)setAllowsCellularData:(char)arg1 ;
-(char)allowsCellularData;
-(unsigned long long)cloudID;
-(void)setAssetURL:(NSURL *)arg1 ;
-(id)description;
-(void)start;
-(int)sourceType;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(int)artworkType;
-(ML3MusicLibrary *)musicLibrary;
-(NSString *)artworkToken;
-(NSURLSession *)URLSession;
-(unsigned long)mediaType;
-(NSURL *)assetURL;
-(void)setMediaType:(unsigned long)arg1 ;
-(void)callCompletionHandlers;
@end
