/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSOperation.h>

@interface MCSMessageOperation : MCSOperation
-(id)localizedErrorDescriptionForMessageCount:(unsigned)arg1 ;
-(id)localizedErrorTitleForMessageCount:(unsigned)arg1 ;
-(id)localizedShortOperationDescription;
-(char)willMarkRead;
-(char)willMarkUnread;
-(char)willUnflag;
-(char)willFlag;
-(char)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(char)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(char)isRevertibleWithMessages:(id)arg1 ;
@end

