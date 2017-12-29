/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class BBBulletin, SBUISound;

@interface SBStarkBulletinBannerItem : SBStarkBannerItem {

	BBBulletin* _bulletin;
	SBUISound* _sound;
	unsigned _feed;

}
-(id)sourceDate;
-(char)_supportsSubActions;
-(id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2 ;
-(int)defaultActionType;
-(id)categoryImage;
-(char)matchesContext:(id)arg1 ;
-(id)initWithBulletin:(id)arg1 feed:(unsigned)arg2 configuration:(id)arg3 ;
-(id)_subTitle;
-(id)_bbDismissAppearance;
-(id)bbSupplementaryActions;
-(id)_bbDismissAction;
-(id)bbAllActions;
-(void)updateBulletinToInstance:(id)arg1 ;
-(id)title;
-(/*^block*/id)action;
-(id)_title;
-(id)message;
-(id)initWithConfiguration:(id)arg1 ;
-(id)sound;
-(id)appName;
-(id)subActions;
-(char)shouldShowModalSubActions;
-(id)subActionLabels;
-(id)subTitle;
@end
