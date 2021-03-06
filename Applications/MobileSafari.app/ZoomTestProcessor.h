/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/ContentInteractionTestRunner.h>

@class CADisplayLink;

@interface ZoomTestProcessor : ContentInteractionTestRunner {

	char _didFirstZoomStep;
	char _zoomingIn;
	int _stepsPerZoom;
	CADisplayLink* _displayLink;
	int _iterationsRemaining;
	int _testState;

}

@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) int iterationsRemaining;                  //@synthesize iterationsRemaining=_iterationsRemaining - In the implementation block
@property (assign,nonatomic) int testState;                            //@synthesize testState=_testState - In the implementation block
@property (assign,nonatomic) char didFirstZoomStep;                    //@synthesize didFirstZoomStep=_didFirstZoomStep - In the implementation block
@property (assign,nonatomic) char zoomingIn;                           //@synthesize zoomingIn=_zoomingIn - In the implementation block
@property (assign,nonatomic) int stepsPerZoom;                         //@synthesize stepsPerZoom=_stepsPerZoom - In the implementation block
-(id)initWithTestName:(id)arg1 browserController:(id)arg2 ;
-(void)setStepsPerZoom:(int)arg1 ;
-(char)startPageAction:(id)arg1 ;
-(char)performActionForPage:(id)arg1 ;
-(void)setTestState:(int)arg1 ;
-(int)testState;
-(int)stepsPerZoom;
-(char)zoomingIn;
-(char)didFirstZoomStep;
-(void)setDidFirstZoomStep:(char)arg1 ;
-(char)updateWithNewScale;
-(void)zoomTestStep;
-(void)startZoomingTest;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setIterationsRemaining:(int)arg1 ;
-(int)iterationsRemaining;
-(void)setZoomingIn:(char)arg1 ;
@end

