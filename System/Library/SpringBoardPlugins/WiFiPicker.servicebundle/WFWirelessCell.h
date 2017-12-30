/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIView;

@interface WFWirelessCell : UITableViewCell {

	NSDictionary* _dict;
	UIView* _topLine;
	UIView* _bottomLine;
	char _showSeparator;
	id _userInfo;

}

@property (nonatomic,readonly) id userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) char showSeparator;              //@synthesize showSeparator=_showSeparator - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)userInfo;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setShowSeparator:(char)arg1 ;
-(char)showSeparator;
@end
