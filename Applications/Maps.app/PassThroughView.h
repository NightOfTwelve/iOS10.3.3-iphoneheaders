/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@protocol PassThroughViewDelegate;
@class UIView;

@interface PassThroughView : UIView {

	UIView* _targetView;
	id<PassThroughViewDelegate> _delegate;

}

@property (nonatomic,retain) UIView * targetView;                                      //@synthesize targetView=_targetView - In the implementation block
@property (assign,nonatomic,__weak) id<PassThroughViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PassThroughViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<PassThroughViewDelegate>)delegate;
-(void)setTargetView:(UIView *)arg1 ;
-(UIView *)targetView;
@end

