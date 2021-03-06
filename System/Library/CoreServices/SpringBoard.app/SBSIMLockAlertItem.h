/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBSIMLockAlertItem : SBAlertItem {

	int _status;

}
+(id)alertTitleForStatus:(int)arg1 ;
+(id)alertTitleForStatus:(int)arg1 languageCode:(id)arg2 ;
-(char)_inSetup;
-(char)canSIMUnlock;
-(char)_isBricked;
-(id)alertTitleForLanguageCode:(id)arg1 ;
-(id)alertTextForLanguageCode:(id)arg1 ;
-(char)_canShowOKButton:(char)arg1 ;
-(char)_canShowUnlockButton:(char)arg1 ;
-(void)trySIMUnlock;
-(int)status;
-(id)initWithStatus:(int)arg1 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(void)performUnlockAction;
-(char)reappearsAfterLock;
-(char)reappearsAfterUnlock;
-(void)didDeactivateForReason:(int)arg1 ;
-(char)forcesModalAlertAppearance;
-(char)allowInSetup;
-(char)pendInSetupIfNotAllowed;
@end

