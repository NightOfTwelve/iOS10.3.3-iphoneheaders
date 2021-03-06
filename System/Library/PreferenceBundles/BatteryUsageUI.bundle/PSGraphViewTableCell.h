/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UIColor, UIScrollView, PLBatteryUIMoveableGraphView, UIActivityIndicatorView;

@interface PSGraphViewTableCell : PSTableCell {

	char waitingForData;
	char graphViewDidChange;
	NSMutableArray* _graphArray;
	UIColor* labelColor;
	UIColor* graphColor;
	UIScrollView* _scrollView;
	PLBatteryUIMoveableGraphView* _graphView;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) NSMutableArray * graphArray; 
@property (nonatomic,retain) UIScrollView * scrollView;                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) PLBatteryUIMoveableGraphView * graphView;                 //@synthesize graphView=_graphView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
+(int)graphHeight;
-(NSMutableArray *)graphArray;
-(void)setGraphArray:(NSMutableArray *)arg1 ;
-(void)generateGraphs;
-(void)pinch:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(PLBatteryUIMoveableGraphView *)graphView;
-(void)setGraphView:(PLBatteryUIMoveableGraphView *)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(char)canReload;
@end

