/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>
#import <UIKit/UITextFieldDelegate.h>

@class TPButton, UIView, UITextView, UIActivityIndicatorView, UITextField, NSString;

@interface SBUSSDAlertDisplay : SBAlertView <UITextFieldDelegate> {

	TPButton* _dismissButton;
	TPButton* _replyButton;
	UIView* _notifyView;
	UIView* _replyView;
	UITextView* _charsRemainingView;
	UIActivityIndicatorView* _progressIndicator;
	UITextField* _responseField;
	UITextView* _textView;
	UITextView* _responseMessageView;
	char _allowsResponse;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(id)_notifyView;
-(void)alertStringAvailable:(id)arg1 ;
-(void)setAllowsResponse:(char)arg1 ;
-(void)displayString:(id)arg1 ;
-(char)allowsResponse;
-(void)_centerTextView:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_cancelClicked;
-(void)_okayClicked;
-(void)_replyClicked;
-(void)_setupResponseBar;
-(id)_replyView;
-(id)_charsRemainingView;
-(void)_updateCharsRemaining;
-(id)_responseMessageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(char)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(id)_textView;
-(void)_textChanged:(id)arg1 ;
@end
