/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface StaticMailbox : MFMailboxUid {

	NSString* _plistPath;

}
-(id)initWithMessagePlistAtPath:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)displayName;
-(id)plistPath;
-(unsigned)unreadCount;
-(id)store;
@end
