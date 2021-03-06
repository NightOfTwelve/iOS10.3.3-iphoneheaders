/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:15:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectory.xpc/com.apple.CallKit.CallDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallDirectoryProviderHostProtocol.h>
#import <com.apple.CallKit.CallDirectory/CDXExtensionDataRequest.h>

@protocol CDXExtensionDataRequest <NSObject>
@property (assign,nonatomic,__weak) id<CDXExtensionDataRequestDelegate> delegate; 
@required
-(void)beginWithCompletion:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(id<CDXExtensionDataRequestDelegate>)delegate;

@end


@protocol CDXExtensionDataRequestDelegate, OS_dispatch_queue, NSCopying;
@class NSObject, NSExtension, CXCallDirectoryExtensionHostContext, NSError, NSString;

@interface CDXExtensionDataRequest : NSObject <CXCallDirectoryProviderHostProtocol, CDXExtensionDataRequest> {

	id<CDXExtensionDataRequestDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSExtension* _extension;
	id<NSCopying> _requestIdentifier;
	CXCallDirectoryExtensionHostContext* _context;
	/*^block*/id _completionHandler;
	NSError* _hostCancellationError;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                          //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<NSCopying> requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) CXCallDirectoryExtensionHostContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSError * hostCancellationError;                                  //@synthesize hostCancellationError=_hostCancellationError - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CDXExtensionDataRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSError *)hostCancellationError;
-(void)setHostCancellationError:(NSError *)arg1 ;
-(void)beginWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithExtension:(id)arg1 queue:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<CDXExtensionDataRequestDelegate>)arg1 ;
-(id<CDXExtensionDataRequestDelegate>)delegate;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(CXCallDirectoryExtensionHostContext *)context;
-(void)setContext:(CXCallDirectoryExtensionHostContext *)arg1 ;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_cancelWithError:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<NSCopying>)requestIdentifier;
-(void)setRequestIdentifier:(id<NSCopying>)arg1 ;
-(oneway void)addBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)completeRequestWithReply:(/*^block*/id)arg1 ;
@end

