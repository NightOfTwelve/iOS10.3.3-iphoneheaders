/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSUAssertionHandler : NSObject
+(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(int)arg3 isFatal:(char)arg4 description:(const char*)arg5 ;
+(void)logBacktraceThrottled;
+(id)p_performBlockIgnoringAssertions:(/*^block*/id)arg1 onlyFatal:(char)arg2 ;
+(id)performBlockIgnoringFatalAssertions:(/*^block*/id)arg1 ;
+(int)_atomicIncrementAssertCount;
+(void)simulateCrashWithMessage:(id)arg1 ;
+(id)performBlockIgnoringAssertions:(/*^block*/id)arg1 ;
+(void)logBacktrace;
@end
