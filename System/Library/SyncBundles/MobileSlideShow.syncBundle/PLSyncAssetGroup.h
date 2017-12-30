/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableArray;

@interface PLSyncAssetGroup : NSObject {

	NSString* _uuid;
	NSDate* _date;
	NSMutableArray* _assetPairs;

}

@property (setter=setUUID:,getter=UUID,retain) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (retain) NSMutableArray * assetPairs;                              //@synthesize assetPairs=_assetPairs - In the implementation block
-(NSMutableArray *)assetPairs;
-(void)setAssetPairs:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(NSDate *)date;
-(id)UUID;
-(void)setDate:(NSDate *)arg1 ;
-(void)setUUID:(id)arg1 ;
@end
