/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class TitleRowBrowseView, NSString;

@interface TitleRowBrowseHeaderView : UITableViewHeaderFooterView {

	TitleRowBrowseView* _titleView;

}

@property (nonatomic,copy) NSString * title; 
+(float)headerHeight;
-(id)_initialConstraints;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)_commonInit;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_createSubviews;
@end
