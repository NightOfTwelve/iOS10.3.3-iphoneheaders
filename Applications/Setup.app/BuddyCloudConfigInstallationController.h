/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class UIView, UILabel, NSString;

@interface BuddyCloudConfigInstallationController : UIViewController <BuddyController> {

	char _controllerDoneCalled;
	id<BuddyControllerDelegate> _delegate;
	UIView* _containerView;
	UILabel* _messageView;
	UILabel* _activityLabel;
	NSString* _lastErrorDescription;
	int _state;
	/*^block*/id _deviceConfiguredCompletionBlock;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                   //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * messageView;                                    //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) UILabel * activityLabel;                                  //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,retain) NSString * lastErrorDescription;                          //@synthesize lastErrorDescription=_lastErrorDescription - In the implementation block
@property (assign,nonatomic) int state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id deviceConfiguredCompletionBlock;                         //@synthesize deviceConfiguredCompletionBlock=_deviceConfiguredCompletionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
-(void)removeFromNavHierarchyOf:(id)arg1 ;
-(void)setActivityLabel:(UILabel *)arg1 ;
-(void)cloudConfigDidChange:(id)arg1 ;
-(void)nextButtonPressed:(id)arg1 ;
-(void)_setupForState;
-(void)setDeviceConfiguredCompletionBlock:(id)arg1 ;
-(void)setLastErrorDescription:(NSString *)arg1 ;
-(NSString *)lastErrorDescription;
-(id)deviceConfiguredCompletionBlock;
-(id)init;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<BuddyControllerDelegate>)delegate;
-(UIView *)containerView;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)controllerDone;
-(UILabel *)messageView;
-(void)setMessageView:(UILabel *)arg1 ;
-(UILabel *)activityLabel;
@end
