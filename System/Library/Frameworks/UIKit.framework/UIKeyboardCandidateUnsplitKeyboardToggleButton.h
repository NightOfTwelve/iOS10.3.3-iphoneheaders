/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateToggleButton.h>

@class UIKeyboardCandidatePocketShadow, UIImage;

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton {

	UIKeyboardCandidatePocketShadow* _pocketShadow;
	UIImage* _backgroundNormal;
	UIImage* _backgroundHighlighted;
	char _drawsBackground;
	char _drawsPocketShadow;

}

@property (assign,nonatomic) char drawsBackground;                //@synthesize drawsBackground=_drawsBackground - In the implementation block
@property (assign,nonatomic) char drawsPocketShadow;              //@synthesize drawsPocketShadow=_drawsPocketShadow - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)setDrawsBackground:(char)arg1 ;
-(char)drawsBackground;
-(void)setDrawsPocketShadow:(char)arg1 ;
-(void)updateBackgroundImages;
-(id)toggleButtonBackgroundImageWithHighlight:(char)arg1 ;
-(char)drawsPocketShadow;
@end

