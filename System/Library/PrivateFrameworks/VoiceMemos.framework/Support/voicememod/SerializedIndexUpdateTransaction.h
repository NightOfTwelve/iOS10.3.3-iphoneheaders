/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:55 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/Support/voicememod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, RCSXPCTransaction, NSMutableArray, NSString, CSSearchableIndex, NSError;

@interface SerializedIndexUpdateTransaction : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	RCSXPCTransaction* _XPCKeepAliveTransaction;
	NSMutableArray* _operationTimeoutErrors;
	NSMutableArray* _operationStepErrors;
	char _canBatch;
	char _hasStartedBatching;
	NSString* _currentStepDescription;
	CSSearchableIndex* _searchIndex;
	NSString* _identifier;
	NSError* _transactionError;

}

@property (nonatomic,readonly) CSSearchableIndex * searchIndex;              //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSError * transactionError;                   //@synthesize transactionError=_transactionError - In the implementation block
-(id)initWithSearchIndex:(id)arg1 identifier:(id)arg2 ;
-(void)performSynchronizedStepWithDescription:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSError *)transactionError;
-(void)performTransactionOnQueue:(id)arg1 processingBlock:(/*^block*/id)arg2 finishedBlock:(/*^block*/id)arg3 ;
-(void)performSynchronizedStepWithDescription:(id)arg1 isSkippedIfPreviousErrors:(char)arg2 isIndexUpdatingStep:(char)arg3 block:(/*^block*/id)arg4 ;
-(id)_waitWithReasonableTimeoutOnSemaphore:(id)arg1 stepDescription:(id)arg2 ;
-(NSString *)identifier;
-(CSSearchableIndex *)searchIndex;
@end
