/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUIAceObjectViewController.h>
#import <System/SiriUserUtteranceViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol OS_dispatch_source;
@class SiriUserUtteranceView, NSString, NSObject, NSArray, NSMutableArray, UILabel, UITableView, SiriUserUtteranceContainingView, UIView, NSMutableDictionary, NSDictionary, SAUIChangePrimaryUtterance, AFUserUtterance;

@interface SiriUserUtteranceViewController : SiriUIAceObjectViewController <SiriUserUtteranceViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	SiriUserUtteranceView* _utteranceView;
	NSString* _preCorrectionText;
	CGSize _currentTextSize;
	char _textChanged;
	char _correctable;
	NSObject*<OS_dispatch_source> _streamingTextTimer;
	NSArray* _speechAlternativeDisplayList;
	NSMutableArray* _speechAlternativeList;
	UILabel* _speechAlternativeTitleLabel;
	UITableView* _speechAlternativeTableView;
	char _showSpeechAlternativeList;
	SiriUserUtteranceContainingView* _containingView;
	UIView* _alternativeView;
	char _startEditWhenShown;
	NSMutableArray* _speechAlternativeCellHeightList;
	float _totalSpeechAlternativeCellHeight;
	NSString* _speechAlternativeListTitle;
	NSMutableDictionary* _alternativeInfoMap;
	char _showOnDeviceResults;
	NSString* _sessionId;
	NSString* _originalUtteranceText;
	NSArray* _savedDictationResult;
	NSDictionary* _savedCorrectionIdentifier;
	SAUIChangePrimaryUtterance* _changeUtteranceCommand;
	char _hasSetDictationResult;
	CGSize _oldUtteranceViewSize;
	AFUserUtterance* _userUtterance;

}

@property (setter=_setUserUtterance:,getter=_userUtterance,nonatomic,retain) AFUserUtterance * userUtterance;              //@synthesize userUtterance=_userUtterance - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_userUtterance;
-(void)utteranceViewTextDidFinishCorrecting:(id)arg1 ;
-(char)utteranceViewTextShouldPreventCorrection:(id)arg1 ;
-(void)utteranceViewTextWillBeginCorrecting:(id)arg1 ;
-(void)utteranceViewTextDidChange:(id)arg1 ;
-(void)utteranceViewTextDidReceiveReturnKey:(id)arg1 ;
-(void)_clearStreamingTextTimer;
-(void)_setUserUtterance:(id)arg1 ;
-(void)_handleOtherRecognitionNotification:(id)arg1 ;
-(void)handleChangeUtteranceCommand:(id)arg1 ;
-(void)_setStreamingText:(id)arg1 ;
-(void)_updateViewWithUserUtterance:(id)arg1 ;
-(void)_createSpeechAlternativeViewsIfNecessary;
-(CGSize)sizeForSpeechAlternativeTitleLabel;
-(float)_heightForSpeechAlternativeWithoutListTable;
-(float)_extraHeightForSpeechAlternative;
-(void)removeSpeechAlternatives;
-(void)handleShowSpeechAlternativesCommand:(id)arg1 ;
-(id)speechAlternativeHighlightListWithScore:(char)arg1 ;
-(void)removeSpeechAlternativeViewAndUpdateUtteranceTextIfNecessary;
-(void)handleSelectRow:(int)arg1 ;
-(void)_checkUpdatedSizingForUtteranceView:(id)arg1 ;
-(id)_correctionIdentifier;
-(id)userSelectionResults:(id)arg1 ;
-(id)_processUserUtterance:(id)arg1 isCombined:(char)arg2 displayedText:(id)arg3 withScore:(char)arg4 leftQuote:(id)arg5 rightQuote:(id)arg6 ;
-(float)heightForSpeechAlternativesAtIndex:(unsigned)arg1 ;
-(void)_resetSnippetEditingState;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(id)_text;
-(void)setAceObject:(id)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)endEditingAndCorrect:(char)arg1 ;
-(void)endEditingAndCorrectByTouchPoint:(CGPoint)arg1 ;
-(void)handleAceCommand:(id)arg1 ;
-(int)_pinAnimationType;
-(int)_insertionAnimation;
-(int)_replacementAnimation;
-(float)_insertionAnimatedZPosition;
@end

