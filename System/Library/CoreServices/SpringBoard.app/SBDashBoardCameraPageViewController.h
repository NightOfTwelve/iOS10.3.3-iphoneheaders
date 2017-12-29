/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardPageViewController.h>
#import <SpringBoard/SBDashBoardHostedAppViewControllerDelegate.h>

@class UIView, SBDashBoardHostedAppViewController, NSSet, NSString;

@interface SBDashBoardCameraPageViewController : SBDashBoardPageViewController <SBDashBoardHostedAppViewControllerDelegate> {

	UIView* _maskView;
	UIView* _tintView;
	SBDashBoardHostedAppViewController* _appViewController;

}

@property (nonatomic,retain) NSSet * actionsToDeliver; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isAvailableForConfiguration;
+(unsigned)requiredCapabilities;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id)hostedApp;
-(char)isHostingAnApp;
-(int)presentationAltitude;
-(char)wouldHandleButtonEvent:(id)arg1 ;
-(char)canHostAnApp;
-(void)hostedAppWillRotateToInterfaceOrientation:(int)arg1 ;
-(void)updateTransitionToVisible:(char)arg1 progress:(float)arg2 mode:(int)arg3 ;
-(void)didTransitionToVisible:(char)arg1 ;
-(NSSet *)actionsToDeliver;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(void)_transitionAppViewWithProgress:(float)arg1 ;
-(void)_bailIfFaceTimeCallComesIn;
-(char)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(int)arg2 ;
-(char)handleEvent:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
@end
