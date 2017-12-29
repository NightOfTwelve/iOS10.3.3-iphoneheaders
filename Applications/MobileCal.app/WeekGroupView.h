/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/WeekViewDelegate.h>

@protocol WeekGroupViewDelegate;
@class WeekView, UIView, NSDateComponents, NSCalendar, NSTimeZone, NSString;

@interface WeekGroupView : UIView <UIScrollViewDelegate, WeekViewDelegate> {

	WeekView* _weekView;
	UIView* _gutterView;
	char _showsTimeMarker;
	id<WeekGroupViewDelegate> _delegate;
	int _week;
	NSDateComponents* _highlightedDateComponents;

}

@property (nonatomic,copy) NSDateComponents * weekStartDate; 
@property (nonatomic,copy) NSCalendar * calendar; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic,__weak) id<WeekGroupViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WeekView * weekView;                                     //@synthesize weekView=_weekView - In the implementation block
@property (assign,nonatomic) char showsTimeMarker;                                      //@synthesize showsTimeMarker=_showsTimeMarker - In the implementation block
@property (assign,nonatomic) int week;                                                  //@synthesize week=_week - In the implementation block
@property (nonatomic,retain) NSDateComponents * highlightedDateComponents;              //@synthesize highlightedDateComponents=_highlightedDateComponents - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)standardWidthForOrientation:(int)arg1 ;
+(float)offsetForDayIntoWeek:(int)arg1 forOrientation:(int)arg2 ;
-(void)showOverlayMonthInCellAtOffset:(float)arg1 animated:(char)arg2 ;
-(void)weekViewDidLayout:(id)arg1 ;
-(NSDateComponents *)weekStartDate;
-(id)viewForEvent:(id)arg1 ;
-(void)weekViewDidBeginDragging:(id)arg1 ;
-(void)weekViewDidScroll:(id)arg1 ;
-(void)weekViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)weekViewDidEndDecelerating:(id)arg1 ;
-(void)weekView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)weekView:(id)arg1 receivedTapInAllDayAreaOnDate:(id)arg2 ;
-(void)weekViewAllDaySectionDidScroll:(id)arg1 ;
-(id)weekViewForWeekBefore:(id)arg1 ;
-(id)weekViewForWeekAfter:(id)arg1 ;
-(id)dateForXOffset:(float)arg1 ;
-(void)emptySpaceClickedOnDate:(id)arg1 ;
-(void)setWeekStartDate:(NSDateComponents *)arg1 ;
-(void)setHighlightedDateComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)highlightedDateComponents;
-(void)adjustForVisibleRect:(CGRect)arg1 ;
-(char)scrollerIsParentOfView:(id)arg1 isAllDay:(char)arg2 ;
-(WeekView *)weekView;
-(void)emptySpaceClick;
-(id)highlightedCalendarDateComponents;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<WeekGroupViewDelegate>)arg1 ;
-(void)reloadData;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WeekGroupViewDelegate>)delegate;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(float)gutterWidth;
-(int)week;
-(void)setWeek:(int)arg1 ;
-(void)setShowsTimeMarker:(char)arg1 ;
-(char)showsTimeMarker;
-(int)_secondAtPosition:(float)arg1 ;
-(void)setHourHeightScale:(float)arg1 ;
-(id)dateAtPoint:(CGPoint)arg1 isAllDay:(char*)arg2 requireAllDayRegionInsistence:(char)arg3 ;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(CGPoint)pointAtDate:(id)arg1 isAllDay:(char)arg2 ;
-(void)addViewToScroller:(id)arg1 isAllDay:(char)arg2 ;
-(char)containsDate:(id)arg1 ;
@end
