/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /usr/lib/system/libxpc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libdispatch.dylib/OS_object.h>
#import <libobjc.A.dylib/OS_xpc_object.h>

@protocol OS_xpc_object <NSObject>
@end


@class NSString;

@interface OS_xpc_object : OS_object <OS_xpc_object>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dispose;
-(id)init;
-(id)retain;
-(NSString *)description;
-(NSString *)debugDescription;
@end

