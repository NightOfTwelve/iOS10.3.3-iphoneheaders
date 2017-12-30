/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableTableCell.h>

@class CAShapeLayer, UIButton, UIActivityIndicatorView;

@interface AXPronunciationDictationCell : PSEditableTableCell {

	CAShapeLayer* _listeningCircle;
	char _showsSpinner;
	char _showsDictationButton;
	char _dictationButtonEnabled;
	char _showsListeningState;
	char _showsPhonemes;
	UIButton* _dictateButton;
	float _listeningDuration;
	UIActivityIndicatorView* _indicatorView;

}

@property (nonatomic,retain) UIButton * dictateButton;                             //@synthesize dictateButton=_dictateButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * indicatorView;              //@synthesize indicatorView=_indicatorView - In the implementation block
@property (assign,nonatomic) char showsSpinner;                                    //@synthesize showsSpinner=_showsSpinner - In the implementation block
@property (assign,nonatomic) char showsDictationButton;                            //@synthesize showsDictationButton=_showsDictationButton - In the implementation block
@property (assign,nonatomic) char dictationButtonEnabled;                          //@synthesize dictationButtonEnabled=_dictationButtonEnabled - In the implementation block
@property (assign,nonatomic) char showsListeningState;                             //@synthesize showsListeningState=_showsListeningState - In the implementation block
@property (assign,nonatomic) char showsPhonemes;                                   //@synthesize showsPhonemes=_showsPhonemes - In the implementation block
@property (assign,nonatomic) float listeningDuration;                              //@synthesize listeningDuration=_listeningDuration - In the implementation block
-(void)setDictateButton:(UIButton *)arg1 ;
-(void)setDictateView:(id)arg1 ;
-(char)showsSpinner;
-(char)showsPhonemes;
-(id)dictateView;
-(char)showsDictationButton;
-(float)listeningDuration;
-(char)showsListeningState;
-(char)dictationButtonEnabled;
-(void)setDictationButtonEnabled:(char)arg1 ;
-(void)setShowsListeningState:(char)arg1 ;
-(void)setShowsSpinner:(char)arg1 ;
-(void)setShowsDictationButton:(char)arg1 ;
-(void)setListeningDuration:(float)arg1 ;
-(UIButton *)dictateButton;
-(void)setShowsPhonemes:(char)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(UIActivityIndicatorView *)indicatorView;
-(void)setIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
