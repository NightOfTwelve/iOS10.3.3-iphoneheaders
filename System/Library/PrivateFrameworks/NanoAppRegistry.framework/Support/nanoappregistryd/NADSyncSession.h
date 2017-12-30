/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYSessionDelegate.h>

@protocol NADSyncSessionDelegate, NADApplicationStoreTransaction;
@class SYSession, NSProgress, NSString;

@interface NADSyncSession : NSObject <SYSessionDelegate> {

	char _complete;
	SYSession* _session;
	id<NADSyncSessionDelegate> _delegate;
	NSProgress* _progress;
	id<NADApplicationStoreTransaction> _transaction;

}

@property (nonatomic,readonly) id<NADApplicationStoreTransaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) SYSession * session;                                         //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<NADSyncSessionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                       //@synthesize progress=_progress - In the implementation block
@property (getter=isComplete,nonatomic,readonly) char complete;                             //@synthesize complete=_complete - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 transaction:(id)arg2 ;
-(void)setDelegate:(id<NADSyncSessionDelegate>)arg1 ;
-(NSString *)description;
-(id<NADSyncSessionDelegate>)delegate;
-(NSProgress *)progress;
-(id<NADApplicationStoreTransaction>)transaction;
-(SYSession *)session;
-(char)isComplete;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(char)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(char)syncSession:(id)arg1 rollbackChangesWithError:(id*)arg2 ;
@end
