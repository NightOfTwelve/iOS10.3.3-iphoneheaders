/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBBannerContextViewControllerDelegate
@required
-(void)bannerViewController:(id)arg1 willSelectAction:(id)arg2 withContext:(id)arg3;
-(void)bannerViewControllerDidSelectAction:(id)arg1;
-(void)bannerViewControllerDidRequestDismissal:(id)arg1;
-(void)bannerViewControllerDidRequestSticky:(id)arg1;
-(void)bannerViewController:(id)arg1 didRequestSticky:(char)arg2;
-(void)bannerViewControllerDidReceiveRaiseGesture:(id)arg1;
-(void)bannerViewControllerDidShrinkForKeyboard:(id)arg1;
-(void)bannerViewControllerDidPullDown:(id)arg1;

@end
