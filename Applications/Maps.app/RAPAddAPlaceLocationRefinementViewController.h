/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPLocationRefinementViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class NSString, UITextField, NSLayoutConstraint, UIView;

@interface RAPAddAPlaceLocationRefinementViewController : RAPLocationRefinementViewController <MKMapViewDelegate> {

	NSString* _textFieldPlaceholder;
	UITextField* _textField;
	NSLayoutConstraint* _textFieldContainerViewBottomConstraint;
	UIView* _textFieldContainerView;
	/*^block*/id _textFieldEditBlock;
	NSString* _textFieldTitle;
	NSString* _textFieldText;
	CGRect _previousNavigationControllerFrame;

}

@property (nonatomic,retain) UITextField * textField;                                                  //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textFieldContainerViewBottomConstraint;              //@synthesize textFieldContainerViewBottomConstraint=_textFieldContainerViewBottomConstraint - In the implementation block
@property (nonatomic,retain) UIView * textFieldContainerView;                                          //@synthesize textFieldContainerView=_textFieldContainerView - In the implementation block
@property (nonatomic,copy) id textFieldEditBlock;                                                      //@synthesize textFieldEditBlock=_textFieldEditBlock - In the implementation block
@property (nonatomic,copy) NSString * textFieldTitle;                                                  //@synthesize textFieldTitle=_textFieldTitle - In the implementation block
@property (nonatomic,copy) NSString * textFieldText;                                                   //@synthesize textFieldText=_textFieldText - In the implementation block
@property (assign,nonatomic) CGRect previousNavigationControllerFrame;                                 //@synthesize previousNavigationControllerFrame=_previousNavigationControllerFrame - In the implementation block
@property (nonatomic,copy,readonly) NSString * editedValue; 
@property (nonatomic,copy) NSString * textFieldPlaceholder;                                            //@synthesize textFieldPlaceholder=_textFieldPlaceholder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCamera:(id)arg1 showCrosshair:(char)arg2 textFieldTitle:(id)arg3 textFieldPlaceholder:(id)arg4 textFieldText:(id)arg5 textFieldEditBlock:(/*^block*/id)arg6 ;
-(UIView *)textFieldContainerView;
-(NSString *)editedValue;
-(void)setTextFieldPlaceholder:(NSString *)arg1 ;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)keyboardDidChangeFrameNotification:(id)arg1 ;
-(void)adjustTextFieldContainerPositionWithKeyboardFrame:(CGRect)arg1 ;
-(NSString *)textFieldPlaceholder;
-(NSLayoutConstraint *)textFieldContainerViewBottomConstraint;
-(void)setTextFieldContainerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextFieldContainerView:(UIView *)arg1 ;
-(id)textFieldEditBlock;
-(void)setTextFieldEditBlock:(id)arg1 ;
-(NSString *)textFieldTitle;
-(void)setTextFieldTitle:(NSString *)arg1 ;
-(NSString *)textFieldText;
-(void)setTextFieldText:(NSString *)arg1 ;
-(CGRect)previousNavigationControllerFrame;
-(void)setPreviousNavigationControllerFrame:(CGRect)arg1 ;
-(id)backgroundColor;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(UITextField *)textField;
-(void)mapViewDidStartUserInteraction:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
@end
