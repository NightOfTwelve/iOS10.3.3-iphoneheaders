/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /usr/lib/system/libdispatch.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libdispatch.dylib/libdispatch.dylib-Structs.h>
#import <libdispatch.dylib/OS_dispatch_data.h>

@interface OS_dispatch_data_empty : OS_dispatch_data
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)load;
-(void*)_getContext;
-(void)_setFinalizer:(/*function pointer*/void*)arg1 ;
-(void)_setTargetQueue:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned)retainCount;
-(void)_setContext:(void*)arg1 ;
-(void)_suspend;
-(void)_resume;
-(void)_activate;
@end
