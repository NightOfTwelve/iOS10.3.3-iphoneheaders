/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBCommandTabViewControllerDelegate.h>

@class SBCommandTabViewController, NSTimer, FBUIApplicationSceneDeactivationAssertion, SBWindow, NSString;

@interface SBCommandTabController : NSObject <SBCommandTabViewControllerDelegate> {

	SBCommandTabViewController* _commandTabViewController;
	NSTimer* _timer;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBWindow* _window;

}

@property (nonatomic,readonly) SBWindow * window;                          //@synthesize window=_window - In the implementation block
@property (getter=isVisible,nonatomic,readonly) char visible; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)keyCommands;
-(void)launchCurrentSelectedApplication;
-(void)_showWindow:(char)arg1 ;
-(void)viewController:(id)arg1 selectedApplicationWithDisplayItem:(id)arg2 ;
-(void)_showCommandTabBarAfterTimer:(id)arg1 ;
-(void)viewControllerWantsDismissal:(id)arg1 ;
-(void)activateWithKeyCommand:(id)arg1 ;
-(void)_activateWithForwardDirection:(char)arg1 ;
-(id)init;
-(void)next;
-(void)previous;
-(void)dealloc;
-(SBWindow *)window;
-(char)isVisible;
-(void)dismiss;
-(void)_clearTimer;
@end

