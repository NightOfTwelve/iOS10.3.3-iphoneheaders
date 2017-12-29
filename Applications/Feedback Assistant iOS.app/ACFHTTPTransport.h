/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACFHTTPMethodInvocationDelegate.h>
#import <Feedback Assistant iOS/ACFHTTPTransportProtocol.h>

@class NSString, NSArray, NSDictionary, NSData, NSMutableArray, NSTimer;

@interface ACFHTTPTransport : NSObject <ACFHTTPMethodInvocationDelegate, ACFHTTPTransportProtocol> {

	NSString* _httpMethod;
	NSDictionary* _httpHeader;
	NSDictionary* _httpGETParameters;
	NSData* _httpPOSTBody;
	double _timeout;
	char _isCanceled;
	NSString* _requestURLTemplate;
	NSArray* _serverHosts;
	NSArray* _serverAttemptsDelays;
	/*^block*/id _retryCheckBlock;
	/*^block*/id _completionBlock;
	NSMutableArray* _inProgressServerInvocations;
	NSMutableArray* _queuedServerInvocations;
	NSTimer* _failoverTimer;
	unsigned _tryCounter;

}

@property (nonatomic,copy) id completionBlock;                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * inProgressServerInvocations;              //@synthesize inProgressServerInvocations=_inProgressServerInvocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedServerInvocations;                  //@synthesize queuedServerInvocations=_queuedServerInvocations - In the implementation block
@property (nonatomic,retain) NSTimer * failoverTimer;                                   //@synthesize failoverTimer=_failoverTimer - In the implementation block
@property (assign,nonatomic) unsigned tryCounter;                                       //@synthesize tryCounter=_tryCounter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * requestURLTemplate;                             //@synthesize requestURLTemplate=_requestURLTemplate - In the implementation block
@property (nonatomic,retain) NSArray * serverHosts;                                     //@synthesize serverHosts=_serverHosts - In the implementation block
@property (nonatomic,retain) NSArray * serverAttemptsDelays;                            //@synthesize serverAttemptsDelays=_serverAttemptsDelays - In the implementation block
@property (nonatomic,retain) NSString * httpMethod;                                     //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,retain) NSDictionary * httpHeader;                                 //@synthesize httpHeader=_httpHeader - In the implementation block
@property (nonatomic,retain) NSDictionary * httpGETParameters;                          //@synthesize httpGETParameters=_httpGETParameters - In the implementation block
@property (nonatomic,retain) NSData * httpPOSTBody;                                     //@synthesize httpPOSTBody=_httpPOSTBody - In the implementation block
@property (assign,nonatomic) double timeout;                                            //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) char isCanceled;                                           //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,copy) id retryCheckBlock;                                          //@synthesize retryCheckBlock=_retryCheckBlock - In the implementation block
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)didEnd;
-(void)setTimeout:(double)arg1 ;
-(void)didStart;
-(void)cancelRequest;
-(char)isCanceled;
-(double)timeout;
-(char)hasFinishedServerInvocations;
-(void)cancelAllInvocations;
-(void)setRetryCheckBlock:(id)arg1 ;
-(void)setRequestURLTemplate:(NSString *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(void)setHttpHeader:(NSDictionary *)arg1 ;
-(void)setHttpGETParameters:(NSDictionary *)arg1 ;
-(void)setHttpPOSTBody:(NSData *)arg1 ;
-(void)setServerHosts:(NSArray *)arg1 ;
-(void)setServerAttemptsDelays:(NSArray *)arg1 ;
-(NSMutableArray *)queuedServerInvocations;
-(NSMutableArray *)inProgressServerInvocations;
-(unsigned)tryCounter;
-(void)setTryCounter:(unsigned)arg1 ;
-(void)unscheduleInvocation:(id)arg1 ;
-(id)retryCheckBlock;
-(void)scheduleNextQueuedRequest;
-(NSTimer *)failoverTimer;
-(void)setFailoverTimer:(NSTimer *)arg1 ;
-(void)setInProgressServerInvocations:(NSMutableArray *)arg1 ;
-(void)removeFromQueuedServerInvocations:(id)arg1 ;
-(void)setQueuedServerInvocations:(NSMutableArray *)arg1 ;
-(id)requestString:(id)arg1 ;
-(NSArray *)serverHosts;
-(NSDictionary *)httpHeader;
-(NSData *)httpPOSTBody;
-(NSString *)requestURLTemplate;
-(NSDictionary *)httpGETParameters;
-(id)urlWithRequest:(id)arg1 address:(id)arg2 ;
-(NSArray *)serverAttemptsDelays;
-(void)scheduleInvocation:(id)arg1 ;
-(void)addToQueuedServerInvocations:(id)arg1 ;
-(void)scheduleTimerForNextAttempt;
-(void)invocation:(id)arg1 didFinishWithError:(id)arg2 response:(id)arg3 ;
-(void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)performRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setIsCanceled:(char)arg1 ;
-(void)performRequest;
-(NSString *)httpMethod;
@end
