/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICStartupBaseViewController.h>
#import <MobileNotes/ICStartupDeviceCheckIndicator.h>

@class UIActivityIndicatorView, UILabel, NSLayoutConstraint, UIImageView, UIView, NSArray, NSTimer;

@interface ICStartupViewController : ICStartupBaseViewController <ICStartupDeviceCheckIndicator> {

	char _didSetupUI;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _subTitleLabel;
	NSLayoutConstraint* _titleWidthConstraint;
	NSLayoutConstraint* _titleAndSubTitleVerticalConstraint;
	NSLayoutConstraint* _titleToImagesVerticalConstraint;
	NSLayoutConstraint* _leftMarginConstraint;
	NSLayoutConstraint* _rightMarginConstraint;
	UIImageView* _imageView1;
	UIImageView* _imageView2;
	UIImageView* _imageView3;
	UIView* _imageTextView1;
	UIView* _imageTextView2;
	UIView* _imageTextView3;
	UILabel* _imageText1Label;
	UILabel* _imageText1SubLabel;
	UILabel* _imageText2Label;
	UILabel* _imageText2SubLabel;
	UILabel* _imageText3Label;
	UILabel* _imageText3SubLabel;
	NSLayoutConstraint* _imageTextWidthConstraint;
	NSLayoutConstraint* _imageSizeConstraint;
	NSLayoutConstraint* _activityIndicatorBottomConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	UIView* _contentView;
	NSLayoutConstraint* _imagesToTextHorizontalConstraint;
	NSArray* _imagesLayoutConstraints;
	NSTimer* _timeoutTimer;
	NSArray* _choiceLabels;
	NSArray* _choiceBlocks;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                      //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * subTitleLabel;                                              //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleWidthConstraint;                            //@synthesize titleWidthConstraint=_titleWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleAndSubTitleVerticalConstraint;              //@synthesize titleAndSubTitleVerticalConstraint=_titleAndSubTitleVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleToImagesVerticalConstraint;                 //@synthesize titleToImagesVerticalConstraint=_titleToImagesVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftMarginConstraint;                            //@synthesize leftMarginConstraint=_leftMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightMarginConstraint;                           //@synthesize rightMarginConstraint=_rightMarginConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * imageView1;                                             //@synthesize imageView1=_imageView1 - In the implementation block
@property (nonatomic,retain) UIImageView * imageView2;                                             //@synthesize imageView2=_imageView2 - In the implementation block
@property (nonatomic,retain) UIImageView * imageView3;                                             //@synthesize imageView3=_imageView3 - In the implementation block
@property (nonatomic,retain) UIView * imageTextView1;                                              //@synthesize imageTextView1=_imageTextView1 - In the implementation block
@property (nonatomic,retain) UIView * imageTextView2;                                              //@synthesize imageTextView2=_imageTextView2 - In the implementation block
@property (nonatomic,retain) UIView * imageTextView3;                                              //@synthesize imageTextView3=_imageTextView3 - In the implementation block
@property (nonatomic,retain) UILabel * imageText1Label;                                            //@synthesize imageText1Label=_imageText1Label - In the implementation block
@property (nonatomic,retain) UILabel * imageText1SubLabel;                                         //@synthesize imageText1SubLabel=_imageText1SubLabel - In the implementation block
@property (nonatomic,retain) UILabel * imageText2Label;                                            //@synthesize imageText2Label=_imageText2Label - In the implementation block
@property (nonatomic,retain) UILabel * imageText2SubLabel;                                         //@synthesize imageText2SubLabel=_imageText2SubLabel - In the implementation block
@property (nonatomic,retain) UILabel * imageText3Label;                                            //@synthesize imageText3Label=_imageText3Label - In the implementation block
@property (nonatomic,retain) UILabel * imageText3SubLabel;                                         //@synthesize imageText3SubLabel=_imageText3SubLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageTextWidthConstraint;                        //@synthesize imageTextWidthConstraint=_imageTextWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageSizeConstraint;                             //@synthesize imageSizeConstraint=_imageSizeConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * activityIndicatorBottomConstraint;               //@synthesize activityIndicatorBottomConstraint=_activityIndicatorBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;                     //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imagesToTextHorizontalConstraint;                //@synthesize imagesToTextHorizontalConstraint=_imagesToTextHorizontalConstraint - In the implementation block
@property (nonatomic,copy) NSArray * imagesLayoutConstraints;                                      //@synthesize imagesLayoutConstraints=_imagesLayoutConstraints - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                                               //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) char didSetupUI;                                                      //@synthesize didSetupUI=_didSetupUI - In the implementation block
@property (nonatomic,copy) NSArray * choiceLabels;                                                 //@synthesize choiceLabels=_choiceLabels - In the implementation block
@property (nonatomic,copy) NSArray * choiceBlocks;                                                 //@synthesize choiceBlocks=_choiceBlocks - In the implementation block
-(NSArray *)imagesLayoutConstraints;
-(void)setImagesLayoutConstraints:(NSArray *)arg1 ;
-(void)setImagesToTextHorizontalConstraint:(NSLayoutConstraint *)arg1 ;
-(char)isExtraSmallDevice;
-(UILabel *)imageText1Label;
-(UILabel *)imageText2Label;
-(UILabel *)imageText3Label;
-(UILabel *)imageText1SubLabel;
-(UILabel *)imageText2SubLabel;
-(UILabel *)imageText3SubLabel;
-(NSLayoutConstraint *)imageSizeConstraint;
-(UIView *)imageTextView1;
-(UIView *)imageTextView2;
-(UIView *)imageTextView3;
-(UIImageView *)imageView1;
-(UIImageView *)imageView2;
-(UIImageView *)imageView3;
-(UILabel *)subTitleLabel;
-(NSLayoutConstraint *)imagesToTextHorizontalConstraint;
-(NSLayoutConstraint *)titleWidthConstraint;
-(NSLayoutConstraint *)titleToImagesVerticalConstraint;
-(NSLayoutConstraint *)titleAndSubTitleVerticalConstraint;
-(NSLayoutConstraint *)leftMarginConstraint;
-(NSLayoutConstraint *)rightMarginConstraint;
-(NSLayoutConstraint *)imageTextWidthConstraint;
-(void)setupUIForViewSize:(CGSize)arg1 ;
-(void)setupImageLabelFontsForPhoneOrCompact:(char)arg1 ;
-(void)recreateImagesConstraintsCompact:(char)arg1 viewSize:(CGSize)arg2 ;
-(void)setupUIForIPhoneOrCompactWidthViewSize:(CGSize)arg1 ;
-(void)setupUIForIPadWithViewSize:(CGSize)arg1 ;
-(void)setUpDisclaimerLabel;
-(void)setupTrackingForLabelsForCompactLayout:(char)arg1 ;
-(void)suppressHairlineThickeningOnImagesForAccessibility;
-(NSLayoutConstraint *)activityIndicatorBottomConstraint;
-(void)applyAccessibilityInfo;
-(void)setDidSetupUI:(char)arg1 ;
-(char)didSetupUI;
-(NSArray *)choiceBlocks;
-(void)setChoiceLabels:(NSArray *)arg1 ;
-(void)setChoiceBlocks:(NSArray *)arg1 ;
-(char)didFailToDownloadDeviceList;
-(void)ensureControlsAreConnected;
-(void)setupChoiceViewsWithDeviceListFetchTimeout:(double)arg1 ;
-(void)startIndicatorAnimation;
-(void)stopIndicatorAnimation;
-(void)choiceSelected:(unsigned)arg1 ;
-(void)continueAction:(id)arg1 ;
-(char)prefersChoicesSideBySide;
-(void)setSubTitleLabel:(UILabel *)arg1 ;
-(void)setTitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleAndSubTitleVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleToImagesVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLeftMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageView1:(UIImageView *)arg1 ;
-(void)setImageView2:(UIImageView *)arg1 ;
-(void)setImageView3:(UIImageView *)arg1 ;
-(void)setImageTextView1:(UIView *)arg1 ;
-(void)setImageTextView2:(UIView *)arg1 ;
-(void)setImageTextView3:(UIView *)arg1 ;
-(void)setImageText1Label:(UILabel *)arg1 ;
-(void)setImageText1SubLabel:(UILabel *)arg1 ;
-(void)setImageText2Label:(UILabel *)arg1 ;
-(void)setImageText2SubLabel:(UILabel *)arg1 ;
-(void)setImageText3Label:(UILabel *)arg1 ;
-(void)setImageText3SubLabel:(UILabel *)arg1 ;
-(void)setImageTextWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageSizeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setActivityIndicatorBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)choiceLabels;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
@end

