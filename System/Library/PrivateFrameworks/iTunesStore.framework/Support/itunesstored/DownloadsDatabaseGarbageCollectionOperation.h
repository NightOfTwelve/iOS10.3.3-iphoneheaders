/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@interface DownloadsDatabaseGarbageCollectionOperation : ISOperation
+(char)garbageCollectionTimerIsExpired;
-(void)_garbageCollectWorkingDirectory;
-(void)_garbageCollectPersistentManagers;
-(void)_garbageCollectSoftwareDownloads;
-(void)_garbageCollectWorkingDirectoryPath:(id)arg1 ;
-(void)run;
@end

