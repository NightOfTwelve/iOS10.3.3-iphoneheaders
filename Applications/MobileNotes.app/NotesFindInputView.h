/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIInputView.h>

@class UILabel, UISegmentedControl, UISearchBar, UIBarButtonItem;

@interface NotesFindInputView : UIInputView {

	UILabel* _resultsLabel;
	UISegmentedControl* _nextPreviousControl;
	UISearchBar* _searchBar;
	UIBarButtonItem* _controlBarButtonItem;
	UIBarButtonItem* _labelBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _searchBarButtonItem;
	UIBarButtonItem* _leftFixedSpaceBarButtonItem;

}

@property (retain) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
+(id)toolbarWithItems:(id)arg1 ;
-(void)setSegmentedControlTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDoneButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setSegmentedControlEnabled:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)didEndSplitTransition;
-(void)setLabelText:(id)arg1 ;
@end
