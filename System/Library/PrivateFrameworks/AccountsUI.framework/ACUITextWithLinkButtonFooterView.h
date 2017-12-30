/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:52:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSArray, UILabel, NSString;

@interface ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView> {

	NSArray* _linkButtons;
	UILabel* _textLabel;
	NSString* _footerText;

}
-(void)layoutSubviews;
-(id)initWithText:(id)arg1 linkButtons:(id)arg2 ;
-(float)_heightForFooterTextConstrainedToWidth:(float)arg1 ;
-(float)_heightForEmptyLineConstrainedToWidth:(float)arg1 ;
-(float)_heightForLinkButton:(id)arg1 constrainedToWidth:(float)arg2 ;
-(id)initWithText:(id)arg1 linkButton:(id)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
@end
