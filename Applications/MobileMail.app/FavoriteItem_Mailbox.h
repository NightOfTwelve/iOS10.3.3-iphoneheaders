/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/FavoriteItem.h>

@class MFMailboxUid, MailAccount, NSString;

@interface FavoriteItem_Mailbox : FavoriteItem {

	MFMailboxUid* _mailbox;
	MailAccount* _account;
	int _mailboxType;
	NSString* _accountRelativePath;
	NSString* _displayName;
	char _originalPushState;

}

@property (assign,nonatomic) char originalPushState;              //@synthesize originalPushState=_originalPushState - In the implementation block
@property (nonatomic,retain) MFMailboxUid * mailbox;              //@synthesize mailbox=_mailbox - In the implementation block
+(char)_defaultShouldSync;
-(id)representingMailbox;
-(void)wasSelected:(id)arg1 indexPath:(id)arg2 accessoryTapped:(char)arg3 ;
-(void)wasAddedToCollection:(id)arg1 ;
-(void)wasRemovedFromCollecion:(id)arg1 ;
-(id)syncValue;
-(void)wasChangedExternally;
-(int)_defaultCellAccessoryType;
-(void)setOriginalPushState:(char)arg1 ;
-(char)originalPushState;
-(void)_postNotification;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(char)isVisible;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)syncKey;
-(char)isDeletable;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)criterion;
-(MFMailboxUid *)mailbox;
-(id)account;
-(void)configureCell:(id)arg1 ;
@end

