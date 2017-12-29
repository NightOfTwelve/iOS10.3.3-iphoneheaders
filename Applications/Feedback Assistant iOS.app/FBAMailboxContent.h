/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, FBAProject, NSString, NSDate, UIColor;


@protocol FBAMailboxContent <NSObject>
@property (readonly) NSNumber * ID; 
@property (readonly) FBAProject * project; 
@property (readonly) NSString * mailboxKind; 
@property (readonly) NSString * itemTitle; 
@property (readonly) NSString * itemSubtitle; 
@property (readonly) NSDate * mailboxSortDate; 
@property (readonly) char unread; 
@property (readonly) UIColor * itemTitleColor; 
@required
-(FBAProject *)project;
-(NSString *)mailboxKind;
-(NSString *)itemSubtitle;
-(NSDate *)mailboxSortDate;
-(UIColor *)itemTitleColor;
-(NSString *)itemTitle;
-(char)unread;
-(NSNumber *)ID;

@end
