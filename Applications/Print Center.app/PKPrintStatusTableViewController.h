/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Print Center.app/Print Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class PKJob, NSDateFormatter;

@interface PKPrintStatusTableViewController : UITableViewController {

	PKJob* _printJob;
	NSDateFormatter* _sentFormatter;

}
-(void)updateCancelButton;
-(void)popToJobsView;
-(void)updateJobInfo;
-(id)localizedOptionsForSettings:(id)arg1 ;
-(id)initWithJob:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)cancelPrinting;
@end
