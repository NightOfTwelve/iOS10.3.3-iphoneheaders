/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Compass.app/Compass
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Compass/Compass-Structs.h>
#import <UIKit/UIViewController.h>
#import <Compass/CompassPage.h>

@class CompassView, CompassCopyableLabel, UILabel, CLLocation, CMMotionManager, NSTimer, NSMutableDictionary, CLLocationManager, _UIFeedbackImpactBehavior, _UIFeedbackImpactBehaviorConfiguration, NSString;

@interface CompassPageViewController : UIViewController <CompassPage> {

	CompassView* _compassView;
	CompassCopyableLabel* _coordinatesLabel;
	UILabel* _altitudeLabel;
	UILabel* _directionLabel;
	UILabel* _lowDirectionLabel;
	UILabel* _degreesLabel;
	UILabel* _centeredDegreesLabel;
	UILabel* _primaryPlaceLabel;
	UILabel* _secondaryPlaceLabel;
	CLLocation* _userLocation;
	double _currentCompassAngle;
	double _previousCompassAngle;
	CMMotionManager* _manager;
	int _currentDisplayHeading;
	float _headingFilter;
	NSTimer* _compassIdleTimer;
	NSMutableDictionary* _formattedDegreeText;
	char _usesTrueNorth;
	char _hasCalibration;
	CLLocationManager* _sharedLocationManager;
	char _enableHaptics;
	_UIFeedbackImpactBehavior* _impactBehavior;
	_UIFeedbackImpactBehaviorConfiguration* _impactConfig;
	UILabel* _consoleLabel;

}

@property (nonatomic,retain) CLLocation * userLocation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setSharedLocationManager:(id)arg1 ;
-(void)updateConsole;
-(void)_updateCoordinateLabel;
-(void)_updateHeadingLabels:(char)arg1 ;
-(void)_openMaps;
-(void)startMotionManager;
-(void)_updatePlaceLabels;
-(void)_updatePlaceLabelLayout;
-(void)setCompassToAngle:(double)arg1 force:(char)arg2 ;
-(void)setCrosshairLevelForData:(SCD_Struct_Co0)arg1 ;
-(void)_geocodeIfNecessaryForTime:(double)arg1 distance:(double)arg2 ;
-(void)_updateDegreesLabel:(char)arg1 ;
-(void)_updateDirectionLabel:(char)arg1 ;
-(void)userDefaultsChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)updateDisplay:(id)arg1 ;
-(void)setUserLocation:(CLLocation *)arg1 ;
-(void)localeDidChange:(id)arg1 ;
-(void)addConstraints;
-(CLLocation *)userLocation;
-(void)_enableIdleTimer;
@end

