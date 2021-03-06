/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, CLLocation, NSDate;

@interface RAPPhoto : NSObject {

	UIImage* _photo;
	CLLocation* _location;
	NSDate* _date;

}

@property (nonatomic,readonly) UIImage * photo;                    //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(id)initWithPhoto:(id)arg1 date:(id)arg2 location:(id)arg3 ;
-(NSDate *)date;
-(CLLocation *)location;
-(UIImage *)photo;
@end

