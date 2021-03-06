/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAlertItem.h>

@class NSString;

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem {

	NSString* _carrierName;
	char _newAccount;

}

@property (nonatomic,copy) NSString * carrierName;                             //@synthesize carrierName=_carrierName - In the implementation block
@property (assign,getter=isNewAccount,nonatomic) char newAccount;              //@synthesize newAccount=_newAccount - In the implementation block
-(id)initWithCarrierName:(id)arg1 newAccount:(char)arg2 ;
-(void)setNewAccount:(char)arg1 ;
-(char)isNewAccount;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(NSString *)carrierName;
-(void)setCarrierName:(NSString *)arg1 ;
@end

