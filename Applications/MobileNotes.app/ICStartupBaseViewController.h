/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileNotes/FRIntroductionControlSettings.h>
#import <MobileNotes/FRIntroductionControlsDelegate.h>

@class NSString, NSLayoutConstraint, ICLearnMoreTextView, UILabel, FRIntroductionControls, ICStartupNavigationController;

@interface ICStartupBaseViewController : UIViewController <FRIntroductionControlSettings, FRIntroductionControlsDelegate> {

	NSLayoutConstraint* _learnMoreViewHeightConstraint;
	ICLearnMoreTextView* _disclaimerLabel;
	UILabel* _titleLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _introductionControlsHeightConstraint;
	NSLayoutConstraint* _bottomLeadingMargin;
	NSLayoutConstraint* _bottomTrailingMargin;
	NSLayoutConstraint* _firstBaselineDisclaimerLabelConstraint;
	float _cellHeight;
	float _bottomMargin;
	FRIntroductionControls* _introductionControls;
	NSLayoutConstraint* _introductionControlsBottomConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * bottomLeadingMargin;                                   //@synthesize bottomLeadingMargin=_bottomLeadingMargin - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomTrailingMargin;                                  //@synthesize bottomTrailingMargin=_bottomTrailingMargin - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * firstBaselineDisclaimerLabelConstraint;                //@synthesize firstBaselineDisclaimerLabelConstraint=_firstBaselineDisclaimerLabelConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * learnMoreViewHeightConstraint;                         //@synthesize learnMoreViewHeightConstraint=_learnMoreViewHeightConstraint - In the implementation block
@property (nonatomic,retain) ICLearnMoreTextView * disclaimerLabel;                                      //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                                         //@synthesize topConstraint=_topConstraint - In the implementation block
@property (assign,nonatomic) float cellHeight;                                                           //@synthesize cellHeight=_cellHeight - In the implementation block
@property (assign,nonatomic) float bottomMargin;                                                         //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (nonatomic,retain) FRIntroductionControls * introductionControls;                              //@synthesize introductionControls=_introductionControls - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * introductionControlsBottomConstraint;                  //@synthesize introductionControlsBottomConstraint=_introductionControlsBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * introductionControlsHeightConstraint;                  //@synthesize introductionControlsHeightConstraint=_introductionControlsHeightConstraint - In the implementation block
@property (nonatomic,readonly) ICStartupNavigationController * startupNavigationController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * primaryButtonTitle; 
@property (nonatomic,readonly) NSString * secondaryButtonTitle; 
@property (nonatomic,readonly) char blurUnderControls; 
-(void)setTitleDistanceToBaseline:(float)arg1 ;
-(void)updateConstraintsBasedOnViewSize:(CGSize)arg1 margin:(float)arg2 ;
-(NSLayoutConstraint *)introductionControlsHeightConstraint;
-(void)hideChoices;
-(ICStartupNavigationController *)startupNavigationController;
-(void)choicesUpdated;
-(void)updateChoiceButtonsForViewSize:(CGSize)arg1 ;
-(FRIntroductionControls *)introductionControls;
-(unsigned)numChoices;
-(void)setIntroductionControls:(FRIntroductionControls *)arg1 ;
-(void)setIntroductionControlsBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)introductionControlsBottomConstraint;
-(void)setIntroductionControlsHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomLeadingMargin;
-(NSLayoutConstraint *)bottomTrailingMargin;
-(NSLayoutConstraint *)firstBaselineDisclaimerLabelConstraint;
-(void)updateDisclaimerViewBasedOnViewSize:(CGSize)arg1 ;
-(NSLayoutConstraint *)learnMoreViewHeightConstraint;
-(char)blurUnderControls;
-(void)primaryButtonPressedForControls:(id)arg1 ;
-(void)secondaryButtonPressedForControls:(id)arg1 ;
-(float)extraBottomSpaceForViewSize:(CGSize)arg1 ;
-(void)setLearnMoreViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomLeadingMargin:(NSLayoutConstraint *)arg1 ;
-(void)setBottomTrailingMargin:(NSLayoutConstraint *)arg1 ;
-(void)setFirstBaselineDisclaimerLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(UILabel *)titleLabel;
-(NSLayoutConstraint *)topConstraint;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)secondaryButtonTitle;
-(NSString *)primaryButtonTitle;
-(float)cellHeight;
-(ICLearnMoreTextView *)disclaimerLabel;
-(void)setDisclaimerLabel:(ICLearnMoreTextView *)arg1 ;
-(float)bottomMargin;
-(void)setBottomMargin:(float)arg1 ;
-(void)setCellHeight:(float)arg1 ;
@end

