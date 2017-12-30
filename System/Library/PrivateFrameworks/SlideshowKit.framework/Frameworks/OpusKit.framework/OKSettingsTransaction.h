/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface OKSettingsTransaction : NSObject {

	NSMutableArray* _items;
	NSMutableDictionary* _itemsByKey;

}

@property (nonatomic,retain,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(id)init;
-(void)dealloc;
-(NSArray *)items;
-(void)registerTransactionItem:(id)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)mergeWithTransaction:(id)arg1 ;
@end
