/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebSelectionAssistant.h>

@class _UITextServiceSession, UILongPressGestureRecognizer;

@interface UIWKSelectionAssistant : UIWebSelectionAssistant {

	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;

}

@property (nonatomic,readonly) UILongPressGestureRecognizer * selectionLongPressRecognizer; 
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)selectionChanged;
-(char)shouldAllowSelectionGestures:(char)arg1 atPoint:(CGPoint)arg2 toBegin:(char)arg3 ;
-(CGRect)selectionFrame;
-(void)showSelectionCommands;
-(void)initializeSelectionView;
-(id)interactionView;
-(id)asyncSelectionView;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3 withFlags:(int)arg4 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(int)arg2 withFlags:(int)arg3 ;
-(void)blockSelectionChangedWithTouch:(int)arg1 withFlags:(int)arg2 growThreshold:(float)arg3 shrinkThreshold:(float)arg4 ;
-(UILongPressGestureRecognizer *)selectionLongPressRecognizer;
-(char)shouldHandleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(int)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)showShareSheetFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)lookup:(id)arg1 withRange:(NSRange)arg2 fromRect:(CGRect)arg3 ;
-(void)lookup:(id)arg1 fromRect:(CGRect)arg2 ;
@end

