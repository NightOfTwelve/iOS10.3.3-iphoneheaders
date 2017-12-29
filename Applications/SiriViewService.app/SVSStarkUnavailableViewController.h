/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SiriViewService/SVSStarkItemController.h>

@protocol SVSStarkItemControllerDelegate;
@class NSUUID, SVSStarkUnavailableSnippetView, NSString;

@interface SVSStarkUnavailableViewController : UIViewController <SVSStarkItemController> {

	SVSStarkUnavailableSnippetView* _snippetView;
	char _shouldSynthesizeTitles;
	char _dismissAssistantAfterSpeaking;
	id<SVSStarkItemControllerDelegate> _delegate;
	NSString* _titleString;
	NSString* _subtitle;
	int _interactionStyle;
	NSUUID* _conversationItemIdentifier;

}

@property (assign,nonatomic,__weak) id<SVSStarkItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * titleString;                                            //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) int interactionStyle;                                            //@synthesize interactionStyle=_interactionStyle - In the implementation block
@property (nonatomic,copy) NSUUID * conversationItemIdentifier;                               //@synthesize conversationItemIdentifier=_conversationItemIdentifier - In the implementation block
@property (assign,nonatomic) char shouldSynthesizeTitles;                                     //@synthesize shouldSynthesizeTitles=_shouldSynthesizeTitles - In the implementation block
@property (assign,nonatomic) char dismissAssistantAfterSpeaking;                              //@synthesize dismissAssistantAfterSpeaking=_dismissAssistantAfterSpeaking - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)dismissAssistantAfterSpeaking;
-(int)interactionStyle;
-(void)setInteractionStyle:(int)arg1 ;
-(char)shouldSynthesizeTitles;
-(void)setShouldSynthesizeTitles:(char)arg1 ;
-(void)setDismissAssistantAfterSpeaking:(char)arg1 ;
-(id)init;
-(void)setDelegate:(id<SVSStarkItemControllerDelegate>)arg1 ;
-(id<SVSStarkItemControllerDelegate>)delegate;
-(char)isActive;
-(void)loadView;
-(void)viewDidLoad;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(NSUUID *)conversationItemIdentifier;
-(void)setConversationItemIdentifier:(NSUUID *)arg1 ;
@end
