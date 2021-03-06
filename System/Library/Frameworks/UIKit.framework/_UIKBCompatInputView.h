/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIKBCompatInputView : UIView {

	UIView* _snapshotView;

}

@property (nonatomic,readonly) UIView * touchableView; 
@property (nonatomic,retain) UIView * snapshotView;                 //@synthesize snapshotView=_snapshotView - In the implementation block
+(char)_retroactivelyRequiresConstraintBasedLayout;
-(void)addSubview:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)snapshotView;
-(CGSize)intrinsicContentSize;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(CGRect)_compatibleBounds;
-(void)setSnapshotView:(UIView *)arg1 ;
-(char)_hasAutolayoutHeightConstraint;
-(UIView *)touchableView;
@end

