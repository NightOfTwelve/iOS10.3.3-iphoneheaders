/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, Stock;

@interface StocksBacksideTableViewCell : UITableViewCell {

	char _wasDeleted;
	UILabel* _exchangeLabel;
	Stock* _stock;

}

@property (nonatomic,retain) Stock * stock;                //@synthesize stock=_stock - In the implementation block
@property (assign,nonatomic) char wasDeleted;              //@synthesize wasDeleted=_wasDeleted - In the implementation block
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(char)wasDeleted;
-(void)setWasDeleted:(char)arg1 ;
-(Stock *)stock;
-(void)setStock:(Stock *)arg1 ;
@end

