/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>

@class NSArray, HKSample, WDControllerManager;

@interface WDDataMetadataViewController : HKTableViewController {

	NSArray* _sections;
	HKSample* _sample;
	WDControllerManager* _controllerManager;
	NSArray* _subSampleTypes;

}
+(id)_displayNameForSampleType:(id)arg1 dataUnitController:(id)arg2 ;
-(void)_dataUnitStringsChanged:(id)arg1 ;
-(void)_requestSubSampleTypes;
-(void)_reloadDetailRows;
-(id)_detailValuesForSample:(id)arg1 ;
-(id)_detailValuesForDevice:(id)arg1 ;
-(id)_sampleTypesForFixedValues:(id)arg1 sampleTypes:(id)arg2 ;
-(void)_exportButtonAction:(id)arg1 ;
-(void)_updateSubSampleTypes:(id)arg1 error:(id)arg2 ;
-(id)_trimAndSortSampleTypes:(id)arg1 ;
-(id)initWithSample:(id)arg1 controllerManager:(id)arg2 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)_localeDidChange:(id)arg1 ;
@end
