/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIButton, NSLayoutConstraint;

@interface FriendInfoShareLocationTableViewCell : UITableViewCell {

	char _isEnabled;
	UIButton* _shareLocationButton;
	NSLayoutConstraint* _topRuleHeightConstraint;
	NSLayoutConstraint* _bottomRuleHeightConstraint;

}

@property (nonatomic,retain) UIButton * shareLocationButton;                               //@synthesize shareLocationButton=_shareLocationButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topRuleHeightConstraint;                 //@synthesize topRuleHeightConstraint=_topRuleHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomRuleHeightConstraint;              //@synthesize bottomRuleHeightConstraint=_bottomRuleHeightConstraint - In the implementation block
@property (assign,nonatomic) char isEnabled;                                               //@synthesize isEnabled=_isEnabled - In the implementation block
-(NSLayoutConstraint *)topRuleHeightConstraint;
-(NSLayoutConstraint *)bottomRuleHeightConstraint;
-(void)setTopRuleHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomRuleHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIButton *)shareLocationButton;
-(void)setShareLocationButton:(UIButton *)arg1 ;
-(char)isEnabled;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setIsEnabled:(char)arg1 ;
@end
