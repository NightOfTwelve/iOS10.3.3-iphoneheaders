/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString;

@interface HOCharacteristicStateCell : UITableViewCell {

	char _enabled;

}

@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * valueText; 
@property (assign,nonatomic) char enabled;                    //@synthesize enabled=_enabled - In the implementation block
-(void)layoutSubviews;
-(char)enabled;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)_textColor;
-(void)setEnabled:(char)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)valueText;
-(void)setValueText:(NSString *)arg1 ;
@end

