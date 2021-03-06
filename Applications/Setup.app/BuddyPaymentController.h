/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class PKPaymentSetupAssistantRegistrationViewController, NSString;

@interface BuddyPaymentController : NSObject <PKPaymentSetupViewControllerDelegate, BuddyController> {

	PKPaymentSetupAssistantRegistrationViewController* _registrationController;
	char _shouldSuppressSpinner;
	id<BuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
+(void)skip;
-(void)controllerWasPopped;
-(char)controllerAllowsNavigatingBack;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(char)shouldSuppressExtendedInitializationActivityIndicator;
-(void)handleDownloadedPasses:(id)arg1 fromViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)init;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id<BuddyControllerDelegate>)delegate;
-(id)viewController;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
@end

