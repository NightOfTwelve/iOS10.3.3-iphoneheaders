/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFMessageViewingContextDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableSet, NSMutableDictionary, NSString;

@interface MFNanoServerMessageSender : NSObject <MFMessageViewingContextDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _messagesDeliveredSemaphore;
	NSMutableSet* _pendingMessageReferences;
	NSMutableDictionary* _sentMessageReferences;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didReceiveMessageDeliveryNotification:(id)arg1 ;
-(id)_libraryMessageForMessageId:(id)arg1 ;
-(id)_messageToSendWithCompositionContext:(id)arg1 ;
-(id)_sendComposedMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

