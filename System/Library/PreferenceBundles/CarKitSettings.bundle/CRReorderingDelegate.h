/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRReorderingDelegate <NSObject>
@optional
-(char)collectionView:(id)arg1 shouldBeginReorderingAtIndexPath:(id)arg2;
-(unsigned)numberOfColumnsInCollectionView:(id)arg1;
-(char)collectionView:(id)arg1 shouldAllowCollectionViewSwapForItemAtIndexPath:(id)arg2;
-(void)reorderingDidChangeFromCollectionView:(id)arg1 toCollectionView:(id)arg2;
-(void)collectionView:(id)arg1 didUpdateReorderingGestureToIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didCommitItem:(id)arg2;

@end

