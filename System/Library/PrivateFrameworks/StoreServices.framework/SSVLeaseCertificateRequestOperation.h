/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString, SSVPlaybackLeaseConfiguration, SSURLBag;

@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation {

	NSObject*<OS_dispatch_semaphore> _bagLoadSemaphore;
	NSString* _certificateURLBagKey;
	SSVPlaybackLeaseConfiguration* _configuration;
	/*^block*/id _outputBlock;
	SSURLBag* _urlBag;

}

@property (copy) NSString * certificateURLBagKey; 
@property (copy) id outputBlock; 
-(id)_resolveCertificateURLReturningError:(id*)arg1 ;
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)arg1 ;
-(void)cancel;
-(id)initWithConfiguration:(id)arg1 ;
-(void)main;
-(id)initWithURLBag:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end

