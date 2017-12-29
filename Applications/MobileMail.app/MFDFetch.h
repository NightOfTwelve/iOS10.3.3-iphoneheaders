/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFXPCServer.h>
#import <MobileMail/MSDFetchProtocol.h>

@class MFMailboxUid, NSString;

@interface MFDFetch : MFXPCServer <MSDFetchProtocol> {

	/*^block*/id _completionAfterFetchCompleted;
	MFMailboxUid* _waitingForMailbox;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(void)fetchMessagesForMailboxWithName:(id)arg1 options:(int)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_autoFetchCompleted:(id)arg1 ;
-(char)_isWaitingForMailboxFetch;
-(id)_mailboxWithName:(id)arg1 forAccount:(id)arg2 ;
-(void)_waitForFetchCompletedForMailbox:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_findMailboxWithName:(id)arg1 inAccounts:(id)arg2 ;
-(void)dealloc;
-(id)initWithClient:(id)arg1 ;
@end
