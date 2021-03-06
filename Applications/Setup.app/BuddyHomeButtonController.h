/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>
#import <libobjc.A.dylib/PSUIHomeButtonCustomizeControllerDelegate.h>

@class SetupChoice, UIImageView;

@interface BuddyHomeButtonController : SetupChoiceController <PSUIHomeButtonCustomizeControllerDelegate> {

	SetupChoice* _customizeChoice;
	SetupChoice* _skipChoice;
	UIImageView* _deviceChromeImageView;
	UIImageView* _homeScreenImageView;

}
+(char)controllerNeedsToRun;
+(void)skip;
-(char)shouldAllowStartOver;
-(char)wantsNextButton;
-(id)footerDetailText;
-(char)useTableLayout;
-(id)init;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)titleText;
-(void)controllerDone;
-(void)homeButtonCustomizeControllerDidFinish:(id)arg1 ;
@end

