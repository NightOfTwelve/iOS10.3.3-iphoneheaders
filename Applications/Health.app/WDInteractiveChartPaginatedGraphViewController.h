/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKViewController.h>

@protocol HKGraphViewDelegate;
@class WDGraphViewController, NSDate, HKGraphView;

@interface WDInteractiveChartPaginatedGraphViewController : HKViewController {

	WDGraphViewController* _graphViewController;
	NSDate* _creationDate;
	NSDate* _centerDate;
	id<HKGraphViewDelegate> _graphViewDelegate;
	int _timeScope;

}

@property (nonatomic,__weak,readonly) id<HKGraphViewDelegate> graphViewDelegate;                //@synthesize graphViewDelegate=_graphViewDelegate - In the implementation block
@property (nonatomic,readonly) int timeScope;                                                   //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,readonly) WDGraphViewController * currentGraphViewController; 
@property (nonatomic,readonly) HKGraphView * currentGraphView; 
-(id)initWithTimeScope:(int)arg1 creationDate:(id)arg2 graphViewDelegate:(id)arg3 centeredAboutDate:(id)arg4 ;
-(id)_createGraphViewController;
-(WDGraphViewController *)currentGraphViewController;
-(id<HKGraphViewDelegate>)graphViewDelegate;
-(void)viewDidLoad;
-(HKGraphView *)currentGraphView;
-(int)timeScope;
@end

