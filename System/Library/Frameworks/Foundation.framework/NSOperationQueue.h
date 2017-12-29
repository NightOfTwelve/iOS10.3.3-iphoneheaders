/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperationQueue : NSObject {

	id _private;
	void* _reserved;

}

@property (copy,readonly) NSArray * operations; 
@property (readonly) unsigned operationCount; 
@property (assign) int maxConcurrentOperationCount; 
@property (getter=isSuspended) char suspended; 
@property (copy) NSString * name; 
@property (assign) int qualityOfService; 
@property (assign) NSObject*<OS_dispatch_queue> underlyingQueue; 
+(id)mainQueue;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)currentQueue;
-(id)__;
-(char)overcommitsOperations;
-(void)setOvercommitsOperations:(char)arg1 ;
-(id)init;
-(char)isSuspended;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setMaxConcurrentOperationCount:(int)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)addOperation:(id)arg1 ;
-(void)setQualityOfService:(int)arg1 ;
-(void)cancelAllOperations;
-(void)waitUntilAllOperationsAreFinished;
-(NSArray *)operations;
-(unsigned)operationCount;
-(void)setSuspended:(char)arg1 ;
-(void)setUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)qualityOfService;
-(void)addOperations:(id)arg1 waitUntilFinished:(char)arg2 ;
-(int)maxConcurrentOperationCount;
@end
