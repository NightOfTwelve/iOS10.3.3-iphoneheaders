/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBannerView, SBUIBannerSource;
@class UIView;

@interface SBBannerViewCallbackManager : NSObject {

	UIView*<SBUIBannerView> _view;
	id<SBUIBannerSource> _source;
	char _sentWillAppear;
	char _sentDidAppear;
	char _sentWillDismiss;
	char _sentDidDismiss;
	int _dismissReason;

}
-(id)initWithBannerView:(id)arg1 ;
-(char)hasSentAnyCallbacks;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)matchPreviousCallbacks:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

