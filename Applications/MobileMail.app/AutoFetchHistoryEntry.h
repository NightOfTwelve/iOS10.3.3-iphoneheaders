/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AutoFetchHistoryEntry : NSObject {

	NSString* _mailboxPath;
	unsigned _frequency;
	unsigned _newMessagesState;
	double _lastFetchTime;
	double _lastFetchDuration;

}

@property (nonatomic,readonly) NSString * mailboxPath;               //@synthesize mailboxPath=_mailboxPath - In the implementation block
@property (assign,nonatomic) unsigned frequency;                     //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) double lastFetchTime;                   //@synthesize lastFetchTime=_lastFetchTime - In the implementation block
@property (assign,nonatomic) double lastFetchDuration;               //@synthesize lastFetchDuration=_lastFetchDuration - In the implementation block
@property (assign,nonatomic) unsigned newMessagesState;              //@synthesize newMessagesState=_newMessagesState - In the implementation block
-(double)lastFetchTime;
-(id)initWithMailboxPath:(id)arg1 ;
-(NSString *)mailboxPath;
-(void)setLastFetchTime:(double)arg1 ;
-(double)lastFetchDuration;
-(void)setLastFetchDuration:(double)arg1 ;
-(unsigned)newMessagesState;
-(void)setNewMessagesState:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)frequency;
-(void)setFrequency:(unsigned)arg1 ;
@end
