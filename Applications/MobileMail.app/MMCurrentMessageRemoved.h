/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@class MFMailMessage;

@interface MMCurrentMessageRemoved : NSDictionary {

	MFMailMessage* _removedMessage;
	MFMailMessage* _messageToSelect;

}

@property (nonatomic,retain) MFMailMessage * removedMessage;               //@synthesize removedMessage=_removedMessage - In the implementation block
@property (nonatomic,retain) MFMailMessage * messageToSelect;              //@synthesize messageToSelect=_messageToSelect - In the implementation block
-(MFMailMessage *)removedMessage;
-(MFMailMessage *)messageToSelect;
-(void)setRemovedMessage:(MFMailMessage *)arg1 ;
-(void)setMessageToSelect:(MFMailMessage *)arg1 ;
-(void)dealloc;
@end

