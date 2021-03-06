/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class WLWelcomeViewController, NSString;

@interface BuddyWelcomeKitController : NSObject <BuddyController> {

	WLWelcomeViewController* _welcomeViewController;
	id<BuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)prefetchShowWelcomeKitRestoreChoice;
+(char)showWelcomeKitRestoreChoice;
+(void)skip;
-(char)controllerAllowsNavigatingBack;
-(void)_welcomeKitDidFinishWithSuccess:(char)arg1 ;
-(id)init;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id<BuddyControllerDelegate>)delegate;
-(id)viewController;
@end

