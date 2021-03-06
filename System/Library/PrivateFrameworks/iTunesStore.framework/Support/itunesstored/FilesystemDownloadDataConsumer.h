/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadDataConsumer.h>

@class NSArray, NSString;

@interface FilesystemDownloadDataConsumer : DownloadDataConsumer {

	long long _bytesWritten;
	int _fd;
	char _hasConsumedData;
	NSArray* _hashes;
	CC_MD5state_st _md5Context;
	int _numberOfBytesToHash;
	NSString* _path;
	unsigned long long _resumptionOffset;
	long long _verifiedBytes;

}
-(unsigned long long)resumptionOffset;
-(char)consumeData:(id)arg1 error:(id*)arg2 ;
-(char)hasConsumedData;
-(char)_hashAndWriteData:(id)arg1 error:(id*)arg2 ;
-(id)initWithPath:(id)arg1 MD5Hashes:(id)arg2 numberOfBytesToHash:(int)arg3 ;
-(void)truncate;
-(unsigned long long)diskUsage;
-(void)dealloc;
-(void)reset;
-(void)suspend;
-(char)_openFile;
-(void)_truncateToSize:(long long)arg1 ;
-(char)_checkHashForByteCount:(long long)arg1 ;
-(char)finish:(id*)arg1 ;
@end

