/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol InboxTableViewGroupController <NSObject>
@optional
-(void)dismissAll;

@required
-(void)refreshIfNeeded;
-(id)eventForRow:(int)arg1;
-(id)initWithModel:(id)arg1 delegate:(id)arg2;
-(char)hasRows;
-(void)rowSelected:(int)arg1;
-(int)numberOfRows;
-(void)setVisible:(char)arg1;
-(char)canSelectRow:(int)arg1;
-(float)estimatedHeightForRow:(int)arg1;
-(id)cellForRow:(int)arg1;
-(id)titleForHeader;

@end
