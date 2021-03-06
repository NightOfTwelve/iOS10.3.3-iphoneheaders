/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTitledBuddyViewController.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>
#import <Health/WDUserActivityResponder.h>

@class WDControllerManager, _HKMedicalIDData, UIButton, NSString;

@interface WDBuddyFlowMedicalIDViewController : HKTitledBuddyViewController <HKMedicalIDViewControllerDelegate, WDUserActivityResponder> {

	WDControllerManager* _controllerManager;
	_HKMedicalIDData* _buddyMedicalIDData;
	_HKMedicalIDData* _fetchedMedicalIDData;
	UIButton* _showMedicalIDButton;
	char _medicalIDIsNew;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)initWithControllerManager:(id)arg1 medicalIDData:(id)arg2 ;
-(void)_fetchMedicalIDData:(id)arg1 ;
-(void)_saveFetchedMedicalIDAndUpdateButtonTitle:(id)arg1 ;
-(void)_pushNextViewControllerAnimated:(char)arg1 ;
-(id)_medicalIDButtonTitle;
-(void)showMedicalIDButtonTapped:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)titleString;
-(id)titleImage;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)medicalIDViewControllerDidFinish:(id)arg1 ;
-(void)medicalIDViewControllerDidAppear:(id)arg1 ;
-(id)subsequentViews;
-(id)bottomAnchoredButtons;
-(id)bodyString;
-(void)buttonAtIndexTapped:(int)arg1 ;
-(void)notNowButtonTapped:(id)arg1 ;
@end

