/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface ICStyleSelectorCell : UITableViewCell {

	char _isMixedState;
	UILabel* _styleLabel;
	UIImageView* _styleActiveImage;

}

@property (assign,nonatomic,__weak) UILabel * styleLabel;                        //@synthesize styleLabel=_styleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * styleActiveImage;              //@synthesize styleActiveImage=_styleActiveImage - In the implementation block
@property (nonatomic,readonly) char isMixedState;                                //@synthesize isMixedState=_isMixedState - In the implementation block
-(UIImageView *)styleActiveImage;
-(char)isMixedState;
-(void)updateImage:(char)arg1 ;
-(UILabel *)styleLabel;
-(void)setStyleLabel:(UILabel *)arg1 ;
-(void)setStyleActiveImage:(UIImageView *)arg1 ;
-(void)prepareForReuse;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
@end

