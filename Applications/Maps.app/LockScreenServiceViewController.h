/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <Maps/LockScreenLayerSource.h>

@class IOSChromeViewController, UIActivityIndicatorView, NSString;

@interface LockScreenServiceViewController : UIViewController <LockScreenLayerSource> {

	IOSChromeViewController* _chromeViewController;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) IOSChromeViewController * chromeViewController;              //@synthesize chromeViewController=_chromeViewController - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                           //@synthesize spinner=_spinner - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isSecureForRemoteViewService;
-(IOSChromeViewController *)chromeViewController;
-(void)setChromeViewController:(IOSChromeViewController *)arg1 ;
-(char)isHoldingPortraitToReturnFromLockScreen;
-(id)viewForLockScreenDisplayWithReleaseRequestBlock:(/*^block*/id)arg1 ;
-(void)didReleaseViewForLockScreenDisplay;
-(void)willBeginDisplayingViewInLockScreenDisplay;
-(void)didEndDisplayingViewInLockScreenDisplay;
-(void)viewsVisibleRectDidChangeInLockScreenWithHeaderSize:(CGSize)arg1 footerSize:(CGSize)arg2 ;
-(void)beginDisplayingViewInLockScreenDisplayIfNeeded;
-(void)addSubviews;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

