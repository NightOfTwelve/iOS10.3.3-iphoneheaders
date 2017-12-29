/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/AFDictationDelegate.h>
#import <UIKit/_UITouchPhaseChangeDelegate.h>

@class AFDictationConnection, AFDictationOptions, AFPreferences, NSArray, NSTimer, UIAlertView, UIDictationStreamingOperations, NSString, CADisplayLink, _UIDictationTelephonyMonitor, NSMutableArray, UIWindow, _UIDictationPrivacySheetController, UIKeyboardInputMode;

@interface UIDictationController : NSObject <AFDictationDelegate, _UITouchPhaseChangeDelegate> {

	AFDictationConnection* _connection;
	AFDictationOptions* _options;
	AFPreferences* _preferences;
	NSArray* _availableLanguages;
	NSTimer* _recordingLimitTimer;
	UIAlertView* _dictationAvailableSoonAlert;
	char _connectionWasAlreadyAliveForStatisticsLogging;
	UIDictationStreamingOperations* _streamingOperations;
	NSString* _language;
	char _recievingResults;
	char _streamingAnimationActive;
	double _lastAnimationUpdateTimeStamp;
	/*^block*/id _finalResultsOperation;
	CADisplayLink* _streamingAnimationDisplayLink;
	char cancelledByWaitingForLocalResults;
	int _updatingDocument;
	char _deferredCancellationRequested;
	char _isOfflineMetricsSessionActive;
	char _didUseOfflineDictation;
	int _lastOfflineDictationMetricEvent;
	_UIDictationTelephonyMonitor* _monitor;
	char dictationStartedFromGesture;
	char _performingStreamingEditingOperation;
	char _discardNextHypothesis;
	char _hasPreheated;
	char _wantsAvailabilityMonitoringWhenAppActive;
	NSString* _activationIdentifier;
	NSMutableArray* _pendingEdits;
	NSString* _previousHypothesis;
	NSString* _lastHypothesis;
	NSString* _targetHypothesis;
	UIWindow* _dictationPresenterWindow;
	_UIDictationPrivacySheetController* _dictationPrivacySheetController;
	UIKeyboardInputMode* _inputModeThatInvokedDictation;
	NSRange _insertionRange;

}

@property (assign,nonatomic) char wantsAvailabilityMonitoringWhenAppActive;                                     //@synthesize wantsAvailabilityMonitoringWhenAppActive=_wantsAvailabilityMonitoringWhenAppActive - In the implementation block
@property (nonatomic,copy) NSString * activationIdentifier;                                                     //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingEdits;                                                     //@synthesize pendingEdits=_pendingEdits - In the implementation block
@property (assign,nonatomic) char performingStreamingEditingOperation;                                          //@synthesize performingStreamingEditingOperation=_performingStreamingEditingOperation - In the implementation block
@property (nonatomic,copy) NSString * previousHypothesis;                                                       //@synthesize previousHypothesis=_previousHypothesis - In the implementation block
@property (nonatomic,copy) NSString * lastHypothesis;                                                           //@synthesize lastHypothesis=_lastHypothesis - In the implementation block
@property (nonatomic,copy) NSString * targetHypothesis;                                                         //@synthesize targetHypothesis=_targetHypothesis - In the implementation block
@property (assign,nonatomic) char discardNextHypothesis;                                                        //@synthesize discardNextHypothesis=_discardNextHypothesis - In the implementation block
@property (assign,nonatomic) NSRange insertionRange;                                                            //@synthesize insertionRange=_insertionRange - In the implementation block
@property (assign,nonatomic) char hasPreheated;                                                                 //@synthesize hasPreheated=_hasPreheated - In the implementation block
@property (nonatomic,retain) UIWindow * dictationPresenterWindow;                                               //@synthesize dictationPresenterWindow=_dictationPresenterWindow - In the implementation block
@property (nonatomic,retain) _UIDictationPrivacySheetController * dictationPrivacySheetController;              //@synthesize dictationPrivacySheetController=_dictationPrivacySheetController - In the implementation block
@property (assign,nonatomic) char dictationStartedFromGesture; 
@property (nonatomic,retain) UIKeyboardInputMode * inputModeThatInvokedDictation;                               //@synthesize inputModeThatInvokedDictation=_inputModeThatInvokedDictation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activeInstance;
+(id)sharedInstance;
+(char)isRunning;
+(id)serializedDictationPhrases:(id)arg1 ;
+(id)metadataDictionaryForCorrectionIdentifier:(id)arg1 ;
+(id)bestInterpretationForDictationResult:(id)arg1 ;
+(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
+(void)keyboardDidSetInputMode;
+(char)shouldDeleteBackwardInInputDelegate:(id)arg1 ;
+(char)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2 ;
+(id)singleLineResultForResult:(id)arg1 ;
+(void)keyboardDidUpdateOnScreenStatus;
+(char)fetchCurrentInputModeSupportsDictation;
+(id)stringForState:(int)arg1 ;
+(char)dictationIsFunctional;
+(int)viewMode;
+(char)usingServerManualEndpointingThreshold;
+(float)serverManualEndpointingThreshold;
+(void)didOneFingerTapInTextView:(id)arg1 ;
+(char)shouldHideCursorForTextView:(id)arg1 ;
+(void)updateLandingView;
+(char)shouldHideSelectionUIForTextView:(id)arg1 ;
+(void)poppedLastStreamingOperation;
+(char)openAssistantFrameworkIfNecessary;
+(char)setupForOpeningConnections;
+(char)setupForPhraseSerialization;
+(void)applicationDidBecomeActive;
+(void)applicationWillResignActive;
+(void)applicationDidEnterBackgroundNotification;
+(void)siriPreferencesChanged;
+(void)textFieldTextDidEndEditing;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 ranges:(id*)arg3 ;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 ;
+(char)shouldEnableGestureHandler;
+(void)disableGestureHandler;
+(id)activeConnection;
+(void)enableGestureHandlerIfNecessary;
+(void)logCorrectionStatisticsForDelegate:(id)arg1 ;
+(char)isTextViewOnStarkScreen:(id)arg1 ;
+(char)usingTypeAndTalk;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 ranges:(id*)arg3 options:(id)arg4 ;
+(id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(char)arg2 transform:(CFStringRef)arg3 useServerCapitalization:(char)arg4 ;
+(id)interpretation:(id)arg1 forPhraseIndex:(unsigned)arg2 isShiftLocked:(char)arg3 autocapitalizationType:(int)arg4 useServerCapitalization:(char)arg5 ;
+(id)serializedDictationPhrases:(id)arg1 fromKeyboard:(char)arg2 transform:(CFStringRef)arg3 useServerCapitalization:(char)arg4 ;
+(char)starkScreenExists;
+(id)streamingHypothesisForPhrases:(id)arg1 ;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 fromKeyboard:(char)arg3 useServerCapitalization:(char)arg4 ;
+(char)takesPressesBegan:(id)arg1 forTextView:(id)arg2 ;
+(char)takesPressesChanged:(id)arg1 forTextView:(id)arg2 ;
+(char)takesPressesEnded:(id)arg1 forTextView:(id)arg2 ;
+(id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2 ;
+(char)remoteCanDictateCurrentInputMode;
+(void)didBeginEditingInTextView:(id)arg1 ;
+(void)logDictationString:(id)arg1 ;
+(id)stringForViewMode:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)proximityStateChanged:(id)arg1 ;
-(UIKeyboardInputMode *)inputModeThatInvokedDictation;
-(char)dictationIsModifyingText;
-(void)cancelDictation;
-(void)_touchPhaseChangedForTouch:(id)arg1 ;
-(void)markKeyboardDidReset;
-(void)switchToDictationInputModeWithTouch:(id)arg1 ;
-(void)stopDictation;
-(void)startDictation;
-(id)connection;
-(id)_connection;
-(char)supportsInputMode:(id)arg1 error:(id*)arg2 ;
-(void)switchToDictationInputMode;
-(void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(void)setInputModeThatInvokedDictation:(UIKeyboardInputMode *)arg1 ;
-(void)setPerformingStreamingEditingOperation:(char)arg1 ;
-(id)language;
-(char)dictationEnabled;
-(char)disabledDueToTelephonyActivity;
-(id)assistantCompatibleLanguageCodeForInputMode:(id)arg1 ;
-(id)connectionForStatisticsLogging;
-(void)releaseConnectionAfterStatisticsLogging;
-(void)disableAutorotation;
-(void)reenableAutorotation;
-(char)dictationStartedFromGesture;
-(void)startDictationForReason:(int)arg1 ;
-(void)setDictationStartedFromGesture:(char)arg1 ;
-(void)setDictationInputmode;
-(void)enableProximity;
-(id)streamingOperations;
-(void)setWantsAvailabilityMonitoringWhenAppActive:(char)arg1 ;
-(void)releaseConnection;
-(void)_endEnableDictationPromptAnimated:(char)arg1 ;
-(void)startHelpMessageDisplay;
-(void)_beginOfflineMetricsSession;
-(void)stopHelpMessageDisplay;
-(void)_endOfflineMetricsSession;
-(char)performingStreamingEditingOperation;
-(void)_restartDictation;
-(void)setDiscardNextHypothesis:(char)arg1 ;
-(char)_shouldDeleteBackwardInInputDelegate:(id)arg1 ;
-(char)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2 ;
-(char)wantsAvailabilityMonitoringWhenAppActive;
-(id)supportedDictationLanguages:(/*^block*/id)arg1 ;
-(id)fieldIdentifierInputDelegate:(id)arg1 ;
-(id)prefixTextForInputDelegate:(id)arg1 ;
-(id)postfixTextForInputDelegate:(id)arg1 ;
-(id)selectedTextForInputDelegate:(id)arg1 ;
-(NSString *)activationIdentifier;
-(void)setupConnectionOptions;
-(void)setupForDictationStartForReason:(int)arg1 ;
-(void)completeStartConnectionForReason:(int)arg1 ;
-(void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(NSString *)targetHypothesis;
-(void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2 ;
-(void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(void)_setFinalResultHandler:(/*^block*/id)arg1 ;
-(void)_runFinalizeOperation:(char)arg1 ;
-(void)performIgnoringDocumentChanges:(/*^block*/id)arg1 ;
-(void)_stopStreamingAnimation;
-(void)setPendingEdits:(NSMutableArray *)arg1 ;
-(void)setLastHypothesis:(NSString *)arg1 ;
-(void)setTargetHypothesis:(NSString *)arg1 ;
-(void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)_runFinalizeOperation;
-(void)releaseConnectionAfterDictationRequest;
-(char)isRecievingResults;
-(void)_displaySecureContentsAsPlainText:(char)arg1 afterDelay:(double)arg2 ;
-(void)clearTextFieldPlaceholder;
-(void)setDictationPresenterWindow:(UIWindow *)arg1 ;
-(void)setDictationPrivacySheetController:(_UIDictationPrivacySheetController *)arg1 ;
-(void)cancelRecordingLimitTimer;
-(void)setPreviousHypothesis:(NSString *)arg1 ;
-(void)setInsertionRange:(NSRange)arg1 ;
-(id)languageCodeForAssistantLanguageCode:(id)arg1 ;
-(void)setLanguage:(id)arg1 ;
-(void)startRecordingLimitTimer;
-(void)setupForStreamingDictationStart;
-(void)startConnectionForReason:(int)arg1 ;
-(void)_beginEnableDictationPrompt;
-(UIWindow *)dictationPresenterWindow;
-(void)_presentOptInAlertForDictationInputMode;
-(_UIDictationPrivacySheetController *)dictationPrivacySheetController;
-(void)_presentPrivacySheetWithCompletion:(/*^block*/id)arg1 ;
-(void)presentOptInAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_createDictationPresenterWindowIfNecessary;
-(char)isIgnoringDocumentChanges;
-(NSString *)lastHypothesis;
-(id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2 ;
-(id)_rangeByExtendingRange:(id)arg1 backward:(int)arg2 forward:(int)arg3 inputDelegate:(id)arg4 ;
-(void)_setupHypothesisAsFinalResults;
-(void)_startStreamingAnimations;
-(id)dictationPhraseArrayFromDictationResult:(id)arg1 ;
-(char)needsTrailingSpaceForPhrases:(id)arg1 ;
-(char)needsLeadingSpaceForPhrases:(id)arg1 ;
-(CFStringRef)resultTransformForLanguageModel:(id)arg1 ;
-(id)resultWithTrailingSpace:(id)arg1 ;
-(void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 ;
-(void)_displayLinkFired:(id)arg1 ;
-(NSMutableArray *)pendingEdits;
-(id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(NSRange*)arg3 documentTextInRange:(id*)arg4 ;
-(char)discardNextHypothesis;
-(NSString *)previousHypothesis;
-(void)setupToInsertResultForNewHypothesis:(id)arg1 ;
-(int)dictationCommandForToken:(id)arg1 ;
-(void)handleTextTokens:(id)arg1 transform:(CFStringRef)arg2 ;
-(void)handleDictationCommand:(int)arg1 ;
-(void)_deleteBackwardIntoText;
-(void)_clearExistingText;
-(void)_markOfflineDictationInputMetricEvent;
-(id)_containingSearchBarForView:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(char)arg4 final:(char)arg5 ;
-(char)hasPreheated;
-(void)setHasPreheated:(char)arg1 ;
-(id)_currentLanguageForOfflineDictationMetrics;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(float)audioLevel;
-(void)errorAnimationDidFinish;
-(void)dismissDictationView:(id)arg1 ;
-(char)shouldPresentOptInAlert;
-(void)cancelDictationForTextStoreChangesInResponder:(id)arg1 ;
-(void)restartDictationForTypeAndTalk;
-(void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3 ;
-(void)preheatIfNecessary;
-(void)markKeyboardInputMetricEvent;
-(void)markKeyboardDeleteMetricEvent;
-(void)setActivationIdentifier:(NSString *)arg1 ;
-(NSRange)insertionRange;
@end
