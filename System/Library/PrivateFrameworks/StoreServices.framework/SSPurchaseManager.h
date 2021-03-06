/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SSPurchaseManagerDelegate;
@class NSObject, NSString, SSXPCConnection;

@interface SSPurchaseManager : NSObject {

	NSObject*<OS_dispatch_queue> _completionBlockQueue;
	id<SSPurchaseManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _managerIdentifier;
	SSXPCConnection* _requestConnection;
	SSXPCConnection* _responseConnection;

}

@property (readonly) NSString * managerIdentifier; 
@property (assign) id<SSPurchaseManagerDelegate> delegate; 
-(id)_requestConnection;
-(id)_responseConnection;
-(void)_connectToDaemon;
-(void)_sendMessage:(long long)arg1 withPurchases:(id)arg2 afterPurchase:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendMessage:(long long)arg1 withPurchaseIdentifiers:(id)arg2 afterPurchase:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendCompletionBlock:(/*^block*/id)arg1 forGetPurchasesReply:(id)arg2 ;
-(char)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(id)arg1 ;
-(void)_handleMessage:(id)arg1 fromConnection:(id)arg2 ;
-(char)_resultForReply:(id)arg1 error:(id*)arg2 ;
-(id)_newEncodedArrayWithPurchaseIdentifiers:(id)arg1 ;
-(void)_sendCompletionBlock:(/*^block*/id)arg1 forStandardReply:(id)arg2 ;
-(id)_newEncodedArrayWithPurchases:(id)arg1 ;
-(void)insertPurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(NSString *)managerIdentifier;
-(void)_reconnectForDaemonLaunch;
-(id)init;
-(void)setDelegate:(id<SSPurchaseManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<SSPurchaseManagerDelegate>)delegate;
-(id)initWithManagerIdentifier:(id)arg1 ;
-(void)getPurchasesUsingBlock:(/*^block*/id)arg1 ;
-(void)addPurchases:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)cancelPurchases:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)movePurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
@end

