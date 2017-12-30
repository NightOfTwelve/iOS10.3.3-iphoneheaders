/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSURL, SSUpdatableAssetCacheManager, NSString;

@interface UpdateAssetsOperation : ISOperation {

	NSURL* _bundledManifestURL;
	SSUpdatableAssetCacheManager* _cacheManager;
	/*^block*/id _completion;
	NSURL* _manifestURL;
	NSString* _previousLastModified;
	char _scheduledInBackground;
	NSString* _userAgent;

}
-(id)_downloadRemoteFile:(id)arg1 toLocalPath:(id)arg2 expectedMD5:(id)arg3 ifModifiedSince:(id)arg4 error:(id*)arg5 ;
-(id)_uncachedAssetsForManifest:(id)arg1 ;
-(id)_allCachedAssetFileNames;
-(id)initWithManifestURL:(id)arg1 bundledManifestURL:(id)arg2 clientIdentifier:(id)arg3 userAgent:(id)arg4 scheduledInBackground:(char)arg5 previousLastModified:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_bundledManifest;
-(void)run;
@end
