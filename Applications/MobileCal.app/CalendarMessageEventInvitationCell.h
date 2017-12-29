/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/CalendarMessageCell.h>

@class NSString, EKCalendarEventInvitationNotification;

@interface CalendarMessageEventInvitationCell : CalendarMessageCell {

	NSString* _organizerString;
	NSString* _invitedByString;
	NSString* _dateString;

}

@property (nonatomic,retain) EKCalendarEventInvitationNotification * notification; 
-(char)showAsCancelledOrDeclined;
-(void)updateContact;
-(id)preActionBodyStrings;
-(id)actionBodyString;
-(int)actionBodyStringAction;
-(int)selectedResponseButton;
-(id)_locationString;
-(char)notificationIsCancelled;
-(id)_organizerString;
-(id)_invitedByString;
-(char)notificationIsInvite;
-(id)actions;
-(id)_dateString;
-(void)setNotification:(EKCalendarEventInvitationNotification *)arg1 ;
-(id)titleStrings;
-(id)bodyStrings;
@end
