/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>

@class HKSource, WDControllerManager, UIFont, NSArray;

@interface WDSourceStoredDataViewController : HKTableViewController {

	char _queryReturned;
	HKSource* _source;
	WDControllerManager* _controllerManager;
	UIFont* _bodyFont;
	NSArray* _capturedSampleTypes;
	NSArray* _savedCategories;

}

@property (retain) NSArray * capturedSampleTypes;                                  //@synthesize capturedSampleTypes=_capturedSampleTypes - In the implementation block
@property (retain) NSArray * savedCategories;                                      //@synthesize savedCategories=_savedCategories - In the implementation block
@property (nonatomic,readonly) char sourceIsInstalled; 
@property (nonatomic,readonly) char sourceHasData; 
@property (assign,nonatomic) char queryReturned;                                   //@synthesize queryReturned=_queryReturned - In the implementation block
@property (retain) HKSource * source;                                              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) WDControllerManager * controllerManager;              //@synthesize controllerManager=_controllerManager - In the implementation block
@property (nonatomic,retain) UIFont * bodyFont;                                    //@synthesize bodyFont=_bodyFont - In the implementation block
-(WDControllerManager *)controllerManager;
-(void)setControllerManager:(WDControllerManager *)arg1 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)_dataUnitStringsChanged:(id)arg1 ;
-(void)handleSamplesQueryResults:(id)arg1 ;
-(void)setCapturedSampleTypes:(NSArray *)arg1 ;
-(NSArray *)capturedSampleTypes;
-(id)reduceCategoriesForCapturedSampleTypes:(id)arg1 ;
-(void)setSavedCategories:(NSArray *)arg1 ;
-(void)setQueryReturned:(char)arg1 ;
-(NSArray *)savedCategories;
-(char)sourceIsInstalled;
-(void)deleteSource;
-(void)deleteAllSourceData;
-(char)queryReturned;
-(char)sourceHasData;
-(void)selectSourceStoredDataTableViewCell:(id)arg1 ;
-(void)presentDeleteConfirmation;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)setSource:(HKSource *)arg1 ;
-(void)viewDidLoad;
-(id)initWithStyle:(int)arg1 ;
-(HKSource *)source;
-(UIFont *)bodyFont;
@end
