/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HUCCFavoriteActionSetItemProvider;

@interface HOHomeScreenQuickActionItemManager : HFItemManager {

	HUCCFavoriteActionSetItemProvider* _favoriteActionSetItemProvider;

}

@property (nonatomic,retain) HUCCFavoriteActionSetItemProvider * favoriteActionSetItemProvider;              //@synthesize favoriteActionSetItemProvider=_favoriteActionSetItemProvider - In the implementation block
-(void)setFavoriteActionSetItemProvider:(HUCCFavoriteActionSetItemProvider *)arg1 ;
-(HUCCFavoriteActionSetItemProvider *)favoriteActionSetItemProvider;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(id)_itemForSorting;
@end

