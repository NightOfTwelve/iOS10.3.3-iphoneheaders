/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface CHWorkoutDetailTwoValueTableViewCell : UITableViewCell {

	UILabel* _titleLabel1;
	UILabel* _titleLabel2;
	UILabel* _valueLabel1;
	UILabel* _valueLabel2;
	UIView* _separatorView;
	char _hidesSeparator;

}

@property (assign,nonatomic) char hidesSeparator;              //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
+(float)preferredHeightForWorkout:(id)arg1 ;
-(void)_constrainViews;
-(void)configureWithTitle1:(id)arg1 value1:(id)arg2 ;
-(void)configureWithTitle2:(id)arg1 value2:(id)arg2 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(char)hidesSeparator;
-(void)setHidesSeparator:(char)arg1 ;
@end

