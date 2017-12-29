/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPanGestureRecognizer.h>

@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer {

	int _barAction;
	float _bias;

}

@property (nonatomic,readonly) int barAction;              //@synthesize barAction=_barAction - In the implementation block
@property (nonatomic,readonly) float bias;                 //@synthesize bias=_bias - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_setDelegate:(id)arg1 ;
-(int)barAction;
-(float)bias;
-(char)canPreventGestureRecognizer:(id)arg1 ;
@end
