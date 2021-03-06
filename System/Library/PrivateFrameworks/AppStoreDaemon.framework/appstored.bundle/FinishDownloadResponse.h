/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError, NSString;

@interface FinishDownloadResponse : NSObject <NSCopying> {

	int _assetBlockedReason;
	NSError* _error;
	NSString* _mediaAssetInstallPath;
	int _result;
	long long _downloadID;
	long long _jobID;
	long long _mediaAssetIdentifier;

}

@property (assign,nonatomic) long long downloadID;                        //@synthesize downloadID=_downloadID - In the implementation block
@property (assign,nonatomic) long long jobID;                             //@synthesize jobID=_jobID - In the implementation block
@property (assign,nonatomic) long long mediaAssetIdentifier;              //@synthesize mediaAssetIdentifier=_mediaAssetIdentifier - In the implementation block
@property (assign,nonatomic) int assetBlockedReason;                      //@synthesize assetBlockedReason=_assetBlockedReason - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * mediaAssetInstallPath;              //@synthesize mediaAssetInstallPath=_mediaAssetInstallPath - In the implementation block
@property (assign,nonatomic) int result;                                  //@synthesize result=_result - In the implementation block
-(long long)mediaAssetIdentifier;
-(void)setMediaAssetIdentifier:(long long)arg1 ;
-(int)assetBlockedReason;
-(void)setAssetBlockedReason:(int)arg1 ;
-(NSString *)mediaAssetInstallPath;
-(void)setMediaAssetInstallPath:(NSString *)arg1 ;
-(long long)jobID;
-(void)setJobID:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)result;
-(void)setResult:(int)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setDownloadID:(long long)arg1 ;
-(long long)downloadID;
@end

