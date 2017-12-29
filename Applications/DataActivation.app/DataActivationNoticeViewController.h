/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DataActivation.app/DataActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol DataActivationNoticeViewControllerDelegate;
@class UILabel, UIButton;

@interface DataActivationNoticeViewController : UIViewController {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _doneButton;
	id<DataActivationNoticeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DataActivationNoticeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3 ;
-(void)_donePressed;
-(void)setDelegate:(id<DataActivationNoticeViewControllerDelegate>)arg1 ;
-(id<DataActivationNoticeViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end
