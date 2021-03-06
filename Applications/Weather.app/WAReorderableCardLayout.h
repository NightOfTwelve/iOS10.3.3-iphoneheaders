/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WACardLayout.h>

@class _UIFeedbackDragBehavior, NSIndexPath;

@interface WAReorderableCardLayout : WACardLayout {

	char _isReordering;
	_UIFeedbackDragBehavior* _feedbackBehavior;
	NSIndexPath* _deleteIndexPath;
	NSIndexPath* _pivotIndexPath;
	int _initialDragIndex;
	int _currentDragIndex;

}

@property (nonatomic,retain) NSIndexPath * deleteIndexPath;              //@synthesize deleteIndexPath=_deleteIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * pivotIndexPath;               //@synthesize pivotIndexPath=_pivotIndexPath - In the implementation block
@property (nonatomic,readonly) int initialDragIndex;                     //@synthesize initialDragIndex=_initialDragIndex - In the implementation block
@property (assign,nonatomic) int currentDragIndex;                       //@synthesize currentDragIndex=_currentDragIndex - In the implementation block
-(NSIndexPath *)pivotIndexPath;
-(void)setPivotIndexPath:(NSIndexPath *)arg1 ;
-(int)indexForItemAtPoint:(CGPoint)arg1 ;
-(int)targetIndexForProposedStartIndex:(int)arg1 inRect:(CGRect)arg2 ;
-(void)beginReorderingWithInitialDragIndex:(int)arg1 ;
-(NSIndexPath *)deleteIndexPath;
-(void)setDeleteIndexPath:(NSIndexPath *)arg1 ;
-(int)initialDragIndex;
-(int)currentDragIndex;
-(void)setCurrentDragIndex:(int)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)endReordering;
-(char)isReordering;
@end

