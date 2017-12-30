/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol CalDAVSubscribedCalendar <CalDAVCalendar>
@property (nonatomic,retain) NSURL * subscriptionURL; 
@property (assign,nonatomic) char hasAlarmFilter; 
@property (assign,nonatomic) char hasAttachmentFilter; 
@property (assign,nonatomic) char hasTaskFilter; 
@property (assign,nonatomic) double refreshInterval; 
@property (assign,nonatomic) char autoprovisioned; 
@property (nonatomic,retain) NSString * locationCode; 
@property (nonatomic,retain) NSString * languageCode; 
@optional
-(NSString *)languageCode;
-(void)setLanguageCode:(id)arg1;
-(NSString *)locationCode;
-(char)autoprovisioned;
-(void)setLocationCode:(id)arg1;
-(void)setAutoprovisioned:(char)arg1;

@required
-(double)refreshInterval;
-(NSURL *)subscriptionURL;
-(void)setSubscriptionURL:(id)arg1;
-(char)hasAlarmFilter;
-(void)setHasAlarmFilter:(char)arg1;
-(char)hasAttachmentFilter;
-(void)setHasAttachmentFilter:(char)arg1;
-(char)hasTaskFilter;
-(void)setHasTaskFilter:(char)arg1;
-(void)setRefreshInterval:(double)arg1;

@end
