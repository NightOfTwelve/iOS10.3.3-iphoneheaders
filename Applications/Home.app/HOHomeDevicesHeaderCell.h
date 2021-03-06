/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UILabel, NSString;

@interface HOHomeDevicesHeaderCell : UICollectionViewCell <HUCellProtocol> {

	HFItem* _item;
	UILabel* _devicesLabel;

}

@property (nonatomic,retain) UILabel * devicesLabel;                //@synthesize devicesLabel=_devicesLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                         //@synthesize item=_item - In the implementation block
+(float)requiredHeight;
-(void)setDevicesLabel:(UILabel *)arg1 ;
-(UILabel *)devicesLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)updateUIWithAnimation:(char)arg1 ;
@end

