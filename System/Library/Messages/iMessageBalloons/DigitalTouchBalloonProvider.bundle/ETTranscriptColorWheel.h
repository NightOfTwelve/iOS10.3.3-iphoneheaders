/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/DigitalTouchBalloonProvider-Structs.h>
#import <DigitalTouchShared/DTSColorWheel.h>

@class UIImageView, UIView;

@interface ETTranscriptColorWheel : DTSColorWheel {

	UIImageView* _gradientImageView;
	UIView* _doneView;
	char _presented;

}

@property (assign,getter=isPresented,nonatomic) char presented;              //@synthesize presented=_presented - In the implementation block
-(void)presentAnimatedWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimatedWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setPickerPositionInGradientWheel;
-(void)setHueForPaletteCircle:(id)arg1 ;
-(float)_doneViewDiameter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)isPresented;
-(void)setPresented:(char)arg1 ;
-(void)beganTouches:(id)arg1 ;
-(id)pickerViewHighlightedColor;
-(void)createDoneButtonWithFrame:(CGRect)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
@end
