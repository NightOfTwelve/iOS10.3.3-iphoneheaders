/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UITableView, UIDatePicker;

@interface EditAlarmView : UIView {

	UITableView* _settingsTable;
	UIDatePicker* _timePicker;

}

@property (nonatomic,readonly) UITableView * settingsTable;              //@synthesize settingsTable=_settingsTable - In the implementation block
@property (nonatomic,readonly) UIDatePicker * timePicker;                //@synthesize timePicker=_timePicker - In the implementation block
-(UIDatePicker *)timePicker;
-(UITableView *)settingsTable;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
