/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:56 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICLoggable.h>

@class CloudLibraryConnection, NSString;

@interface JaliscoImporter : NSObject <ICLoggable> {

	char _isCancelled;
	CloudLibraryConnection* _connection;
	float _progress;

}

@property (nonatomic,readonly) CloudLibraryConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) char isCancelled;                                 //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) float progress;                                   //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)oversizeLogCategory;
+(id)logCategory;
-(id)metadataKeys;
-(id)queryFilter;
-(id)purchaseTokens;
-(char)includeFlavors;
-(unsigned)onDiskRevision;
-(id)updateLibraryFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withResponse:(id)arg3 ;
-(void)importTracksUpToRevision:(unsigned)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)setProgress:(float)arg1 ;
-(char)isCancelled;
-(float)progress;
-(CloudLibraryConnection *)connection;
-(char)includeHiddenItems;
-(id)initWithConnection:(id)arg1 ;
@end
