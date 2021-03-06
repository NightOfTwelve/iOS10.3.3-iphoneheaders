/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSArray, NSString;

@interface SiriAlternativeParaphraseAlternativeResultView : UIView {

	UILabel* _displayTextLabel;
	UIView* _containerView;
	char _hasSetUpConstraints;
	NSArray* _commands;
	NSString* _responseText;

}

@property (nonatomic,retain) NSArray * commands;                   //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSString * responseText;              //@synthesize responseText=_responseText - In the implementation block
-(id)initWithAlternativeResult:(id)arg1 ;
-(void)setResponseText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)updateConstraints;
-(NSString *)responseText;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
@end

