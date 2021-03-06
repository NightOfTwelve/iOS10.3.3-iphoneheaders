/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray, NSString;

@interface ASUpdatesPageSection : NSObject {

	NSDate* _date;
	NSArray* _items;
	NSString* _title;

}

@property (nonatomic,copy) NSArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * date;                 //@synthesize date=_date - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)title;
-(NSDate *)date;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end

