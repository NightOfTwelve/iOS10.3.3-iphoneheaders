/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface IMOperationQueue : NSOperationQueue {

	NSMutableSet* _scheduledOperations;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)addOperation:(id)arg1 afterDelay:(double)arg2 ;
-(id)init;
-(void)dealloc;
-(void)cancelAllOperations;
-(id)operations;
-(unsigned)operationCount;
@end
