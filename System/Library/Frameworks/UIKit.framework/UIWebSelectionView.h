/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIWebSelectionHandle, UIWebSelectionOutline, UIWebTextRangeView, UIWebDocumentView, UIWebSelectionNode, UIWebSelectionGraph, UIWebSelection;

@interface UIWebSelectionView : UIView {

	UIView* _center;
	CGRect _selectionFrame;
	UIWebSelectionHandle* _top;
	UIWebSelectionHandle* _right;
	UIWebSelectionHandle* _bottom;
	UIWebSelectionHandle* _left;
	UIWebSelectionOutline* _outline;
	UIWebTextRangeView* _textRangeView;
	UIWebDocumentView* _documentView;
	UIWebSelectionNode* _selectionNode;
	UIWebSelectionGraph* _selectionGraph;
	float _growThreshold;
	float _shrinkThreshold;
	SCD_Struct_UI53 _autoscrollData;
	SCD_Struct_UI54 _blockSelectionData;
	SCD_Struct_UI56 _rangedSelectionData;
	int _nestedLayoutCalls;
	char _calloutBarIsHiddenBeforeRotation;
	char _rotating;
	int _selectionInFixedPosition;
	char _creatingSelection;

}

@property (nonatomic,retain) UIWebSelectionNode * selectionNode;              //@synthesize selectionNode=_selectionNode - In the implementation block
@property (assign,nonatomic) CGRect selectionFrame; 
@property (nonatomic,readonly) UIWebSelection * selection; 
@property (assign,nonatomic) char creatingSelection;                          //@synthesize creatingSelection=_creatingSelection - In the implementation block
-(void)removeFromSuperview;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_subscribeToScrollNotificationsIfNecessary:(id)arg1 ;
-(void)_didScroll;
-(UIWebSelection *)selection;
-(void)updateSelectionRects;
-(void)selectionChanged;
-(CGRect)visibleRect;
-(void)clearSelection;
-(void)layoutChangedByScrolling:(char)arg1 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(void)scaleChanged;
-(CGRect)selectionFrame;
-(void)willStartScrollingOrZoomingPage;
-(void)didEndScrollingOrZoomingPage;
-(void)showControls;
-(id)scroller;
-(id)initWithWebDocumentView:(id)arg1 ;
-(void)hideControls;
-(void)startSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)updateSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)endSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)resetSelection;
-(void)hideControlsBeforeRotation;
-(void)showControlsAfterRotation;
-(CGRect)selectionBoundingRect;
-(void)showRangeSelection;
-(void)setCreatingSelection:(char)arg1 ;
-(void)updateFrameAndHandlesWithAnimation:(char)arg1 ;
-(id)tintView;
-(id)handleWithPosition:(int)arg1 ;
-(void)stopAnyAutoscrolling;
-(char)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2 ;
-(void)onBeforeScrollOrZoomHidingSelection:(char)arg1 ;
-(void)onAfterScrollOrZoomShowingSelection:(char)arg1 ;
-(void)updateTextRangeViewSelectionRects;
-(void)showCopyCalloutWithAnimation:(char)arg1 ;
-(id)handles;
-(void)hideCopyCallout;
-(void)setHandleCenters;
-(CGRect)fetchSelectionBoundingTextSelectionRect;
-(CGRect)fetchSelectionBoundingRect;
-(void)setSelectionFrame:(CGRect)arg1 ;
-(void)setSelectionNode:(UIWebSelectionNode *)arg1 ;
-(CGRect)desiredBox;
-(void)computeExpandAndContractThresholdsForActiveHandle;
-(char)shouldExpandForActiveHandle;
-(void)expandForActiveHandle;
-(char)shouldContractForActiveHandle;
-(void)contractForActiveHandle;
-(void)switchToTextModeForHandle:(id)arg1 ;
-(void)updateAutoscrollForHandle:(id)arg1 ;
-(void)considerFlipping;
-(void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2 ;
-(char)shouldSwitchToBlockModeForHandle:(id)arg1 ;
-(void)switchToBlockModeForHandle:(id)arg1 ;
-(void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2 ;
-(char)isHorizontalWritingMode;
-(UIWebSelectionNode *)selectionNode;
-(int)autoscrollDirectionsForHandle:(id)arg1 ;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)touchChanged:(id)arg1 forHandle:(id)arg2 ;
-(void)shiftWebRangeSelectionAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(id)nodeInPristineGraphAtPoint:(CGPoint)arg1 ;
-(id)activeHandle;
-(char)activelyManipulatingTextSelectionHandle;
-(void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
-(char)activelyManipulatingBlockSelectionHandle;
-(void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;
-(void)calloutBar:(id)arg1 selectedCommand:(id)arg2 ;
-(void)setSelectionFrame:(CGRect)arg1 animated:(char)arg2 ;
-(void)touchChanged:(id)arg1 forHandleInText:(id)arg2 ;
-(char)canFlip;
-(char)creatingSelection;
@end
