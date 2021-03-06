/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SSItemMedia : NSObject {

	int _duration;
	int _fullDuration;
	long long _mediaFileSize;
	NSString* _mediaKind;
	char _protected;
	NSURL* _url;

}

@property (nonatomic,readonly) int fullDurationInMilliseconds;                           //@synthesize fullDuration=_fullDuration - In the implementation block
@property (nonatomic,readonly) long long mediaFileSize;                                  //@synthesize mediaFileSize=_mediaFileSize - In the implementation block
@property (nonatomic,copy) NSString * mediaKind;                                         //@synthesize mediaKind=_mediaKind - In the implementation block
@property (nonatomic,readonly) int durationInMilliseconds;                               //@synthesize duration=_duration - In the implementation block
@property (getter=isProtectedMedia,nonatomic,readonly) char protectedMedia;              //@synthesize protected=_protected - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize url=_url - In the implementation block
-(id)initWithStoreOfferDictionary:(id)arg1 ;
-(char)isProtectedMedia;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSURL *)URL;
-(void)setMediaKind:(NSString *)arg1 ;
-(long long)mediaFileSize;
-(int)fullDurationInMilliseconds;
-(NSString *)mediaKind;
-(int)durationInMilliseconds;
@end

