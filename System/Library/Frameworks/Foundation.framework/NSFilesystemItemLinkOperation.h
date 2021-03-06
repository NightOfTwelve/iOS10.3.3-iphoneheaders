/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFilesystemItemCopyOperation.h>

@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation
+(id)filesystemItemLinkOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
+(char)_needsStatInfo;
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(char)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(char)shouldProceedAfterError:(id)arg1 linkingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(char)shouldLinkItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(char)_shouldLinkItemAtPath:(const char*)arg1 toPath:(const char*)arg2 ;
-(char)_shouldProceedAfterErrno:(int)arg1 linkingItemAtPath:(const char*)arg2 toPath:(const char*)arg3 ;
@end

