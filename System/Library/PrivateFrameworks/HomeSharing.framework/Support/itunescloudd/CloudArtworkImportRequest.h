/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CloudArtworkImportRequest : NSObject {

	char _allowsCellularData;
	NSString* _token;
	unsigned long _mediaType;
	int _artworkType;
	/*^block*/id _completionHandler;
	unsigned long long _cloudID;

}

@property (assign,nonatomic) unsigned long long cloudID;              //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy) NSString * token;                          //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long mediaType;                 //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) int artworkType;                         //@synthesize artworkType=_artworkType - In the implementation block
@property (assign,nonatomic) char allowsCellularData;                 //@synthesize allowsCellularData=_allowsCellularData - In the implementation block
@property (nonatomic,copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setAllowsCellularData:(char)arg1 ;
-(char)allowsCellularData;
-(unsigned long long)cloudID;
-(void)setCloudID:(unsigned long long)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(int)artworkType;
-(void)setArtworkType:(int)arg1 ;
-(unsigned long)mediaType;
-(void)setMediaType:(unsigned long)arg1 ;
@end
