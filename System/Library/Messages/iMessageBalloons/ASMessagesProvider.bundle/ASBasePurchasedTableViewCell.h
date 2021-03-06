/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItemTableViewCell.h>

@class ASPurchasedCellLayout;

@interface ASBasePurchasedTableViewCell : SKUIItemTableViewCell {

	ASPurchasedCellLayout* _layout;

}

@property (nonatomic,readonly) ASPurchasedCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(ASPurchasedCellLayout *)layout;
-(void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(int)arg3 ;
@end

