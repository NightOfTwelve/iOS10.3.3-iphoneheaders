/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSArray;

@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout {

	CGSize _contentSize;
	char _laysOutCandidateSeparator;
	NSMutableArray* _allAttributes;
	NSArray* _edgeDummyCellAttributes;

}

@property (nonatomic,retain) NSMutableArray * allAttributes;                 //@synthesize allAttributes=_allAttributes - In the implementation block
@property (nonatomic,retain) NSArray * edgeDummyCellAttributes;              //@synthesize edgeDummyCellAttributes=_edgeDummyCellAttributes - In the implementation block
@property (assign,nonatomic) char laysOutCandidateSeparator;                 //@synthesize laysOutCandidateSeparator=_laysOutCandidateSeparator - In the implementation block
+(id)layout;
+(id)dummyCellCollectionViewKind;
+(Class)layoutAttributesClass;
+(id)candidateSeparatorDecorationViewKind;
-(id)init;
-(void)dealloc;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setLaysOutCandidateSeparator:(char)arg1 ;
-(NSMutableArray *)allAttributes;
-(NSArray *)edgeDummyCellAttributes;
-(char)laysOutCandidateSeparator;
-(void)setEdgeDummyCellAttributes:(NSArray *)arg1 ;
-(void)setAllAttributes:(NSMutableArray *)arg1 ;
@end
