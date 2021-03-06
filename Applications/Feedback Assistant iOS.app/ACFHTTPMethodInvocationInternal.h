/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableDictionary, NSURLConnection, NSMutableData;

@interface ACFHTTPMethodInvocationInternal : NSObject {

	NSRecursiveLock* _invocationGuard;
	NSRecursiveLock* _schedulingGuard;
	NSMutableDictionary* _runLoops;
	NSURLConnection* _connection;
	char _isFinished;
	NSMutableData* _receivedDataAccumulator;

}

@property (retain) NSRecursiveLock * invocationGuard;                    //@synthesize invocationGuard=_invocationGuard - In the implementation block
@property (retain) NSRecursiveLock * schedulingGuard;                    //@synthesize schedulingGuard=_schedulingGuard - In the implementation block
@property (retain) NSMutableDictionary * runLoops;                       //@synthesize runLoops=_runLoops - In the implementation block
@property (retain) NSURLConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (assign) char isFinished;                                      //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSMutableData * receivedDataAccumulator;              //@synthesize receivedDataAccumulator=_receivedDataAccumulator - In the implementation block
-(id)init;
-(void)dealloc;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(char)isFinished;
-(NSRecursiveLock *)invocationGuard;
-(NSMutableDictionary *)runLoops;
-(void)setReceivedDataAccumulator:(NSMutableData *)arg1 ;
-(NSRecursiveLock *)schedulingGuard;
-(NSMutableData *)receivedDataAccumulator;
-(void)setInvocationGuard:(NSRecursiveLock *)arg1 ;
-(void)setSchedulingGuard:(NSRecursiveLock *)arg1 ;
-(void)setRunLoops:(NSMutableDictionary *)arg1 ;
-(void)setIsFinished:(char)arg1 ;
@end

