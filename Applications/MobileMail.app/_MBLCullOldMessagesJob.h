/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _MBLCullOldMessagesJob : NSObject {

	NSMutableArray* _messages;
	id _mbl;

}

@property (nonatomic,copy) NSMutableArray * messages; 
-(id)initForMBLMailbox:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(NSMutableArray *)messages;
-(void)setMessages:(NSMutableArray *)arg1 ;
@end
