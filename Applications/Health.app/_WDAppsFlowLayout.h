/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface _WDAppsFlowLayout : UICollectionViewFlowLayout {

	char _snapsToItemBoundaries;
	char _snapsToItemCenters;

}

@property (assign,nonatomic) char snapsToItemBoundaries;              //@synthesize snapsToItemBoundaries=_snapsToItemBoundaries - In the implementation block
@property (assign,nonatomic) char snapsToItemCenters;                 //@synthesize snapsToItemCenters=_snapsToItemCenters - In the implementation block
+(float)snapToBoundariesDecelerationRate;
-(id)init;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setSnapsToItemBoundaries:(char)arg1 ;
-(char)snapsToItemBoundaries;
-(char)snapsToItemCenters;
-(void)setSnapsToItemCenters:(char)arg1 ;
@end
