/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface MTStopwatchLapTableHeaderView : UIView {

	UILabel* _lapNumberLabel;
	UILabel* _splitLabel;
	UILabel* _totalLabel;
	UIView* _bottomKeylineView;

}

@property (nonatomic,retain) UILabel * lapNumberLabel;                //@synthesize lapNumberLabel=_lapNumberLabel - In the implementation block
@property (nonatomic,retain) UILabel * splitLabel;                    //@synthesize splitLabel=_splitLabel - In the implementation block
@property (nonatomic,retain) UILabel * totalLabel;                    //@synthesize totalLabel=_totalLabel - In the implementation block
@property (nonatomic,retain) UIView * bottomKeylineView;              //@synthesize bottomKeylineView=_bottomKeylineView - In the implementation block
-(void)setLapNumberLabel:(UILabel *)arg1 ;
-(UILabel *)lapNumberLabel;
-(void)setSplitLabel:(UILabel *)arg1 ;
-(UILabel *)splitLabel;
-(void)setTotalLabel:(UILabel *)arg1 ;
-(UILabel *)totalLabel;
-(void)setBottomKeylineView:(UIView *)arg1 ;
-(UIView *)bottomKeylineView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupConstraints;
@end
