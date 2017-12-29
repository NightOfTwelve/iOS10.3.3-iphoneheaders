/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding> {

	char _shouldDismiss;
	char _shouldAdvanceInputMode;
	char _requiresInputManagerSync;
	char _shouldAdvanceResponder;
	char _shouldPostReturnKeyNotification;
	NSArray* _keyboardOutputs;
	NSString* _primaryLanguage;
	int _inputModeListTouchPhase;
	double _inputModeListTouchBegan;
	CGPoint _inputModeListFromLocation;
	CGPoint _inputModeListUpdatePoint;

}

@property (nonatomic,retain) NSArray * keyboardOutputs;                         //@synthesize keyboardOutputs=_keyboardOutputs - In the implementation block
@property (assign,nonatomic) char shouldDismiss;                                //@synthesize shouldDismiss=_shouldDismiss - In the implementation block
@property (assign,nonatomic) char shouldAdvanceInputMode;                       //@synthesize shouldAdvanceInputMode=_shouldAdvanceInputMode - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguage;                          //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (assign,nonatomic) int inputModeListTouchPhase;                       //@synthesize inputModeListTouchPhase=_inputModeListTouchPhase - In the implementation block
@property (assign,nonatomic) double inputModeListTouchBegan;                    //@synthesize inputModeListTouchBegan=_inputModeListTouchBegan - In the implementation block
@property (assign,nonatomic) CGPoint inputModeListFromLocation;                 //@synthesize inputModeListFromLocation=_inputModeListFromLocation - In the implementation block
@property (assign,nonatomic) CGPoint inputModeListUpdatePoint;                  //@synthesize inputModeListUpdatePoint=_inputModeListUpdatePoint - In the implementation block
@property (assign,nonatomic) char requiresInputManagerSync;                     //@synthesize requiresInputManagerSync=_requiresInputManagerSync - In the implementation block
@property (assign,nonatomic) char shouldAdvanceResponder;                       //@synthesize shouldAdvanceResponder=_shouldAdvanceResponder - In the implementation block
@property (assign,nonatomic) char shouldPostReturnKeyNotification;              //@synthesize shouldPostReturnKeyNotification=_shouldPostReturnKeyNotification - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)primaryLanguage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)setShouldPostReturnKeyNotification:(char)arg1 ;
-(char)requiresInputManagerSync;
-(void)setRequiresInputManagerSync:(char)arg1 ;
-(void)setShouldAdvanceResponder:(char)arg1 ;
-(NSArray *)keyboardOutputs;
-(void)setKeyboardOutputs:(NSArray *)arg1 ;
-(char)shouldAdvanceResponder;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(char)shouldPostReturnKeyNotification;
-(char)shouldAdvanceInputMode;
-(double)inputModeListTouchBegan;
-(int)inputModeListTouchPhase;
-(CGPoint)inputModeListFromLocation;
-(CGPoint)inputModeListUpdatePoint;
-(char)shouldDismiss;
-(void)adjustTextPositionByCharacterOffset:(int)arg1 ;
-(void)setShouldDismiss:(char)arg1 ;
-(void)setShouldAdvanceInputMode:(char)arg1 ;
-(void)setInputModeListTouchPhase:(int)arg1 ;
-(void)setInputModeListTouchBegan:(double)arg1 ;
-(void)setInputModeListFromLocation:(CGPoint)arg1 ;
-(void)setInputModeListUpdatePoint:(CGPoint)arg1 ;
-(void)_pushNewKeyboardOutput;
-(id)_currentKeyboardOutput;
-(void)setInputModeList:(int)arg1 touchBegan:(double)arg2 fromLocation:(CGPoint)arg3 updatePoint:(CGPoint)arg4 ;
@end
