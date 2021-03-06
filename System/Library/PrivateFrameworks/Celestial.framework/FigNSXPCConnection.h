/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCConnection.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface FigNSXPCConnection : NSXPCConnection {

	NSObject*<OS_dispatch_group> _connectionRunningGroup;
	char _explicitlyInvalidated;

}

@property (nonatomic,readonly) char explicitlyInvalidated;              //@synthesize explicitlyInvalidated=_explicitlyInvalidated - In the implementation block
-(void)invalidate;
-(void)dealloc;
-(void)resume;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)blockUntilInvalidateHandlerHasBeenCalled;
-(char)explicitlyInvalidated;
@end

