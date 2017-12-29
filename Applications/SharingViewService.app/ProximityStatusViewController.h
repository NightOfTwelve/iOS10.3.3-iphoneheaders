/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SharingViewService.app/SharingViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UIView, UILabel, UIImageView, UIButton, SFDeviceDiscovery, NSUUID, ProximityCommonViewControllerProxy, NSDictionary, NSString;

@interface ProximityStatusViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {

	UIView* containerView;
	UILabel* titleLabel;
	UIImageView* leftImageView;
	UIImageView* leftIndicatorImageView;
	UIImageView* leftExclamationPointImageView;
	UILabel* leftBatteryLabel;
	UIImageView* leftBatteryLevelImageView;
	UIImageView* leftBatteryShellImageView;
	UIImageView* leftBatteryChargeImageView;
	UIImageView* rightImageView;
	UIImageView* rightIndicatorImageView;
	UIImageView* rightExclamationPointImageView;
	UILabel* rightBatteryLabel;
	UIImageView* rightBatteryLevelImageView;
	UIImageView* rightBatteryShellImageView;
	UIImageView* rightBatteryChargeImageView;
	UILabel* bothBatteryLabel;
	UIImageView* bothBatteryLevelImageView;
	UIImageView* bothBatteryShellImageView;
	UIImageView* bothBatteryChargeImageView;
	UIImageView* caseImageView;
	UILabel* caseBatteryLabel;
	UIImageView* caseBatteryLevelImageView;
	UIImageView* caseBatteryShellImageView;
	UIImageView* caseBatteryChargeImageView;
	UIButton* dismissButton;
	SFDeviceDiscovery* _deviceDiscovery;
	NSUUID* _deviceIdentifier;
	int _lastRSSI;
	int _lastSmoothedRSSI;
	double _viewAppearedTime;
	ProximityCommonViewControllerProxy* _proxyViewController;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain) ProximityCommonViewControllerProxy * proxyViewController;              //@synthesize proxyViewController=_proxyViewController - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProxyViewController:(ProximityCommonViewControllerProxy *)arg1 ;
-(ProximityCommonViewControllerProxy *)proxyViewController;
-(void)handleDismissButton:(id)arg1 ;
-(void)handleTapOutsideView:(id)arg1 ;
-(void)_testHandler:(id)arg1 ;
-(void)_deviceLost:(id)arg1 ;
-(void)_updateBatteryLevelLeft:(double)arg1 levelRight:(double)arg2 levelCase:(double)arg3 ;
-(void)_updateBatteryLevel:(double)arg1 levelImageView:(id)arg2 shellImageView:(id)arg3 percentLabel:(id)arg4 chargingImageView:(id)arg5 charging:(char)arg6 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(NSDictionary *)userInfo;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)_dismiss:(int)arg1 ;
-(void)_deviceFound:(id)arg1 ;
@end
