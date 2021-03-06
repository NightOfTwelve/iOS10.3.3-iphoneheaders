/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <UIKit/UIView.h>

@class UITableView, NSMutableArray, UIView, NSLayoutConstraint;

@interface MapsWidgetView : UIView {

	char _showFrequentLocationError;
	char _expanded;
	UITableView* _tableView;
	float _tableRowHeight;
	float _singleRowHeight;
	unsigned _maxNumberOfRows;
	NSMutableArray* _viewContraints;
	UIView* _noEntriesView;
	NSLayoutConstraint* _tableVerticalMarginConstraint;
	NSLayoutConstraint* _tableHeightConstraint;

}

@property (assign,nonatomic) unsigned maxNumberOfRows;                                        //@synthesize maxNumberOfRows=_maxNumberOfRows - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewContraints;                                 //@synthesize viewContraints=_viewContraints - In the implementation block
@property (nonatomic,retain) UIView * noEntriesView;                                          //@synthesize noEntriesView=_noEntriesView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableVerticalMarginConstraint;              //@synthesize tableVerticalMarginConstraint=_tableVerticalMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableHeightConstraint;                      //@synthesize tableHeightConstraint=_tableHeightConstraint - In the implementation block
@property (assign,nonatomic) float tableRowHeight;                                            //@synthesize tableRowHeight=_tableRowHeight - In the implementation block
@property (assign,nonatomic) char showFrequentLocationError;                                  //@synthesize showFrequentLocationError=_showFrequentLocationError - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (assign,getter=isExpanded,nonatomic) char expanded;                                 //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) float singleRowHeight;                                           //@synthesize singleRowHeight=_singleRowHeight - In the implementation block
-(NSMutableArray *)viewContraints;
-(void)setViewContraints:(NSMutableArray *)arg1 ;
-(void)setMaxNumberOfRows:(unsigned)arg1 ;
-(unsigned)maxNumberOfRows;
-(id)initWithFrame:(CGRect)arg1 andMaxNumberOfRows:(unsigned)arg2 ;
-(void)setSingleRowHeight:(float)arg1 ;
-(void)setShowFrequentLocationError:(char)arg1 ;
-(UIView *)noEntriesView;
-(void)showNoEntriesView:(char)arg1 ;
-(char)showFrequentLocationError;
-(float)tableRowHeight;
-(void)setTableRowHeight:(float)arg1 ;
-(float)singleRowHeight;
-(void)setNoEntriesView:(UIView *)arg1 ;
-(NSLayoutConstraint *)tableVerticalMarginConstraint;
-(void)setTableVerticalMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)tableHeightConstraint;
-(void)setTableHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UITableView *)tableView;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(void)setupConstraints;
-(void)tapAction:(id)arg1 ;
@end

