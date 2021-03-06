/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardLayout.h>
#import <UIKit/UIKBEmojiHitTestResponder.h>

@class UIKBTree, NSString, UIKBKeyplaneView, UIKBBackgroundView, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, NSMutableDictionary, NSMutableSet, UISwipeGestureRecognizer, UIKeyboardSplitTransitionView, CADisplayLink, UIDelayedAction, UIView, NSTimer, _UIKeyboardTypingSpeedLogger, UIKBRenderConfig, NSMutableArray, NSNumber, NSDate, UIGestureKeyboardIntroduction, _UIFeedbackRetargetBehavior;

@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder> {

	UIKBTree* _keyboard;
	UIKBTree* _keyplane;
	NSString* _keyboardName;
	NSString* _keyplaneName;
	int _appearance;
	UIKBTree* _activeKey;
	UIKBTree* _inactiveLanguageIndicator;
	UIKBKeyplaneView* _keyplaneView;
	UIKBBackgroundView* _backgroundView;
	UIKBKeyViewAnimator* _keyViewAnimator;
	UIKeyboardEmojiKeyDisplayController* _emojiKeyManager;
	double _prevTouchUpTime;
	double _prevTouchUpFinishedTime;
	double _prevTouchDownTime;
	unsigned long long _prevUpActions;
	NSMutableDictionary* _keyboards;
	NSMutableDictionary* _allKeyplaneViews;
	NSMutableSet* _allKeyplaneKeycaps;
	NSMutableSet* _validInputStrings;
	NSString* _localizedInputKey;
	CFDictionaryRef _extendedTouchInfoMap;
	int _preferredTrackingChangeCount;
	int _shiftTrackingChangeCount;
	NSMutableSet* _accentInfo;
	NSMutableSet* _hasAccents;
	id _spaceTarget;
	SEL _spaceAction;
	SEL _spaceLongAction;
	id _returnTarget;
	SEL _returnAction;
	SEL _returnLongAction;
	id _deleteTarget;
	SEL _deleteAction;
	SEL _deleteLongAction;
	char _shift;
	char _autoshift;
	char _settingShift;
	char _holdingShift;
	char _didLongPress;
	NSString* _preTouchKeyplaneName;
	char _revertKeyplaneAfterTouch;
	char _wasShifted;
	char _swipeDetected;
	char _showIntlKey;
	char _showDictationKey;
	char _suppressDeactivateKeys;
	char _suppressShiftKeyplaneAnimation;
	char _suppressGestureKeyplaneAnimation;
	char _isTrackpadMode;
	char _shiftLockReady;
	double _shiftLockFirstTapTime;
	UISwipeGestureRecognizer* _rightSwipeRecognizer;
	UISwipeGestureRecognizer* _leftSwipeRecognizer;
	UISwipeGestureRecognizer* _upSwipeRecognizer;
	NSMutableDictionary* _activeKeyplaneTransitions;
	UIKeyboardSplitTransitionView* _transitionView;
	float _initialSplitProgress;
	float _finalSplitProgress;
	float _initialPinchSeparation;
	float _pinchSeparationValues[4];
	char _pinchDetected;
	double _autoSplitLastUpdate;
	float _autoSplitElapsedTime;
	CADisplayLink* _displayLink;
	char _ghostKeysEnabled;
	UIDelayedAction* _delayedCentroidUpdate;
	char _isRebuilding;
	int _initialBias;
	int _transitionTargetBias;
	char _edgeSwipeDetected;
	float _initialEdgeTranslation;
	float _edgeSwipeProgress;
	float _edgeSwipeVelocity;
	NSString* _layoutTag;
	char _preRotateShift;
	NSString* _preRotateKeyplaneName;
	char _preRotateTrackpadMode;
	UIDelayedAction* _multitapAction;
	char _unshiftAfterMultitap;
	int _multitapCount;
	UIKBTree* _multitapKey;
	UIView* _flickPopupView;
	NSMutableDictionary* _compositeImages;
	NSTimer* _flickPopuptimer;
	id _touchInfo;
	UIView* _dimKeyboardImageView;
	char _keyboardImageViewIsDim;
	char _isOutOfBounds;
	NSMutableSet* _keysUnderIndicator;
	_UIKeyboardTypingSpeedLogger* _typingSpeedLogger;
	UIKBRenderConfig* _passcodeRenderConfig;
	int _setKeyplaneViewCount;
	char _inputTraitsPreventInitialReuse;
	char _settingFloat;
	NSMutableSet* _leftKeySet;
	NSMutableSet* _rightKeySet;
	CGPoint _leftDriftOffset;
	CGPoint _rightDriftOffset;
	NSMutableArray* _leftSideReachability;
	NSMutableArray* _rightSideReachability;
	NSNumber* _homeRowHint;
	double _touchDownTimeSpan;
	NSDate* _prevTouchMoreKeyTime;
	NSString* _lastInputMode;
	char _pendingDictationReload;
	char _hasPeekedGestureKey;
	char _lastInputIsGestureKey;
	UIGestureKeyboardIntroduction* _gestureKeyboardIntroduction;
	char _muteNextKeyClickSound;
	int playKeyClickSoundOn;
	UIKBRenderConfig* _renderConfig;
	UIView* _modalDisplayView;
	_UIFeedbackRetargetBehavior* _slideBehaviour;
	int _rightSwipeFunction;
	int _leftSwipeFunction;
	int _downSwipeFunction;
	double _lastTwoFingerTapTimestamp;

}

@property (assign,nonatomic) int playKeyClickSoundOn; 
@property (assign,nonatomic) char muteNextKeyClickSound;                                //@synthesize muteNextKeyClickSound=_muteNextKeyClickSound - In the implementation block
@property (assign) int rightSwipeFunction;                                              //@synthesize rightSwipeFunction=_rightSwipeFunction - In the implementation block
@property (assign) int leftSwipeFunction;                                               //@synthesize leftSwipeFunction=_leftSwipeFunction - In the implementation block
@property (assign) int downSwipeFunction;                                               //@synthesize downSwipeFunction=_downSwipeFunction - In the implementation block
@property (nonatomic,retain) _UIFeedbackRetargetBehavior * slideBehaviour;              //@synthesize slideBehaviour=_slideBehaviour - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyboard;                                     //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyplane;                                     //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,copy) NSString * keyboardName;                                     //@synthesize keyboardName=_keyboardName - In the implementation block
@property (nonatomic,copy) NSString * keyplaneName;                                     //@synthesize keyplaneName=_keyplaneName - In the implementation block
@property (nonatomic,readonly) NSString * localizedInputMode; 
@property (nonatomic,copy) NSString * localizedInputKey;                                //@synthesize localizedInputKey=_localizedInputKey - In the implementation block
@property (nonatomic,retain) UIKBTree * activeKey;                                      //@synthesize activeKey=_activeKey - In the implementation block
@property (assign,nonatomic) char shift;                                                //@synthesize shift=_shift - In the implementation block
@property (assign,nonatomic) char autoShift;                                            //@synthesize autoshift=_autoshift - In the implementation block
@property (assign,nonatomic) char didLongPress;                                         //@synthesize didLongPress=_didLongPress - In the implementation block
@property (getter=isRotating,nonatomic,readonly) char rotating; 
@property (nonatomic,readonly) char showsInternationalKey;                              //@synthesize showIntlKey=_showIntlKey - In the implementation block
@property (nonatomic,readonly) char showsDictationKey;                                  //@synthesize showDictationKey=_showDictationKey - In the implementation block
@property (nonatomic,copy) NSString * preTouchKeyplaneName;                             //@synthesize preTouchKeyplaneName=_preTouchKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                           //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) NSString * layoutTag;                                      //@synthesize layoutTag=_layoutTag - In the implementation block
@property (nonatomic,retain) UIView * modalDisplayView;                                 //@synthesize modalDisplayView=_modalDisplayView - In the implementation block
@property (assign,nonatomic) double lastTwoFingerTapTimestamp;                          //@synthesize lastTwoFingerTapTimestamp=_lastTwoFingerTapTimestamp - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(int)arg3 ;
+(Class)_subclassForScreenTraits:(id)arg1 ;
+(void)accessibilitySensitivityChanged;
+(id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2 ;
+(id)keyboardWithName:(id)arg1 screenTraits:(id)arg2 ;
+(id)sharedRivenKeyplaneGenerator;
+(id)sharedPunctuationCharacterSet;
-(id)currentKeyplane;
-(id)currentKeyplaneView;
-(id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 isPopupVariant:(char)arg3 isMultitap:(char)arg4 isFlick:(char)arg5 ;
-(id)keyViewAnimator;
-(void)removeFromSuperview;
-(void)dismissGestureKeyboardIntroduction;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShift:(char)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIKBRenderConfig *)renderConfig;
-(id)emojiKeyManager;
-(char)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)deactivateActiveKey;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(double)lastTouchUpTimestamp;
-(char)isRotating;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(void)setDidLongPress:(char)arg1 ;
-(char)didLongPress;
-(UIKBTree *)keyboard;
-(void)setSplitProgress:(float)arg1 ;
-(void)logHandwritingData;
-(id)candidateList;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(void)clearUnusedObjects:(char)arg1 ;
-(void)clearTransientState;
-(char)isAlphabeticPlane;
-(char)hasCandidateKeys;
-(char)hasAccentKey;
-(char)canMultitap;
-(char)diacriticForwardCompose;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(void)deactivateActiveKeys;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(char)pinchDetected;
-(char)pinchSplitGestureEnabled;
-(void)showSplitTransitionView:(char)arg1 ;
-(char)shouldShowIndicator;
-(id)activationIndicatorView;
-(void)setHideKeysUnderIndicator:(char)arg1 ;
-(char)keyplaneContainsEmojiKey;
-(void)willRotate;
-(void)didRotate;
-(char)performReturnAction;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)setAutoshift:(char)arg1 ;
-(void)fadeWithInvocation:(id)arg1 ;
-(char)shouldAllowSelectionGestures:(char)arg1 atPoint:(CGPoint)arg2 toBegin:(char)arg3 ;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(CGSize)stretchFactor;
-(void)deleteHandwritingStrokesAtIndexes:(id)arg1 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)updateKeyCentroids;
-(void)restoreDefaultsForKey:(id)arg1 ;
-(unsigned)textEditingKeyMask;
-(void)setTextEditingTraits:(id)arg1 ;
-(void)triggerSpaceKeyplaneSwitchIfNecessary;
-(void)didClearInput;
-(void)restoreDefaultsForAllKeys;
-(void)updateBackgroundCorners;
-(void)setTarget:(id)arg1 forKey:(id)arg2 ;
-(void)setAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLongPressAction:(SEL)arg1 forKey:(id)arg2 ;
-(char)canProduceString:(id)arg1 ;
-(float)hitBuffer;
-(void)longPressAction;
-(void)setReturnKeyEnabled:(char)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(char)usesAutoShift;
-(char)ignoresShiftState;
-(char)isShiftKeyPlaneChooser;
-(char)isShiftKeyBeingHeld;
-(void)updateLocalizedKeys:(char)arg1 ;
-(void)setSplit:(char)arg1 animated:(char)arg2 ;
-(void)finishSplitTransitionWithProgress:(float)arg1 ;
-(NSString *)keyplaneName;
-(NSString *)keyboardName;
-(NSString *)localizedInputMode;
-(void)setDisableInteraction:(char)arg1 ;
-(void)setPreferredHeight:(float)arg1 ;
-(void)setPasscodeOutlineAlpha:(float)arg1 ;
-(id)baseKeyForString:(id)arg1 ;
-(id)keyplaneForKey:(id)arg1 ;
-(id)keyplaneNamed:(id)arg1 ;
-(void)changeToKeyplane:(id)arg1 ;
-(id)simulateTouch:(CGPoint)arg1 ;
-(id)simulateTouchForCharacter:(id)arg1 errorVector:(CGPoint)arg2 shouldTypeVariants:(char)arg3 baseKeyForVariants:(char)arg4 ;
-(SEL)handlerForNotification:(id)arg1 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(char)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2 ;
-(void)didFinishScreenGestureRecognition;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(void)touchCancelled:(id)arg1 forResting:(char)arg2 executionContext:(id)arg3 ;
-(void)touchChanged:(id)arg1 executionContext:(id)arg2 ;
-(void)handRestRecognizerNotifyRestForBegin:(char)arg1 location:(CGPoint)arg2 timestamp:(double)arg3 pathIndex:(int)arg4 touchUUID:(id)arg5 context:(id)arg6 ;
-(char)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 forRestingState:(unsigned)arg4 otherRestedTouchLocations:(id)arg5 ;
-(char)_handRestRecognizerCancelShouldBeEnd;
-(CGSize)handRestRecognizerStandardKeyPixelSize;
-(CGPoint)getCenterForKeyUnderLeftIndexFinger;
-(CGPoint)getCenterForKeyUnderRightIndexFinger;
-(id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(int)arg1 ;
-(unsigned)targetEdgesForScreenGestureRecognition;
-(unsigned char)getHandRestRecognizerState;
-(void)didRecognizeGestureOnEdge:(unsigned)arg1 withDistance:(float)arg2 ;
-(void)setNeedsVirtualDriftUpdate;
-(char)performSpaceAction;
-(void)deactivateActiveKeysClearingTouchInfo:(char)arg1 clearingDimming:(char)arg2 ;
-(void)touchCancelled:(id)arg1 executionContext:(id)arg2 ;
-(/*^block*/id)handRestRecognizerSilenceNextTouchDown;
-(void)willBeginIndirectSelectionGesture;
-(void)didEndIndirectSelectionGesture;
-(void)cancelTouchesForTwoFingerTapGesture:(id)arg1 ;
-(char)keyplaneContainsDismissKey;
-(char)isEmojiKeyplane;
-(char)supportsEmoji;
-(void)installGestureRecognizers;
-(CGImageRef)renderedImageWithToken:(id)arg1 ;
-(char)showsInternationalKey;
-(char)showsDictationKey;
-(UIKBTree *)keyplane;
-(void)refreshForDictationAvailablityDidChange;
-(void)nextToUseInputModeDidChange:(id)arg1 ;
-(void)setRightSwipeFunction:(int)arg1 ;
-(void)setLeftSwipeFunction:(int)arg1 ;
-(void)setDownSwipeFunction:(int)arg1 ;
-(void)uninstallGestureRecognizers;
-(void)cancelMultitapTimer;
-(void)accessibilitySensitivityChanged;
-(char)shouldDeactivateWithoutWindow;
-(UIView *)modalDisplayView;
-(void)setModalDisplayView:(UIView *)arg1 ;
-(void)cancelDelayedCentroidUpdate;
-(void)clearAllTouchInfo;
-(void)handleDismissFlickView:(id)arg1 ;
-(void)setActiveKey:(UIKBTree *)arg1 ;
-(void)setPreTouchKeyplaneName:(NSString *)arg1 ;
-(id)defaultNameForKeyplaneName:(id)arg1 ;
-(id)splitNameForKeyplaneName:(id)arg1 ;
-(CGRect)frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2 ;
-(int)visualStyleForKeyboardIfSplit:(char)arg1 ;
-(void)updateBackgroundIfNeeded;
-(void)setLocalizedInputKey:(NSString *)arg1 ;
-(void)setKeyplaneName:(NSString *)arg1 ;
-(void)refreshForRivenPreferences;
-(void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)arg1 withInputMode:(id)arg2 ;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(int)displayTypeHintForShiftKey;
-(int)displayTypeHintForMoreKey;
-(void)updateInputModeLocalizedKeysForKeyplane:(id)arg1 ;
-(void)updateAutolocalizedKeysForKeyplane:(id)arg1 ;
-(char)shouldMatchCaseForDomainKeys;
-(void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1 ;
-(void)setPercentSignKeysForCurrentLocaleOnKeyplane:(id)arg1 ;
-(void)updateLocalizedKeysForKeyplane:(id)arg1 updateAllKeyplanes:(char)arg2 ;
-(void)updateLocalizedKeysOnKeyplane:(id)arg1 ;
-(CGImageRef)cachedCompositeImageWithCacheKey:(id)arg1 ;
-(CGImageRef)renderedImageWithStateFallbacksForToken:(id)arg1 ;
-(int)stateForKey:(id)arg1 ;
-(void)willBeginIndirectSelectionGesture:(char)arg1 ;
-(void)clearHandwritingStrokesIfNeededAndNotify:(char)arg1 ;
-(void)didEndIndirectSelectionGesture:(char)arg1 ;
-(char)shouldShowDictationKey;
-(char)handwritingPlane;
-(id)keyHitTestClosestToPoint:(CGPoint)arg1 ;
-(UIKBTree *)activeKey;
-(unsigned long long)downActionFlagsForKey:(id)arg1 ;
-(int)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 ;
-(void)setLastTwoFingerTapTimestamp:(double)arg1 ;
-(char)globeKeyDisplaysAsEmojiKey;
-(char)stretchKeyboardToFitKeyplane:(id)arg1 ;
-(char)stretchKeyboardToFit;
-(char)canReuseKeyplaneView;
-(char)shouldAllowCurrentKeyplaneReload;
-(unsigned)keyplaneShiftState;
-(id)splitNameForKeyplane:(id)arg1 ;
-(void)updateKeyboardForKeyplane:(id)arg1 ;
-(id)cacheTokenForKeyplane:(id)arg1 caseAlternates:(char)arg2 ;
-(id)defaultKeyplaneForKeyplane:(id)arg1 ;
-(void)clearKeyAnnotationsIfNecessary;
-(void)annotateKeysWithDeveloperPunctuation;
-(void)annotateKeysForGestures;
-(void)annotateWriteboardDisplayTypeHintForKeyIfNeeded;
-(id)cacheIdentifierForKeyplaneNamed:(id)arg1 ;
-(void)mergeKeysIfNeeded;
-(int)stateForShiftKey:(id)arg1 ;
-(int)stateForKeyplaneSwitchKey:(id)arg1 ;
-(int)stateForMultitapReverseKey:(id)arg1 ;
-(int)stateForCandidateListKey:(id)arg1 ;
-(int)stateForDictationKey:(id)arg1 ;
-(int)stateForStylingKey:(id)arg1 ;
-(int)stateForManipulationKey:(id)arg1 ;
-(void)updateLayoutTags;
-(void)updateCachedKeyplaneKeycaps;
-(void)updateGlobeKeyDisplayString;
-(void)setKeyboardDim:(char)arg1 ;
-(void)rebuildSplitTransitionView;
-(char)useDismissForMessagesWriteboard;
-(char)useUndoForMessagesWriteboard;
-(void)_setReturnKeyEnabled:(char)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(void)updateTransitionWithFlags:(unsigned long long)arg1 ;
-(char)_stringContainsCurrencyCharacters:(id)arg1 ;
-(void)updateCurrencySymbolForKey:(id)arg1 withCurrencyString:(id)arg2 ;
-(id)keyWithRepresentedString:(id)arg1 ;
-(char)supportStylingWithKey:(id)arg1 ;
-(id)highlightedVariantListForStylingKey:(id)arg1 ;
-(void)relayoutForWriteboardKey;
-(void)updateMoreAndInternationalKeys;
-(void)updateReturnKeysIfNeeded;
-(char)shouldMergeKey:(id)arg1 ;
-(id)keylistContainingKey:(id)arg1 ;
-(id)inputModeToMergeCapsLockKey;
-(void)cleanupPreviousKeyboardWithNewInputTraits:(id)arg1 ;
-(void)setKeyboardName:(id)arg1 appearance:(int)arg2 ;
-(void)setToInitialKeyplane;
-(char)shouldUseDefaultShiftStateFromLayout;
-(id)initialKeyplaneNameWithKBStarName:(id)arg1 ;
-(_UIFeedbackRetargetBehavior *)slideBehaviour;
-(void)setSlideBehaviour:(_UIFeedbackRetargetBehavior *)arg1 ;
-(char)shouldHitTestKey:(id)arg1 ;
-(id)keyViewHitTestForPoint:(CGPoint)arg1 ;
-(id)keyHitTestContainingPoint:(CGPoint)arg1 ;
-(id)keyHitTestWithoutCharging:(CGPoint)arg1 ;
-(id)keyHitTest:(CGPoint)arg1 ;
-(char)shouldPreventInputManagerHitTestingForKey:(id)arg1 ;
-(int)keycodeForKey:(id)arg1 ;
-(char)isLongPressedKey:(id)arg1 ;
-(char)isDeadkeyInput:(id)arg1 ;
-(void)updatePhysicalKeyboardEvent:(id)arg1 withMarkedInput:(id)arg2 ;
-(id)multitapCompleteKeys;
-(void)multitapInterrupted;
-(void)endMultitapForKey:(id)arg1 ;
-(void)multitapExpired;
-(void)handleMultitapTimerFired;
-(id)activeMultitapCompleteKey;
-(id)touchInfoForKey:(id)arg1 ;
-(void)showPopupVariantsForKey:(id)arg1 ;
-(void)showMenu:(id)arg1 forKey:(id)arg2 ;
-(void)playKeyClickSoundForKey:(id)arg1 ;
-(void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(id)_appendingSecondaryStringToVariantsTop:(id)arg1 secondaryString:(id)arg2 withDirection:(id)arg3 ;
-(id)_keyplaneVariantsKeyForString:(id)arg1 ;
-(id)_variantsByAppendingDualStringKey:(id)arg1 toVariants:(id)arg2 ;
-(void)setKeyboardDim:(char)arg1 amount:(float)arg2 withDuration:(float)arg3 ;
-(char)keyHasAccentedVariants:(id)arg1 ;
-(unsigned long long)upActionFlagsForKey:(id)arg1 ;
-(id)handRestRecognizerGetHomeRowHint;
-(id)getSortedKeysForDisplayRowHint:(int)arg1 ;
-(void)setMuteNextKeyClickSound:(char)arg1 ;
-(int)biasForKeyboard:(id)arg1 ;
-(id)keyboardLayoutWithBias:(int)arg1 ;
-(char)edgeSwipeGestureEnabled;
-(int)currentKeyboardBias;
-(void)rebuildKeyplaneTransitionWithTargetBias:(int)arg1 ;
-(void)finishHandBiasTransition;
-(void)flushKeyCache:(id)arg1 ;
-(void)prepareForSplitTransition;
-(void)setPlayKeyClickSoundOn:(int)arg1 ;
-(void)finishSplitTransitionWithCompletion:(/*^block*/id)arg1 ;
-(float)interpretPinchSeparationValues;
-(void)finishSplitWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSplitTransition;
-(void)_autoSplit:(id)arg1 ;
-(double)lastTwoFingerTapTimestamp;
-(id)generateInfoForTouch:(id)arg1 ;
-(void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 executionContextPassingUIKBTree:(id)arg3 ;
-(void)calculateReachabilityScoreWithKey:(id)arg1 keyError:(CGPoint)arg2 ;
-(void)clearInfoForTouch:(id)arg1 ;
-(id)flickPopupStringForKey:(id)arg1 withString:(id)arg2 ;
-(void)handlePopupView:(id)arg1 ;
-(void)touchDownWithKey:(id)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(char)muteNextKeyClickSound;
-(int)playKeyClickSoundOn;
-(char)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)hideMenu:(id)arg1 forKey:(id)arg2 ;
-(void)updateSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 withPoint:(CGPoint)arg3 ;
-(void)playKeyClickSoundOnDownForKey:(id)arg1 ;
-(char)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)arg1 ;
-(void)incrementPunctuationIfNeeded:(id)arg1 ;
-(void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(NSString *)preTouchKeyplaneName;
-(id)keyplaneNameForRevertAfterTouch;
-(void)downActionShiftWithKey:(id)arg1 ;
-(void)refreshDualStringKeys;
-(char)showGestureKeyboardIntroductionIfNeeded;
-(id)synthesizeTouchUpEventForKey:(id)arg1 ;
-(void)completeDeleteActionForTouchDownWithActions:(unsigned long long)arg1 executionContext:(id)arg2 ;
-(id)infoForTouchUUID:(id)arg1 ;
-(id)infoForTouch:(id)arg1 ;
-(void)interpretTouchesForSplit;
-(char)touchPassesDragThreshold:(id)arg1 ;
-(void)updatePanAlternativesForTouchInfo:(id)arg1 ;
-(void)handleFlick:(id)arg1 ;
-(char)shouldRetestTouchDraggedFromKey:(id)arg1 ;
-(void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2 ;
-(void)refreshGhostKeyState;
-(void)resetPanAlternativesForEndedTouch:(id)arg1 ;
-(char)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2 ;
-(id)activeTouchInfoForShift;
-(void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4 ;
-(char)shouldSendTouchUpToInputManager:(id)arg1 ;
-(void)touchMultitapTimer;
-(char)shouldSendStringForFlick:(id)arg1 ;
-(id)flickStringForInputKey:(id)arg1 direction:(int)arg2 ;
-(void)completeSendStringActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(char)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(char)shouldYieldToControlCenterForFlickWithInitialPoint:(CGPoint)arg1 finalPoint:(CGPoint)arg2 ;
-(void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(char)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 ;
-(void)upActionShift;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 withDelay:(float)arg3 ;
-(void)setMultitapReverseKeyState;
-(void)handleKeyboardMenusForTouch:(id)arg1 ;
-(void)clearInfoForTouch:(id)arg1 forResting:(char)arg2 ;
-(void)updateShiftKeyState;
-(void)swipeDetected:(id)arg1 ;
-(void)cancelTouchIfNecessaryForInfo:(id)arg1 forResting:(char)arg2 ;
-(void)divideKeysIntoLeft:(id)arg1 right:(id)arg2 ;
-(CGPoint)applyError:(CGPoint)arg1 toKey:(id)arg2 ;
-(CGImageRef)renderedKeyplaneWithToken:(id)arg1 split:(char)arg2 ;
-(char)shouldShowGestureKeyboardIntroduction;
-(void)handleDelayedCentroidUpdate;
-(void)setKeyboardName:(NSString *)arg1 ;
-(char)shift;
-(char)autoShift;
-(void)setAutoShift:(char)arg1 ;
-(NSString *)localizedInputKey;
-(int)rightSwipeFunction;
-(int)leftSwipeFunction;
-(int)downSwipeFunction;
-(CGRect)frameForKeyWithRepresentedString:(id)arg1 ;
-(CGRect)frameForLastKeyWithRepresentedString:(id)arg1 ;
-(id)popupKeyViews;
-(void)setKeyForTouchInfo:(id)arg1 key:(id)arg2 ;
-(void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(char)arg4 ;
-(void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3 ;
-(void)populateFlickPopupsForKey:(id)arg1 ;
-(void)handlePopupView;
-(void)handleDismissFlickView;
@end

