/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, NSLayoutConstraint;

@interface MFMailboxFilterPickerControl : UIControl {

	UILabel* _titleLabel;
	UILabel* _filtersLabel;
	NSLayoutConstraint* _titleBaselineConstraint;
	NSLayoutConstraint* _titleBaselineMiniConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * filtersLabel;                                        //@synthesize filtersLabel=_filtersLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleBaselineConstraint;                  //@synthesize titleBaselineConstraint=_titleBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleBaselineMiniConstraint;              //@synthesize titleBaselineMiniConstraint=_titleBaselineMiniConstraint - In the implementation block
-(NSLayoutConstraint *)titleBaselineConstraint;
-(void)setFilterDescription:(id)arg1 ;
-(void)_updateFrameForSuperview;
-(void)setTitleBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_setupGestureRecognizer;
-(void)setFiltersLabel:(UILabel *)arg1 ;
-(void)setTitleBaselineMiniConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)filtersLabel;
-(void)_handleTapGestureRecognizer;
-(NSLayoutConstraint *)titleBaselineMiniConstraint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)updateForMiniBarState:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_setupSubviews;
-(void)_setupConstraints;
@end

