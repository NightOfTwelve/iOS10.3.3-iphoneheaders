/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/ControlContaineeViewController.h>
#import <Maps/MapsTheming.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol RoutePlanningDataCoordination;
@class TransitOptionsWheelsOfTimeCell, UITableViewCell, RoutePlanningTiming, ModalCardHeaderView, UITableView, NSString;

@interface RoutePlanningTimingPickerViewController : ControlContaineeViewController <MapsTheming, UITableViewDelegate, UITableViewDataSource> {

	TransitOptionsWheelsOfTimeCell* _wheelsOfTimeCell;
	UITableViewCell* _leaveNowCell;
	char _showArriveBy;
	id<RoutePlanningDataCoordination> _dataCoordinator;
	RoutePlanningTiming* _originalTiming;
	ModalCardHeaderView* _modalHeaderView;
	UITableView* _tableView;

}

@property (nonatomic,retain) ModalCardHeaderView * modalHeaderView;                                 //@synthesize modalHeaderView=_modalHeaderView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<RoutePlanningDataCoordination> dataCoordinator;              //@synthesize dataCoordinator=_dataCoordinator - In the implementation block
@property (nonatomic,copy) RoutePlanningTiming * originalTiming;                                    //@synthesize originalTiming=_originalTiming - In the implementation block
@property (nonatomic,readonly) RoutePlanningTiming * selectedTiming; 
@property (assign,nonatomic) char showArriveBy;                                                     //@synthesize showArriveBy=_showArriveBy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initialConstraints;
-(void)_customInit;
-(void)updateTheme;
-(void)setOriginalTiming:(RoutePlanningTiming *)arg1 ;
-(RoutePlanningTiming *)originalTiming;
-(char)showArriveBy;
-(id<RoutePlanningDataCoordination>)dataCoordinator;
-(void)setDataCoordinator:(id<RoutePlanningDataCoordination>)arg1 ;
-(ModalCardHeaderView *)modalHeaderView;
-(void)setModalHeaderView:(ModalCardHeaderView *)arg1 ;
-(RoutePlanningTiming *)selectedTiming;
-(void)setShowArriveBy:(char)arg1 ;
-(void)_configureLeaveNowCell:(id)arg1 ;
-(void)_resetWheelsOfTimeCellToOriginalTiming;
-(char)_shouldDisableLeaveNow;
-(void)_wheelsOfTimeSelectionDidChange;
-(char)_wheelsOfTimeShouldBeCompactForTraitCollection:(id)arg1 ;
-(void)_commitTiming;
-(id)initWithCoder:(id)arg1 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)doneButtonTapped:(id)arg1 ;
@end
