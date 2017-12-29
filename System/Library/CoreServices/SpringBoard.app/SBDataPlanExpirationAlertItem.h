/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSDate;

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem {

	NSDate* _expirationDate;

}

@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)initWithAccountURL:(id)arg1 expirationDate:(id)arg2 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
@end
