/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar {

	CalDiagInboxCollectionSync* _inboxCollectionSyncDiagnostics;

}

@property (nonatomic,retain) CalDiagInboxCollectionSync * inboxCollectionSyncDiagnostics;              //@synthesize inboxCollectionSyncDiagnostics=_inboxCollectionSyncDiagnostics - In the implementation block
-(char)isScheduleInbox;
-(id)etagsForItemURLs:(id)arg1 ;
-(char)updateResourcesFromServer:(id)arg1 ;
-(char)deleteResourcesAtURLs:(id)arg1 ;
-(id)allItemURLs;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(void*)_copyEventActionWithURL:(id)arg1 ;
-(void)setETag:(id)arg1 forInvitationAtURL:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(CalDiagInboxCollectionSync *)inboxCollectionSyncDiagnostics;
-(char)_removeInvitationWithURL:(id)arg1 ;
-(void)setInboxCollectionSyncDiagnostics:(CalDiagInboxCollectionSync *)arg1 ;
@end

