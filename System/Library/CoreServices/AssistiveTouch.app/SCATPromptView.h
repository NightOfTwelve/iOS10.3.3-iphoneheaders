/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, _UIBackdropView, NSString;

@interface SCATPromptView : UIView {

	UILabel* _promptLabel;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,copy) NSString * prompt; 
-(void)_updatePromptBackdropViewMask;
-(void)layoutSubviews;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
@end
