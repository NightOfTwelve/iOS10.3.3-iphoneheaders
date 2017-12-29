/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class MPAVRoutingController, MPAudioVideoRoutingPopoverController, MPAVRoutingSheet, UIWebDocumentView, NSString;

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {

	MPAVRoutingController* _routingController;
	MPAudioVideoRoutingPopoverController* _popoverController;
	MPAVRoutingSheet* _actionSheet;
	UIWebDocumentView* _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)show:(char)arg1 fromRect:(CGRect)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_windowWillRotate:(id)arg1 ;
-(void)_dismissAirPlayRoutePickerIPad;
-(void)_windowDidRotate:(id)arg1 ;
-(void)_presentAirPlayPopoverAnimated:(char)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPad:(int)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPhone:(int)arg1 ;
@end
