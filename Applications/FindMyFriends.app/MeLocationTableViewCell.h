/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/MeTableViewCell.h>

@class UILabel;

@interface MeLocationTableViewCell : MeTableViewCell {

	UILabel* _locationLabel;
	UILabel* _addressLabel;

}

@property (nonatomic,retain) UILabel * locationLabel;              //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UILabel * addressLabel;               //@synthesize addressLabel=_addressLabel - In the implementation block
-(void)setLocationLabelText:(id)arg1 ;
-(void)setAddressLabelText:(id)arg1 ;
-(UILabel *)addressLabel;
-(void)setAddressLabel:(UILabel *)arg1 ;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
@end

