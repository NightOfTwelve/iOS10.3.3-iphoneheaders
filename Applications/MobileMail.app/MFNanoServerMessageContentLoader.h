/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MBLSingleMessageClient.h>

@protocol MFNanoServerMessageContentLoaderDelegate;
@class NSDate, MFLibraryMessage, NNMKPairedDeviceInfo, NSMutableSet, NSLock, NSString;

@interface MFNanoServerMessageContentLoader : NSObject <MBLSingleMessageClient> {

	NSDate* _requestDate;
	id<MFNanoServerMessageContentLoaderDelegate> _delegate;
	MFLibraryMessage* _messageForDownload;
	char _contentQueuedForDownload;
	NNMKPairedDeviceInfo* _pairedDeviceInfo;
	NSMutableSet* _monitoredOperations;
	NSLock* _monitoredOperationsLock;
	char _highPriority;
	NSString* _messageId;

}

@property (nonatomic,readonly) NSString * messageId;                //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) char highPriority;                     //@synthesize highPriority=_highPriority - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)wantsContentsOfType:(int)arg1 ;
-(void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2 ;
-(void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2 ;
-(id)_libraryMessageForMessageId:(id)arg1 ;
-(id)initWithMessageId:(id)arg1 highPriority:(char)arg2 pairedDeviceInfo:(id)arg3 delegate:(id)arg4 ;
-(void)_startContentLoadProcess;
-(void)_parseContentFromMessageAndNotifyDelegate:(id)arg1 loadedProtected:(char)arg2 ;
-(void)_notifyDelegateOfFailure;
-(id)_attemptToLoadLibraryMessageWithContentFromDatabase;
-(void)_downloadContent;
-(id)_monitoredOperationWithBlock:(/*^block*/id)arg1 ;
-(void)_notifyDelegateThatReceivedMailContent:(id)arg1 forMessage:(id)arg2 loadedProtected:(char)arg3 ;
-(void)_notifyDelegateThatReceivedImageAttachment:(id)arg1 forContentId:(id)arg2 loadedProtected:(char)arg3 ;
-(void)_startLoadingImageAttachments:(id)arg1 messageBody:(id)arg2 loadedProtected:(char)arg3 ;
-(void)_notifyDelegateDidFinish;
-(id)_attachmentForURL:(id)arg1 mimePart:(id)arg2 ;
-(id)_nanoAttachmentForURL:(id)arg1 mimePart:(id)arg2 ;
-(double)ordering;
-(void)cancel;
-(void)dealloc;
-(unsigned)priority;
-(id)message;
-(void)setHighPriority:(char)arg1 ;
-(char)highPriority;
-(NSString *)messageId;
@end
