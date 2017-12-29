/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileSafari/MobileSafari-Structs.h>
@class BookmarkFavoriteView, NSIndexPath, NSMutableArray;

@interface GrabbedFavorite : NSObject {

	char _returningGrabbedFavoriteView;
	char _cancellingFavoriteReordering;
	BookmarkFavoriteView* _favoriteView;
	NSIndexPath* _startIndexPath;
	NSIndexPath* _currentIndexPath;
	NSMutableArray* _cancelReorderingCompletionBlocksWaitingToBeCalled;
	int _numberOfItemsPerRowDuringReordering;
	CGPoint _grabbedFavoriteOffset;

}

@property (nonatomic,retain) BookmarkFavoriteView * favoriteView;                                                  //@synthesize favoriteView=_favoriteView - In the implementation block
@property (nonatomic,retain) NSIndexPath * startIndexPath;                                                         //@synthesize startIndexPath=_startIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                                                       //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
@property (assign,nonatomic) CGPoint grabbedFavoriteOffset;                                                        //@synthesize grabbedFavoriteOffset=_grabbedFavoriteOffset - In the implementation block
@property (assign,getter=isReturningGrabbedFavoriteView,nonatomic) char returningGrabbedFavoriteView;              //@synthesize returningGrabbedFavoriteView=_returningGrabbedFavoriteView - In the implementation block
@property (assign,getter=isCancellingFavoriteReordering,nonatomic) char cancellingFavoriteReordering;              //@synthesize cancellingFavoriteReordering=_cancellingFavoriteReordering - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cancelReorderingCompletionBlocksWaitingToBeCalled;                 //@synthesize cancelReorderingCompletionBlocksWaitingToBeCalled=_cancelReorderingCompletionBlocksWaitingToBeCalled - In the implementation block
@property (assign,nonatomic) int numberOfItemsPerRowDuringReordering;                                              //@synthesize numberOfItemsPerRowDuringReordering=_numberOfItemsPerRowDuringReordering - In the implementation block
-(char)isReturningGrabbedFavoriteView;
-(char)isCancellingFavoriteReordering;
-(CGPoint)grabbedFavoriteOffset;
-(BookmarkFavoriteView *)favoriteView;
-(int)numberOfItemsPerRowDuringReordering;
-(void)setNumberOfItemsPerRowDuringReordering:(int)arg1 ;
-(void)setFavoriteView:(BookmarkFavoriteView *)arg1 ;
-(void)setGrabbedFavoriteOffset:(CGPoint)arg1 ;
-(void)setReturningGrabbedFavoriteView:(char)arg1 ;
-(NSMutableArray *)cancelReorderingCompletionBlocksWaitingToBeCalled;
-(void)setCancellingFavoriteReordering:(char)arg1 ;
-(void)setStartIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)startIndexPath;
-(id)init;
-(NSIndexPath *)currentIndexPath;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
@end
