/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TabMergingControllerDelegate;
@class NSMutableArray, NSMapTable;

@interface TabMergingController : NSObject {

	NSMutableArray* _mergedItems;
	NSMapTable* _activeItemMap;
	char _disallowMergingUpdates;
	id<TabMergingControllerDelegate> _delegate;

}

@property (assign,nonatomic) char disallowMergingUpdates;                                   //@synthesize disallowMergingUpdates=_disallowMergingUpdates - In the implementation block
@property (assign,nonatomic,__weak) id<TabMergingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addActiveItem:(id)arg1 ;
-(char)disallowMergingUpdates;
-(unsigned)mergedIndexForItem:(id)arg1 ;
-(id)allMergedItems;
-(id)itemsBelongToOwnerWithUUID:(id)arg1 ;
-(id)activeItemInOwnerWithUUID:(id)arg1 ;
-(void)reconcileItemsForMergedItems:(id)arg1 activeItem:(id)arg2 ;
-(void)updateMergedItemsForItems:(id)arg1 ;
-(void)moveItem:(id)arg1 overItem:(id)arg2 ;
-(void)replaceItem:(id)arg1 withItem:(id)arg2 ;
-(void)mergeItems:(id)arg1 toItems:(id)arg2 ;
-(void)setDisallowMergingUpdates:(char)arg1 ;
-(void)clearActiveItems;
-(unsigned)insertMergedItem:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_changeOwnershipOfItem:(id)arg1 toOwnerUUID:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<TabMergingControllerDelegate>)arg1 ;
-(id<TabMergingControllerDelegate>)delegate;
-(void)removeItem:(id)arg1 ;
@end
