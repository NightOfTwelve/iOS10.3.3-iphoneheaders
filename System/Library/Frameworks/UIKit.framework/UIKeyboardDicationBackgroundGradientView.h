/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIBasicAnimationFactory.h>

@class UIKBRenderConfig, UIDictationView, NSString;

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory> {

	UIKBRenderConfig* _renderConfig;
	UIDictationView* _dictationView;

}

@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (assign,nonatomic) UIDictationView * dictationView;              //@synthesize dictationView=_dictationView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(UIKBRenderConfig *)renderConfig;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setDictationView:(UIDictationView *)arg1 ;
-(UIDictationView *)dictationView;
-(id)backgroundColorForCurrentRenderConfig;
-(void)startColorTransitionIn;
-(void)startColorTransitionOut;
-(CGRect)_backgroundFillFrame;
@end

