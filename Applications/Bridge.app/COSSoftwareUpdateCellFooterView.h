/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSString, UITextView, PSSpecifier;

@interface COSSoftwareUpdateCellFooterView : UIView <UITextViewDelegate, PSHeaderFooterView> {

	NSString* _text;
	UITextView* _textView;
	PSSpecifier* _specifier;

}

@property (nonatomic,retain) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UITextView * textView;                       //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PSSpecifier *)specifier;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
@end

