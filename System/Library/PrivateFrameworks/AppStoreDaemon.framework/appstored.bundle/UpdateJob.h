/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/InternalJob.h>

@interface UpdateJob : InternalJob {

	char _isAutoUpdate;

}

@property (nonatomic,readonly) char isAutoUpdate;                   //@synthesize isAutoUpdate=_isAutoUpdate - In the implementation block
@property (nonatomic,readonly) char isPendingApproval; 
-(char)isAutoUpdate;
-(id)initJobAsAutoUpdate:(char)arg1 withActivity:(id)arg2 ;
-(char)isPendingApproval;
@end
