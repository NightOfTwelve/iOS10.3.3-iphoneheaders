/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@protocol MailStatusBarViewDelegate;
@class UILabel, NSString, NSAttributedString;

@interface MailStatusLabelView : UIView {

	id<MailStatusBarViewDelegate> _delegate;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;

}

@property (assign,nonatomic) id<MailStatusBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * primaryLabelText; 
@property (nonatomic,copy) NSAttributedString * secondaryLabelText; 
-(void)_createLabel:(id*)arg1 textColor:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MailStatusBarViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MailStatusBarViewDelegate>)delegate;
-(void)update;
-(NSString *)primaryLabelText;
-(void)setPrimaryLabelText:(NSString *)arg1 ;
-(NSAttributedString *)secondaryLabelText;
-(void)setSecondaryLabelText:(NSAttributedString *)arg1 ;
@end
