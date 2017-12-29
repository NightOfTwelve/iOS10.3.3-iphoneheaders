/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <FindMyFriends/MainViewController.h>
#import <libobjc.A.dylib/EKDayTimeViewDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <MobileCal/MainViewControllerOptionalMethods.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/WeekViewDataSource.h>
#import <MobileCal/WeekGroupViewDelegate.h>
#import <libobjc.A.dylib/EKEventGestureControllerDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>

@protocol UIViewControllerPreviewing, WeekViewControllerDelegate;
@class CalendarModel, EKCalendarDate, EKDayOccurrenceView, NSMutableArray, UIScrollView, UIView, NSTimer, EKEventGestureController, WeekTimeView, NSString, UITraitCollection;

@interface WeekViewController : MainViewController <EKDayTimeViewDelegate, UIViewControllerPreviewingDelegate, MainViewControllerOptionalMethods, UIScrollViewDelegate, WeekViewDataSource, WeekGroupViewDelegate, EKEventGestureControllerDelegate, EKEventViewDelegatePrivate> {

	CalendarModel* _model;
	EKCalendarDate* _displayedDate;
	EKCalendarDate* _referenceWeekStart;
	EKDayOccurrenceView* _proposedTimeView;
	float _weekWidth;
	NSRange _visibleRange;
	CGSize _lastBoundsSize;
	char _viewIsVisible;
	char _initialShow;
	char _needsReload;
	char _needsHourHeightUpdate;
	char _updatingAllDayContentOffset;
	char _showWeekNumber;
	int _lastScrollPositionSecond;
	float _cachedHeaderHeight;
	int _currentlyDisplayedWeekNumber;
	NSMutableArray* _reloadDates;
	CGPoint _lastPinchDistance;
	CGPoint _lastPinchPoint1;
	UIScrollView* _weekScroller;
	UIView* _allDayDividerLineView;
	NSTimer* _timeMarkerTimer;
	char _editorDismissedFromDelete;
	id<UIViewControllerPreviewing> _viewControllerPreviewingRegistration;
	char _receiveTapsInHeader;
	char _showOverlayCalendar;
	char _displaysDatesSnappedToWeekBoundaries;
	id<WeekViewControllerDelegate> _delegate;
	float _weekViewHourHeightScale;
	EKEventGestureController* _eventGestureController;
	NSMutableArray* _visibleWeeks;
	NSMutableArray* _reusableViews;
	WeekTimeView* _timeView;

}

@property (nonatomic,readonly) CalendarModel * model; 
@property (nonatomic,readonly) EKEventGestureController * eventGestureController;                          //@synthesize eventGestureController=_eventGestureController - In the implementation block
@property (nonatomic,readonly) char showOverlayCalendar;                                                   //@synthesize showOverlayCalendar=_showOverlayCalendar - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleWeeks;                                                //@synthesize visibleWeeks=_visibleWeeks - In the implementation block
@property (nonatomic,retain) NSMutableArray * reusableViews;                                               //@synthesize reusableViews=_reusableViews - In the implementation block
@property (nonatomic,retain) WeekTimeView * timeView;                                                      //@synthesize timeView=_timeView - In the implementation block
@property (assign,nonatomic) char displaysDatesSnappedToWeekBoundaries;                                    //@synthesize displaysDatesSnappedToWeekBoundaries=_displaysDatesSnappedToWeekBoundaries - In the implementation block
@property (nonatomic,copy) EKCalendarDate * displayedDate; 
@property (assign,nonatomic,__weak) id<WeekViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char receiveTapsInHeader;                                                     //@synthesize receiveTapsInHeader=_receiveTapsInHeader - In the implementation block
@property (assign,nonatomic) int firstVisibleSecond; 
@property (assign,nonatomic) float weekViewHourHeightScale;                                                //@synthesize weekViewHourHeightScale=_weekViewHourHeightScale - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,retain) UITraitCollection * futureTraitCollection; 
@property (nonatomic,readonly) char isTransitioningTraitCollection; 
@property (assign,nonatomic) char isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView; 
@property (nonatomic,readonly) char shouldAdaptEventViewControllers; 
-(void)selectDate:(id)arg1 animated:(char)arg2 ;
-(void)setDisplayedDate:(id)arg1 animated:(char)arg2 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 context:(NSDictionary*)arg4 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 context:(NSDictionary*)arg5 ;
-(void)_updateBackButtonOnBackViewControllerToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 context:(NSDictionary*)arg3 ;
-(char)shouldPushNextLevelViewControllerWhenTodayIsVisible;
-(id)bestDateForNewEvent;
-(char)isTodayVisible;
-(char)currentlyEditingEventsWithGestures;
-(char)allowsOverriddenRightNavigationBarItems;
-(char)allowsOverriddenToolbarItems;
-(void)_selectedDateChanged:(id)arg1 ;
-(void)_significantTimeChanged:(id)arg1 ;
-(void)weekAllDayView:(id)arg1 occurrenceClicked:(id)arg2 onDay:(double)arg3 ;
-(void)setReceiveTapsInHeader:(char)arg1 ;
-(char)receiveTapsInHeader;
-(void)updateWeekNumber;
-(id)weekView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)viewForEvent:(id)arg1 ;
-(void)emptySpaceClickedOnDate:(id)arg1 ;
-(EKCalendarDate *)displayedDate;
-(void)weekGroupDidScroll:(id)arg1 ;
-(void)weekGroupAllDaySectionDidScroll:(id)arg1 ;
-(void)weekGroup:(id)arg1 didReceiveTapForDate:(id)arg2 ;
-(id)weekGroupForWeekBefore:(id)arg1 ;
-(id)weekGroupForWeekAfter:(id)arg1 ;
-(void)weekGroup:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)emptySpaceClick;
-(void)weekGroupViewDidLayout:(id)arg1 ;
-(float)headerVerticalOffset;
-(void)_weekScrollerPinched:(id)arg1 ;
-(void)_weekScrollerDoubleTapped:(id)arg1 ;
-(float)scrollToDisplayedDateAnimated:(char)arg1 ;
-(void)_showWeekNumbersPrefDidChange;
-(char)usePortraitLayoutForSize:(CGSize)arg1 ;
-(int)orientationForSize:(CGSize)arg1 ;
-(void)layoutCellsAnimated:(char)arg1 ;
-(void)resizeWeekGroupsIfNeededForOrientation:(int)arg1 ;
-(void)setDisplayedDate:(EKCalendarDate *)arg1 ;
-(void)overlayCalendarDidChange;
-(void)_setHourHeightScale:(float)arg1 ;
-(void)adjustVisibleAllDayOccurrenceLabelsAnimated:(char)arg1 ;
-(void)_scrollToCurrentTimeOfDayAnimated:(char)arg1 ;
-(void)undimOccurrence:(id)arg1 ;
-(void)_updateHeaderHeightsAnimated:(char)arg1 ;
-(void)scrollEventIntoView:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)dateIsVisible:(id)arg1 ;
-(void)setNeedsRelayoutCells;
-(void)occurrenceClicked:(id)arg1 onDay:(double)arg2 ;
-(CGRect)_boundsForWeek:(int)arg1 ;
-(id)_dateForWeek:(int)arg1 ;
-(void)customizeWeekGroupView:(id)arg1 ;
-(NSRange)visibleRangeForOffset:(float)arg1 ;
-(void)_reuseWeekView:(id)arg1 ;
-(id)_createPreparedViewForWeek:(int)arg1 ;
-(void)snapTargetScrollOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(char)displaysDatesSnappedToWeekBoundaries;
-(id)dayDateAtPoint:(CGPoint)arg1 ;
-(id)_snapDateForOffset:(CGPoint)arg1 snapToWeeks:(char)arg2 ;
-(float)_xOffsetForDate:(id)arg1 ;
-(void)draggingDone;
-(id)earliestDateComponents;
-(void)_updatePreferredReloadRange;
-(id)centerDateComponents;
-(void)updateDisplayedDateForCurrentScrollOffset;
-(void)_reloadDataIfVisible;
-(void)_removeDateHighlight;
-(void)synchronizeWeekGroupScrollingToWeek:(id)arg1 ;
-(char)_weekGroup:(id)arg1 containsOccurrence:(id)arg2 ;
-(NSMutableArray *)visibleWeeks;
-(void)_setReduceLayoutProcessingForAnimation:(char)arg1 ;
-(void)_scrollEventIntoView:(id)arg1 animated:(char)arg2 durationOverride:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)_weekGroupForEvent:(id)arg1 ;
-(void)_scrollToSecond:(int)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)_weekGroupForPoint:(CGPoint)arg1 ;
-(void)highlightDayViewCalendarDate:(id)arg1 isAllDay:(char)arg2 ;
-(id)_earliestWeekGroup;
-(void)didEditEvent:(id)arg1 ;
-(void)dimOccurrence:(id)arg1 ;
-(float)_widthForDayAtPoint:(CGPoint)arg1 isMovingRight:(char)arg2 ;
-(void)tappedOnDate:(id)arg1 ;
-(EKEventGestureController *)eventGestureController;
-(id)_earliestVisibleWeekGroupView;
-(void)cleanupSelectionState;
-(id)weekScroller;
-(char)shouldSnapToWeeksOnFlicks;
-(void)occurrencesChanged:(id)arg1 ;
-(float)currentScrollViewXOffset;
-(void)scrollEventIntoView:(id)arg1 animateWithDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)_viewForEvent:(id)arg1 ;
-(void)eventGestureControllerDidMoveAfterEditorChange:(id)arg1 ;
-(float)weekViewHourHeightScale;
-(void)setWeekViewHourHeightScale:(float)arg1 ;
-(char)showOverlayCalendar;
-(void)setVisibleWeeks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)reusableViews;
-(void)setReusableViews:(NSMutableArray *)arg1 ;
-(void)setDisplaysDatesSnappedToWeekBoundaries:(char)arg1 ;
-(void)setDelegate:(id<WeekViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<WeekViewControllerDelegate>)delegate;
-(int)interfaceOrientation;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(CalendarModel *)model;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)currentPresentationController;
-(void)_localeChanged:(id)arg1 ;
-(void)tapReceived:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)_updateContentForSizeCategoryChange:(id)arg1 ;
-(void)_startMarkerTimer;
-(void)_invalidateMarkerTimer;
-(void)setFirstVisibleSecond:(int)arg1 ;
-(CGRect)currentTimeRectInView:(id)arg1 ;
-(int)firstVisibleSecond;
-(float)maximumHourScale;
-(float)minimumHourScale;
-(CGPoint)_pinchDistanceForGestureRecognizer:(id)arg1 ;
-(id)dateAtPoint:(CGPoint)arg1 isAllDay:(char*)arg2 requireAllDayRegionInsistence:(char)arg3 ;
-(WeekTimeView *)timeView;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(id)dateAtPoint:(CGPoint)arg1 isAllDay:(char*)arg2 ;
-(CGPoint)pointAtDate:(double)arg1 isAllDay:(char)arg2 ;
-(float)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned)arg2 ;
-(float)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(char)arg3 ;
-(CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(char)arg3 ;
-(void)_highlightDayViewDate:(double)arg1 isAllDay:(char)arg2 ;
-(id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(CGPoint)arg2 ;
-(id)touchTrackingViewForEventGestureController:(id)arg1 ;
-(id)occurrenceViewSuperviewForEventGestureController:(id)arg1 ;
-(float)timedRegionOriginForEventGestureController:(id)arg1 ;
-(UIEdgeInsets)pageChangeMarginsForEventGestureController:(id)arg1 ;
-(char)moreThanOneDayVisibleForEventGestureController:(id)arg1 ;
-(char)hasCorrectParentForDraggingView:(id)arg1 isAllDay:(char)arg2 ;
-(id)createOccurrenceViewForEventGestureController:(id)arg1 ;
-(void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(char)arg2 ;
-(id)createEventForEventGestureController:(id)arg1 ;
-(id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2 ;
-(float)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(char)arg3 ;
-(char)eventGestureController:(id)arg1 isAllDayAtPoint:(CGPoint)arg2 requireInsistence:(char)arg3 ;
-(double)eventGestureController:(id)arg1 dateAtPoint:(CGPoint)arg2 ;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(char)arg3 ;
-(void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(char)arg3 ;
-(char)eventGestureControllerShouldAllowLongPress:(id)arg1 ;
-(float)eventGestureController:(id)arg1 convertXForMargin:(float)arg2 ;
-(CGRect)marginFrameForEventGestureController:(id)arg1 ;
-(char)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(char)arg4 span:(int)arg5 ;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(char)arg3 ;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2 ;
-(char)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(char)arg2 right:(char)arg3 vertically:(char)arg4 towardPoint:(CGPoint)arg5 ;
-(void)editorDidSaveEvent:(id)arg1 ;
-(void)editorDidDeleteEvent:(id)arg1 ;
-(void)editorDidCancelEditingEvent:(id)arg1 ;
-(void)_updateTimeMarker;
-(void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(char)arg3 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)setTimeView:(WeekTimeView *)arg1 ;
@end
