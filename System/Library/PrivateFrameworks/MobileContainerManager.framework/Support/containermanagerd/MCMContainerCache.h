/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:12 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <containermanagerd/containermanagerd-Structs.h>
@class NSMutableDictionary;

@interface MCMContainerCache : NSObject {

	NSMutableDictionary* _liveContainerCache;
	NSMutableDictionary* _transientContainerCache;
	opaque_pthread_mutex_t _cacheLock;

}
+(id)sharedInstance;
-(id)_getCacheForUserId:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(char)arg3 populateSandboxCache:(char)arg4 error:(id*)arg5 ;
-(id)_getCacheForUserId:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(char)arg3 error:(id*)arg4 ;
-(id)containerForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(char)arg4 error:(id*)arg5 ;
-(id)containerForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 uuidString:(id)arg4 ;
-(id)allContainersForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(char)arg3 populateSandboxCache:(char)arg4 error:(id*)arg5 ;
-(id)allContainersForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(char)arg3 error:(id*)arg4 ;
-(id)allContainerIdentifiersForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(char)arg3 error:(id*)arg4 ;
-(char)addContainerMetadata:(id)arg1 forUser:(unsigned)arg2 url:(id)arg3 transient:(char)arg4 updateSandbox:(char)arg5 error:(id*)arg6 ;
-(char)removeContainerForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(char)arg4 error:(id*)arg5 ;
-(char)setSandboxContainerMappingForUser:(unsigned)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 url:(id)arg4 ;
-(id)init;
@end

