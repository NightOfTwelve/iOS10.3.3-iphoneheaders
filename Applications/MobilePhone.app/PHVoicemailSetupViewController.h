/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobilePhone/TPSetPINViewControllerDelegate.h>
#import <MobilePhone/PHVoicemailGreetingViewControllerDelegate.h>

@protocol PHVoicemailSetupViewControllerDelegate;
@class PHVoicemailNavigationController, PhoneNavigationController, _UIContentUnavailableView;

@interface PHVoicemailSetupViewController : UIViewController <TPSetPINViewControllerDelegate, PHVoicemailGreetingViewControllerDelegate> {

	PHVoicemailNavigationController* _navigationController;
	id<PHVoicemailSetupViewControllerDelegate> _voicemailSetupDelegate;
	PhoneNavigationController* _setupPINAndGreetingNavigationController;
	_UIContentUnavailableView* _noContentView;

}

@property (retain) PhoneNavigationController * setupPINAndGreetingNavigationController;              //@synthesize setupPINAndGreetingNavigationController=_setupPINAndGreetingNavigationController - In the implementation block
@property (nonatomic,retain) _UIContentUnavailableView * noContentView;                              //@synthesize noContentView=_noContentView - In the implementation block
@property (assign) PHVoicemailNavigationController * navigationController;                           //@synthesize navigationController=_navigationController - In the implementation block
@property (assign) id<PHVoicemailSetupViewControllerDelegate> voicemailSetupDelegate;                //@synthesize voicemailSetupDelegate=_voicemailSetupDelegate - In the implementation block
-(void)voicemailGreetingViewControllerFinished:(id)arg1 ;
-(void)_setupNoContentViewForInitialSetup;
-(void)setSetupPINAndGreetingNavigationController:(PhoneNavigationController *)arg1 ;
-(PhoneNavigationController *)setupPINAndGreetingNavigationController;
-(void)_voicemailSetupButtonTapped;
-(id<PHVoicemailSetupViewControllerDelegate>)voicemailSetupDelegate;
-(void)setVoicemailSetupDelegate:(id<PHVoicemailSetupViewControllerDelegate>)arg1 ;
-(void)reset;
-(PHVoicemailNavigationController *)navigationController;
-(void)viewDidLoad;
-(void)setNoContentView:(_UIContentUnavailableView *)arg1 ;
-(_UIContentUnavailableView *)noContentView;
-(void)setNavigationController:(PHVoicemailNavigationController *)arg1 ;
-(void)setPINViewControllerFinished:(id)arg1 success:(char)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
-(id)initWithNavigationController:(id)arg1 ;
@end
