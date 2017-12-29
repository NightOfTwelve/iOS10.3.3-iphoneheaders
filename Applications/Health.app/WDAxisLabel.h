/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, UIFont, CAFilter;

@interface WDAxisLabel : NSObject {

	NSString* _text;
	id _location;
	UIColor* _labelColor;
	UIFont* _labelFont;
	CAFilter* _compositingFilter;

}

@property (nonatomic,retain) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                      //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) UIFont * labelFont;                        //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) CAFilter * compositingFilter;              //@synthesize compositingFilter=_compositingFilter - In the implementation block
-(void)setCompositingFilter:(CAFilter *)arg1 ;
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CAFilter *)compositingFilter;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIFont *)labelFont;
-(UIColor *)labelColor;
@end
