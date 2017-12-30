/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <itunescloudd/itunescloudd-Structs.h>
@class CloudLibraryConnection;

@interface SagaImporter : NSObject {

	char _isCancelled;
	CloudLibraryConnection* _connection;
	float _progress;

}

@property (nonatomic,readonly) CloudLibraryConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) char isCancelled;                                 //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) float progress;                                   //@synthesize progress=_progress - In the implementation block
+(void)cancelAllOperations;
-(void)_removeUnavailableSubscriptionAssetsInLibrary:(id)arg1 ;
-(void)_importLyricsWithLyricsTokenMap:(unordered_map<long long, std::__1::basic_string<char>, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::basic_string<char> > > >*)arg1 ;
-(char)_updateGlobalPlaylistsFromContainersPayloadAtPath:(id)arg1 downloadPathForSubscribedContainersPayload:(id)arg2 ;
-(void)importTracksFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
-(char)isCancelled;
-(float)progress;
-(CloudLibraryConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
@end
