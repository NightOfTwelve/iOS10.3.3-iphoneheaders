/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBBackgroundView, UIKeyboardPredictionBarGrabber, NSArray, NSMutableArray, UIKeyboardPredictionCell, NSString, UIView, UILabel, UIKBKeyView, UITouch, UITextSuggestion, NSTimer, TIKeyboardCandidate, NSDate;

@interface UIKeyboardPredictionView : UIView {

	UIKBBackgroundView* m_backgroundView;
	UIKeyboardPredictionBarGrabber* m_grabber;
	NSArray* m_predictionCells;
	NSMutableArray* m_threeTextCells;
	NSMutableArray* m_twoTextCells;
	NSMutableArray* m_oneTextCells;
	NSMutableArray* m_emojiCells;
	NSMutableArray* m_textAndEmojiCells;
	UIKeyboardPredictionCell* m_lastCell;
	unsigned m_activeIndex;
	float m_width;
	char m_lightKeyboard;
	NSString* m_openQuote;
	NSString* m_closeQuote;
	UIView* m_message;
	UILabel* m_messageLabel;
	UIKBKeyView* m_messageKeyView;
	double m_messageShownTime;
	CGPoint m_initLocation;
	char m_dragging;
	char m_hasLongCandidates;
	char m_currentInputModeEnablePrediction;
	unsigned m_autocorrectionCell;
	char m_delayActive;
	char m_isMinimized;
	UIKBKeyView* m_collapsedView;
	int _notifyBatterySaverToken;
	unsigned m_numberOfVisibleCells;
	UITouch* _activeTouch;
	int _state;
	UITextSuggestion* _currentFirstTextSuggestion;
	NSTimer* _updateTimer;
	NSArray* _scheduledPredictions;
	TIKeyboardCandidate* _scheduledAutocorrection;
	NSArray* _scheduledEmojiList;
	NSDate* _lastUpdateDate;
	NSDate* _lastTextSuggestionUpdateDate;
	int _lastTextSuggestionUpdateOrientation;

}

@property (nonatomic,retain) NSTimer * updateTimer;                                      //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,retain) NSArray * scheduledPredictions;                             //@synthesize scheduledPredictions=_scheduledPredictions - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * scheduledAutocorrection;              //@synthesize scheduledAutocorrection=_scheduledAutocorrection - In the implementation block
@property (nonatomic,retain) NSArray * scheduledEmojiList;                               //@synthesize scheduledEmojiList=_scheduledEmojiList - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                                    //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,retain) NSDate * lastTextSuggestionUpdateDate;                      //@synthesize lastTextSuggestionUpdateDate=_lastTextSuggestionUpdateDate - In the implementation block
@property (assign,nonatomic) int lastTextSuggestionUpdateOrientation;                    //@synthesize lastTextSuggestionUpdateOrientation=_lastTextSuggestionUpdateOrientation - In the implementation block
@property (nonatomic,retain) UITouch * activeTouch;                                      //@synthesize activeTouch=_activeTouch - In the implementation block
@property (assign,nonatomic) char show; 
@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UITextSuggestion * currentFirstTextSuggestion;              //@synthesize currentFirstTextSuggestion=_currentFirstTextSuggestion - In the implementation block
+(id)activeInstance;
+(id)sharedInstance;
+(id)resultCountToSingleCellWidth;
+(float)predictionViewHeightForState:(int)arg1 orientation:(int)arg2 ;
+(float)predictionViewHeightPaddingForOrientation:(int)arg1 ;
+(unsigned)numberOfCandidates;
+(float)predictionViewWidthForOrientation:(int)arg1 ;
+(float)overlapHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(char)enabled;
-(char)show;
-(void)dealloc;
-(id)description;
-(int)state;
-(void)dimKeys:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)suspend;
-(float)heightForInterfaceOrientation:(int)arg1 ;
-(id)autocorrection;
-(void)setPredictionViewState:(int)arg1 animate:(char)arg2 ;
-(int)stateForCurrentPreferences;
-(void)setPredictionViewState:(int)arg1 animate:(char)arg2 notify:(char)arg3 ;
-(void)setCurrentFirstTextSuggestion:(UITextSuggestion *)arg1 ;
-(void)setShow:(char)arg1 ;
-(void)acceptPredictiveInput:(id)arg1 ;
-(void)updateBackgroundWithRenderConfig:(id)arg1 ;
-(NSTimer *)updateTimer;
-(id)createCells:(unsigned)arg1 ;
-(void)inputModeDidChange;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)setLastTextSuggestionUpdateDate:(NSDate *)arg1 ;
-(void)setLastTextSuggestionUpdateOrientation:(int)arg1 ;
-(void)setActiveTouch:(UITouch *)arg1 ;
-(void)releaseMessage;
-(void)setFrameForCells:(id)arg1 start:(float)arg2 width:(float)arg3 height:(float)arg4 ;
-(void)setTouchedCellState:(int)arg1 ;
-(unsigned)indexForPoint:(CGPoint)arg1 ;
-(void)setActiveCellWithIndex:(unsigned)arg1 ;
-(UITouch *)activeTouch;
-(void)commitPrediction:(id)arg1 ;
-(void)delayActivateCellForPrediction:(id)arg1 ;
-(void)deactivateCandidate;
-(void)acceptCandidateAtCell:(id)arg1 ;
-(id)labelTextForPrediction:(id)arg1 typedString:(id)arg2 ;
-(TIKeyboardCandidate *)scheduledAutocorrection;
-(NSArray *)scheduledPredictions;
-(NSArray *)scheduledEmojiList;
-(void)_setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3 ;
-(void)setScheduledPredictions:(NSArray *)arg1 ;
-(void)setScheduledAutocorrection:(TIKeyboardCandidate *)arg1 ;
-(void)setScheduledEmojiList:(NSArray *)arg1 ;
-(void)updateTimerFired:(id)arg1 ;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(NSDate *)lastUpdateDate;
-(UITextSuggestion *)currentFirstTextSuggestion;
-(NSDate *)lastTextSuggestionUpdateDate;
-(int)lastTextSuggestionUpdateOrientation;
-(void)touchUpdateTimer;
-(int)messageCount;
-(int)maxMessageCount;
-(void)removeMessage;
-(void)initCells;
-(float)heightBeforeStateChangeForInterfaceOrientation:(int)arg1 ;
-(void)suppressLayoutSubviewsForCellLabels:(char)arg1 ;
-(unsigned)predictionCount;
-(void)acceptCandidate;
-(void)activateCandidateAtPoint:(CGPoint)arg1 ;
-(void)setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3 ;
-(void)showMessageWithSize:(CGSize)arg1 ;
-(char)isTextSuggestion;
-(char)hasPredictions;
@end
