/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface OKWidgetGridViewCondensedLayout : UICollectionViewLayout {

	float _spacingRatio;
	unsigned _numberOfRows;
	char _snappingEnabled;
	NSMutableArray* _attributes;
	float _largestWidth;
	CGSize _contentSize;
	CGRect _oldBounds;

}

@property (assign) float spacingRatio;                 //@synthesize spacingRatio=_spacingRatio - In the implementation block
@property (assign) unsigned numberOfRows;              //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign) char snappingEnabled;               //@synthesize snappingEnabled=_snappingEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(unsigned)numberOfRows;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)setNumberOfRows:(unsigned)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(id)indexPathsForItemsInRect:(CGRect)arg1 ;
-(void)setSpacingRatio:(float)arg1 ;
-(float)spacingRatio;
-(char)shouldUpdateVisibleCellLayoutAttributes;
-(char)snappingEnabled;
-(void)setSnappingEnabled:(char)arg1 ;
@end
