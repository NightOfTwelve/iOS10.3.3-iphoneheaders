/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserActivity/UAUserActivityInfo.h>

@class UAUserActivityClientProcess;

@interface UALocalCornerActionItem : UAUserActivityInfo {

	UAUserActivityClientProcess* _originatingClient;

}

@property (__weak) UAUserActivityClientProcess * originatingClient;              //@synthesize originatingClient=_originatingClient - In the implementation block
-(id)initWithUUID:(id)arg1 type:(unsigned)arg2 options:(id)arg3 originatingClient:(id)arg4 ;
-(UAUserActivityClientProcess *)originatingClient;
-(void)setOriginatingClient:(UAUserActivityClientProcess *)arg1 ;
@end

