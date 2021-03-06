/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@protocol EventCaptureViewDelegate;
@class UIView;

@interface EventCaptureView : UIView {

	EventCaptureView* _forwardingView;
	/*^block*/id _eventFilter;
	id<EventCaptureViewDelegate> _delegate;

}

@property (nonatomic,retain) UIView * forwardingView;                                   //@synthesize forwardingView=_forwardingView - In the implementation block
@property (nonatomic,copy) id eventFilter;                                              //@synthesize eventFilter=_eventFilter - In the implementation block
@property (assign,nonatomic,__weak) id<EventCaptureViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIView *)forwardingView;
-(void)setForwardingView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EventCaptureViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<EventCaptureViewDelegate>)delegate;
-(id)eventFilter;
-(void)setEventFilter:(id)arg1 ;
@end

