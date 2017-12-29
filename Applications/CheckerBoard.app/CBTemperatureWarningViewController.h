/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, UIView, NSString;

@interface CBTemperatureWarningViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	UIView* _setupAssistantHeaderView;
	UIView* _containerFooterView;

}

@property (nonatomic,retain) UITableView * tableView;                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * setupAssistantHeaderView;              //@synthesize setupAssistantHeaderView=_setupAssistantHeaderView - In the implementation block
@property (nonatomic,retain) UIView * containerFooterView;                   //@synthesize containerFooterView=_containerFooterView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupHeaderView;
-(void)setupFooterView;
-(void)setSetupAssistantHeaderView:(UIView *)arg1 ;
-(UIView *)setupAssistantHeaderView;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)setupView;
-(void)setupTableView;
-(void)setContainerFooterView:(UIView *)arg1 ;
-(UIView *)containerFooterView;
@end
