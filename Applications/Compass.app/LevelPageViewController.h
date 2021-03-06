/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Compass.app/Compass
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Compass/CompassPage.h>

@class CALayer, UIView, UILabel, CMMotionManager, CAShapeLayer, CMAttitude, UITapGestureRecognizer, UIFontDescriptor, NSTimer, _UIFeedbackImpactBehavior, _UIFeedbackImpactBehaviorConfiguration, NSString;

@interface LevelPageViewController : UIViewController <CompassPage> {

	CALayer* _levelBottom;
	CALayer* _heldLevelBottom;
	CALayer* _divergenceLevelBottom;
	CALayer* _heldLevelBottomBacking;
	UIView* _filterContainer;
	UIView* _levelContainer;
	UIView* _levelHoldContainer;
	UIView* _bubbleContainer;
	UIView* _ticContainer;
	UILabel* _degreesLabel;
	CMMotionManager* _manager;
	CAShapeLayer* _bottomOuterCircle;
	CAShapeLayer* _bottomInnerCircle;
	CAShapeLayer* _topOuterCircle;
	CAShapeLayer* _topInnerCircle;
	CALayer* _leftLevelTic;
	CALayer* _rightLevelTic;
	float _currentShift;
	float _currentRotation;
	float _previousShift;
	float _previousRotation;
	char _isLevel;
	float _lastLevelChange;
	int _orientation;
	int _rotationOrientation;
	int _heldOrientation;
	int _previousOrientation;
	char _isZeroed;
	CMAttitude* _holdAttitude;
	char _isHeld;
	float _holdAngle;
	float _holdShift;
	UITapGestureRecognizer* _holdRecognizer;
	int _lastDisplayDegrees;
	int _framesLevel;
	float _zeroRange;
	UIFontDescriptor* _fontDescriptor;
	NSTimer* _levelIdleTimer;
	_UIFeedbackImpactBehavior* _impactBehavior;
	_UIFeedbackImpactBehaviorConfiguration* _impactConfig;

}

@property (nonatomic,retain) CMAttitude * holdAttitude;              //@synthesize holdAttitude=_holdAttitude - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)toggleHold:(id)arg1 ;
-(void)updateTicsForOrientation:(int)arg1 ;
-(void)_updateOffsetLabel:(float)arg1 ;
-(char)_updateForRotation:(float)arg1 shiftAngle:(float)arg2 ;
-(void)setHoldAttitude:(CMAttitude *)arg1 ;
-(CMAttitude *)holdAttitude;
-(void)userDefaultsChanged:(id)arg1 ;
-(void)dealloc;
-(char)prefersStatusBarHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)updateDisplay:(id)arg1 ;
-(void)_enableIdleTimer;
-(void)updateColors;
@end

