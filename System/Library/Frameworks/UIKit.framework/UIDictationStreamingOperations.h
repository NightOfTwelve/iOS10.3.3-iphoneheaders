/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInput;
#import <UIKit/UIKit-Structs.h>
@class NSMutableArray;

@interface UIDictationStreamingOperations : NSObject {

	double _timeAfterInsertion;
	double _timeAfterSelectRange;
	id<UITextInput> _document;
	NSMutableArray* _operations;

}

@property (nonatomic,retain) NSMutableArray * operations;              //@synthesize operations=_operations - In the implementation block
-(id)init;
-(void)dealloc;
-(char)isEmpty;
-(id)pop;
-(void)setOperations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)operations;
-(void)popAndInvoke;
-(char)hasOperations;
-(void)pushSpeechOperation:(id)arg1 ;
-(void)clearOperations;
-(void)setDocument:(id)arg1 ;
-(void)performSelectRangeForSpeech:(id)arg1 ;
-(void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)_performReplaceSelectedText:(id)arg1 ;
-(double)delayAfterSelector:(SEL)arg1 ;
-(void)dictationWillBeginInDocument:(id)arg1 ;
-(void)pushSelectRangeForSpeech:(NSRange)arg1 ;
-(void)pushInsertTextForSpeech:(id)arg1 ;
-(void)pushReplaceSelectionWithText:(id)arg1 ;
-(void)willEndEditingInInputDelegate:(id)arg1 ;
-(char)isNotEmpty;
-(unsigned)selectionChangeDelta;
@end

