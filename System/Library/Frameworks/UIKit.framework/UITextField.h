/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/ABText.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/_UILayoutBaselineUpdating.h>
#import <UIKit/_UIFloatingContentViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIKeyInputPrivate.h>
#import <UIKit/UITextInputTraits_Private.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITextInput.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@class _UICascadingTextStorage, UIImage, UIView, UITextInputTraits, _UIFullFontSize, UIButton, UITextFieldBorderView, UITextFieldBackgroundView, _UIFloatingContentView, UIVisualEffectView, _UIDetachedFieldEditorBackgroundView, UITextFieldLabel, UIImageView, UILabel, NSAttributedString, UITextInteractionAssistant, UITapGestureRecognizer, UISystemInputViewController, UITextFieldAtomBackgroundView, CUICatalog, CUIStyleEffectConfiguration, NSLayoutConstraint, _UIBaselineLayoutStrut, UIColor, NSString, NSDictionary, UIFont, NSIndexSet, UIInputContextHistory, UITextRange, UITextPosition;

@interface UITextField : UIControl <ABText, UIKeyboardInput, _UILayoutBaselineUpdating, _UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, UIKeyInputPrivate, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding, UIContentSizeCategoryAdjusting> {

	_UICascadingTextStorage* _textStorage;
	int _borderStyle;
	float _minimumFontSize;
	id _delegate;
	UIImage* _background;
	UIImage* _disabledBackground;
	int _clearButtonMode;
	UIView* _leftView;
	int _leftViewMode;
	UIView* _rightView;
	int _rightViewMode;
	UITextInputTraits* _traits;
	UITextInputTraits* _nonAtomTraits;
	_UIFullFontSize* _fullFontSize;
	UIEdgeInsets _padding;
	NSRange _selectionRangeWhenNotEditing;
	int _scrollXOffset;
	int _scrollYOffset;
	float _progress;
	UIButton* _clearButton;
	CGSize _clearButtonOffset;
	CGSize _leftViewOffset;
	CGSize _rightViewOffset;
	UITextFieldBorderView* _backgroundView;
	UITextFieldBorderView* _disabledBackgroundView;
	UITextFieldBackgroundView* _systemBackgroundView;
	_UIFloatingContentView* _floatingContentView;
	UIVisualEffectView* _contentBackdropView;
	_UIDetachedFieldEditorBackgroundView* _fieldEditorBackgroundView;
	UIVisualEffectView* _fieldEditorEffectView;
	UITextFieldLabel* _displayLabel;
	UITextFieldLabel* _placeholderLabel;
	UITextFieldLabel* _suffixLabel;
	UITextFieldLabel* _prefixLabel;
	UIImageView* _iconView;
	UILabel* _label;
	float _labelOffset;
	NSAttributedString* _overriddenPlaceholder;
	int _overriddenPlaceholderAlignment;
	UITextInteractionAssistant* _interactionAssistant;
	UITapGestureRecognizer* _selectGestureRecognizer;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	UIView* _recentsAccessoryView;
	UISystemInputViewController* _systemInputViewController;
	UITextFieldAtomBackgroundView* _atomBackgroundView;
	struct {
		unsigned verticallyCenterText : 1;
		unsigned isAnimating : 4;
		unsigned inactiveHasDimAppearance : 1;
		unsigned becomesFirstResponderOnClearButtonTap : 1;
		unsigned clearsPlaceholderOnBeginEditing : 1;
		unsigned adjustsFontSizeToFitWidth : 1;
		unsigned fieldEditorAttached : 1;
		unsigned canBecomeFirstResponder : 1;
		unsigned shouldSuppressShouldBeginEditing : 1;
		unsigned inResignFirstResponder : 1;
		unsigned undoDisabled : 1;
		unsigned explicitAlignment : 1;
		unsigned implementsCustomDrawing : 1;
		unsigned needsClearing : 1;
		unsigned suppressContentChangedNotification : 1;
		unsigned allowsEditingTextAttributes : 1;
		unsigned usesAttributedText : 1;
		unsigned backgroundViewState : 2;
		unsigned clearingBehavior : 2;
		unsigned overridePasscodeStyle : 1;
		unsigned shouldResignWithoutUpdate : 1;
		unsigned blurEnabled : 1;
		unsigned disableFocus : 1;
		unsigned disableRemoteTextEditing : 1;
	}  _textFieldFlags;
	char _deferringBecomeFirstResponder;
	char _avoidBecomeFirstResponder;
	char _setSelectionRangeAfterFieldEditorIsAttached;
	char _animateNextHighlightChange;
	CUICatalog* _cuiCatalog;
	CUIStyleEffectConfiguration* _cuiStyleEffectConfiguration;
	float _roundedRectBackgroundCornerRadius;
	char _adjustsFontForContentSizeCategory;
	char _tvUseVibrancy;
	char _disableTextColorUpdateOnTraitCollectionChange;
	NSLayoutConstraint* _baselineLayoutConstraint;
	_UIBaselineLayoutStrut* _baselineLayoutLabel;
	UIColor* _tvCustomTextColor;
	UIColor* _tvCustomFocusedTextColor;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
@property (setter=_setBaselineLayoutConstraint:,nonatomic,retain) NSLayoutConstraint * _baselineLayoutConstraint;              //@synthesize baselineLayoutConstraint=_baselineLayoutConstraint - In the implementation block
@property (setter=_setBaselineLayoutLabel:,nonatomic,retain) _UIBaselineLayoutStrut * _baselineLayoutLabel;                    //@synthesize baselineLayoutLabel=_baselineLayoutLabel - In the implementation block
@property (assign,nonatomic) char _tvUseVibrancy;                                                                              //@synthesize tvUseVibrancy=_tvUseVibrancy - In the implementation block
@property (nonatomic,retain) UIColor * _tvCustomTextColor;                                                                     //@synthesize tvCustomTextColor=_tvCustomTextColor - In the implementation block
@property (nonatomic,retain) UIColor * _tvCustomFocusedTextColor;                                                              //@synthesize tvCustomFocusedTextColor=_tvCustomFocusedTextColor - In the implementation block
@property (assign,nonatomic) char _disableTextColorUpdateOnTraitCollectionChange;                                              //@synthesize disableTextColorUpdateOnTraitCollectionChange=_disableTextColorUpdateOnTraitCollectionChange - In the implementation block
@property (retain) UIView * recentsAccessoryView; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) int borderStyle;                                                                                  //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTextAttributes; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (assign,nonatomic) char clearsOnBeginEditing; 
@property (assign,nonatomic) char adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) float minimumFontSize;                                                                            //@synthesize minimumFontSize=_minimumFontSize - In the implementation block
@property (assign,nonatomic,__weak) id<UITextFieldDelegate> delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * background;                                                                             //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) UIImage * disabledBackground;                                                                     //@synthesize disabledBackground=_disabledBackground - In the implementation block
@property (getter=isEditing,nonatomic,readonly) char editing; 
@property (assign,nonatomic) char allowsEditingTextAttributes; 
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (assign,nonatomic) int clearButtonMode;                                                                              //@synthesize clearButtonMode=_clearButtonMode - In the implementation block
@property (nonatomic,retain) UIView * leftView;                                                                                //@synthesize leftView=_leftView - In the implementation block
@property (assign,nonatomic) int leftViewMode;                                                                                 //@synthesize leftViewMode=_leftViewMode - In the implementation block
@property (nonatomic,retain) UIView * rightView;                                                                               //@synthesize rightView=_rightView - In the implementation block
@property (assign,nonatomic) int rightViewMode;                                                                                //@synthesize rightViewMode=_rightViewMode - In the implementation block
@property (retain) UIView * inputView;                                                                                         //@synthesize inputView=_inputView - In the implementation block
@property (retain) UIView * inputAccessoryView; 
@property (assign,nonatomic) char clearsOnInsertion; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,readonly) char hasText; 
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) char isSingleLineDocument; 
@property (assign,nonatomic) char contentsIsSingleValue; 
@property (assign,nonatomic) char hasDefaultContents; 
@property (assign,nonatomic) char acceptsEmoji; 
@property (assign,nonatomic) char acceptsDictationSearchResults; 
@property (assign,nonatomic) char forceEnableDictation; 
@property (assign,nonatomic) char forceDisableDictation; 
@property (assign,nonatomic) char forceDefaultDictationInfo; 
@property (assign,nonatomic) int forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) char returnKeyGoesToNextResponder; 
@property (assign,nonatomic) char acceptsFloatingKeyboard; 
@property (assign,nonatomic) char acceptsSplitKeyboard; 
@property (assign,nonatomic) char displaySecureTextUsingPlainText; 
@property (assign,nonatomic) char displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) char learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) char suppressReturnKeyStyling; 
@property (assign,nonatomic) char useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) char deferBecomingResponder; 
@property (assign,nonatomic) char enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) char disablePrediction; 
@property (assign,nonatomic) char disableInputBars; 
@property (assign,nonatomic) char isCarPlayIdiom; 
@property (assign,nonatomic) int textScriptType; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) char devicePasscodeEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) int selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@property (assign,nonatomic) char adjustsFontForContentSizeCategory;                                                           //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(char)_isDisplayingShortcutViewController;
+(id)_tvDefaultTextColorDarkKeyboard;
+(id)_tvDefaultTextColorLightKeyboard;
+(char)_isCompatibilityTextField;
+(id)_tvPlaceholderTextColorLightKeyboard;
+(id)_tvPlaceholderTextColorDarkKeyboard;
+(id)_tvPlaceholderTextColorFocused;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)setAb_text:(NSString *)arg1 ;
-(NSDictionary *)ab_textAttributes;
-(NSString *)ab_text;
-(void)_cnui_applyContactStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITextFieldDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UITextFieldDelegate>)delegate;
-(id)_backgroundView;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setSemanticContentAttribute:(int)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)resignFirstResponder;
-(id)undoManager;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(char)isEditable;
-(void)setEnabled:(char)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_windowResignedKey;
-(void)_windowBecameKey;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(char)_canDrawContent;
-(id)_encodableSubviews;
-(void)_encodeBackgroundColorWithCoder:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(char)canBecomeFocused;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(void)tintColorDidChange;
-(void)interactionTintColorDidChange;
-(CGRect)_responderExternalTouchRectForWindow:(id)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(int)arg1 inContext:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_switchToLayoutEngine:(id)arg1 ;
-(id)textInRange:(id)arg1 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 ;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2 ;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2 ;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(char)arg2 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(UITextRange *)selectedTextRange;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id<UITextInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(UIView *)textInputView;
-(id)insertDictationResultPlaceholder;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(char)hasText;
-(void)setKeyboardAppearance:(int)arg1 ;
-(void)setSecureTextEntry:(char)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(CGSize)shadowOffset;
-(void)setHighlighted:(char)arg1 ;
-(id)shadowColor;
-(void)setContentVerticalAlignment:(int)arg1 ;
-(id)_contentBackdropView;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(void)_updateLabel;
-(void)setAdjustsFontSizeToFitWidth:(char)arg1 ;
-(char)adjustsFontSizeToFitWidth;
-(char)isEditing;
-(id)textLabel;
-(unsigned)_controlEventsForActionTriggered;
-(id)_fieldEditor;
-(void)_tvUpdateTextColor;
-(char)_shouldObscureInput;
-(CGPoint)_originForTextFieldLabel:(id)arg1 ;
-(char)_isPasscodeStyle;
-(id)interactionAssistant;
-(id)selectionView;
-(char)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(char)arg3 ;
-(char)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(char)keyboardInputShouldDelete:(id)arg1 ;
-(char)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)fieldEditorDidChange:(id)arg1 ;
-(NSRange)fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3 ;
-(char)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(void)_sanitizeText:(id)arg1 ;
-(void)selectAllFromFieldEditor:(id)arg1 ;
-(id)textInputTraits;
-(CGRect)_selectionClipRect;
-(void)cancelAutoscroll;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(char)_shouldDetermineInterfaceStyleTextColor;
-(id)_tvDefaultTextColor;
-(void)willDetachFieldEditor:(id)arg1 ;
-(char)detachFieldEditor:(id)arg1 ;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(void)takeTraitsFrom:(id)arg1 ;
-(CGRect)editRect;
-(void)willAttachFieldEditor:(id)arg1 ;
-(void)attachFieldEditor:(id)arg1 ;
-(int)textAlignment;
-(id)_cuiStyleEffectConfiguration;
-(void)didAttachFieldEditor:(id)arg1 ;
-(NSDictionary *)typingAttributes;
-(id)_cuiCatalog;
-(void)_scrollRangeToVisible:(NSRange)arg1 animated:(char)arg2 ;
-(char)drawsAsAtom;
-(int)atomStyle;
-(void)clearText;
-(float)_passcodeStyleAlpha;
-(NSRange)insertFilteredText:(id)arg1 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)setDisplaySecureEditsUsingPlainText:(char)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)selectAll;
-(NSRange)selectionRange;
-(unsigned)characterOffsetAtPoint:(CGPoint)arg1 ;
-(char)hasMarkedText;
-(id)_inputController;
-(char)_ownsInputAccessoryView;
-(void)setAnimating:(char)arg1 ;
-(char)_finishResignFirstResponder;
-(void)_becomeFirstResponder;
-(void)_resignFirstResponder;
-(char)canResignFirstResponder;
-(UIView *)inputAccessoryView;
-(UIView *)recentsAccessoryView;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)select:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(char)_restoreFirstResponder;
-(char)_requiresKeyboardResetOnReload;
-(void)_nonDestructivelyResignFirstResponder;
-(UIView *)inputView;
-(id)_effectiveContentView;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)_setHighlighted:(char)arg1 animated:(char)arg2 ;
-(id)_floatingContentView;
-(id)viewForLastBaselineLayout;
-(void)setLabel:(id)arg1 ;
-(void)setAllowsEditingTextAttributes:(char)arg1 ;
-(char)allowsEditingTextAttributes;
-(id)webView;
-(id)_proxyTextInput;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)setClearsOnInsertion:(char)arg1 ;
-(void)layoutTilesNow;
-(void)replace:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(char)hasSelection;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(char)clearsOnInsertion;
-(void)disableClearsOnInsertion;
-(id)selectedText;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(int)arg1 ;
-(id)automaticallySelectedOverlay;
-(void)setInputView:(UIView *)arg1 ;
-(char)_isDisplayingReferenceLibraryViewController;
-(char)_isDisplayingShareViewController;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(char)arg1 ;
-(char)adjustsFontForContentSizeCategory;
-(float)shadowBlur;
-(void)_adjustPreferredFontForCurrentContentSizeCategory;
-(void)_setCuiCatalog:(id)arg1 ;
-(void)_setCuiStyleEffectConfiguration:(id)arg1 ;
-(void)setMinimumFontSize:(float)arg1 ;
-(float)minimumFontSize;
-(void)setShadowBlur:(float)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(CGRect)iconRect;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(id)_placeholderColor;
-(CGRect)_availableTextRectExcludingButtonsForBounds:(CGRect)arg1 ;
-(void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2 ;
-(char)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)_setRightViewOffset:(CGSize)arg1 ;
-(void)setRightViewMode:(int)arg1 ;
-(void)setContinuousSpellCheckingEnabled:(char)arg1 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(void)setDisplaySecureTextUsingPlainText:(char)arg1 ;
-(id)searchText;
-(void)_clearButtonClicked:(id)arg1 ;
-(void)_deleteBackwardAndNotify:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setUndoEnabled:(char)arg1 ;
-(void)setTextCentersVertically:(char)arg1 ;
-(void)setTextCentersHorizontally:(char)arg1 ;
-(char)_blurEnabled;
-(char)_isDisplayingLookupViewController;
-(void)setPlaceholder:(NSString *)arg1 ;
-(UIImage *)background;
-(void)setBackground:(UIImage *)arg1 ;
-(void)_uninstallSelectGestureRecognizer;
-(void)_installSelectGestureRecognizer;
-(void)_selectGestureChanged:(id)arg1 ;
-(void)_setBlurEnabled:(char)arg1 ;
-(NSString *)placeholder;
-(CGSize)_leftViewOffset;
-(void)_setLeftViewOffset:(CGSize)arg1 ;
-(CGSize)clearButtonOffset;
-(void)setClearButtonOffset:(CGSize)arg1 ;
-(float)paddingTop;
-(void)setPaddingTop:(float)arg1 ;
-(void)_setDisableFocus:(char)arg1 ;
-(char)_partsShouldBeMini;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(id)_systemBackgroundView;
-(void)__resumeBecomeFirstResponder;
-(void)_activateSelectionView;
-(id)_placeholderLabel;
-(void)setLeftViewMode:(int)arg1 ;
-(id)_defaultPromptString;
-(id)_uiktest_placeholderLabelColor;
-(void)setDisabledBackground:(UIImage *)arg1 ;
-(void)setClearButtonMode:(int)arg1 ;
-(void)_setEnabled:(char)arg1 animated:(char)arg2 ;
-(void)setPaddingLeft:(float)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(id)_clearButton;
-(void)_updateButtons;
-(id)_clearButtonImageForState:(unsigned)arg1 ;
-(float)paddingLeft;
-(char)_showsClearButtonWhenNonEmpty:(char)arg1 ;
-(char)_fieldEditorAttached;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(CGSize)_clearButtonSize;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(char)arg2 ;
-(char)_hasSuffixField;
-(CGRect)_suffixFrame;
-(char)_showsLeftView;
-(float)paddingRight;
-(void)_updateBackgroundViewsAnimated:(char)arg1 ;
-(void)_clearBackgroundViews;
-(id)_tvDefaultKeyboardTextColor;
-(int)_blurEffectStyleForAppearance;
-(int)_suffixLabelTextAlignment;
-(Class)_placeholderLabelClass;
-(Class)_systemBackgroundViewClass;
-(char)_labelShouldUseVibrancy;
-(int)_blurEffectStyle;
-(char)isAccessibilityElementByDefault;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_tvUpdateAppearanceForUserInterfaceStyle;
-(id)_text;
-(int)clearingBehavior;
-(void)setDrawsAsAtom:(char)arg1 ;
-(void)setClearingBehavior:(int)arg1 ;
-(char)_useGesturesForEditableContent;
-(id)_textInputViewForAddingGestureRecognizers;
-(void)_setSuffix:(id)arg1 withColor:(id)arg2 ;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(unsigned)offsetInMarkedTextForSelection:(id)arg1 ;
-(float)paddingBottom;
-(void)setPaddingBottom:(float)arg1 ;
-(id)_systemInputViewController;
-(void)_forceObscureAllText;
-(void)_setOverridePlaceholder:(id)arg1 alignment:(int)arg2 ;
-(void)setClearsOnBeginEditing:(char)arg1 ;
-(id)_placeholderView;
-(char)_wantsBaselineUpdatingFollowingConstraintsPass;
-(void)_updateBaselineInformationDependentOnBounds;
-(CGSize)_textSize;
-(void)_selectionMayChange:(id)arg1 ;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(char)_inPopover;
-(void)_drawTextInRect:(CGRect)arg1 forLabel:(id)arg2 ;
-(void)setAtomStyle:(int)arg1 ;
-(void)_propagateCuiProperties;
-(void)_setBaselineLayoutConstraint:(id)arg1 ;
-(int)leftViewMode;
-(int)rightViewMode;
-(CGSize)_rightViewOffset;
-(void)_setFullFontSize:(id)arg1 ;
-(id)createTextLabelWithTextColor:(id)arg1 ;
-(CGRect)_frameForLabel:(id)arg1 inTextRect:(CGRect)arg2 ;
-(void)createPlaceholderIfNecessary;
-(void)_updateTextLabel;
-(void)_updateForTintColor;
-(char)clearsOnBeginEditing;
-(void)_stopObservingFieldEditorScroll;
-(void)_setNeedsStyleRecalc;
-(void)_sizeChanged:(char)arg1 ;
-(float)_fullFontSize;
-(CGSize)_textSizeUsingFullFontSize:(char)arg1 ;
-(void)_createBaselineLayoutLabelIfNecessary;
-(int)clearButtonMode;
-(id)clearButton;
-(char)_shouldEndEditing;
-(void)scrollTextFieldToVisible;
-(void)_initialScrollDidFinish:(id)arg1 ;
-(int)_currentTextAlignment;
-(void)setSelectionRange:(NSRange)arg1 ;
-(void)_tvUpdateContentBackdropView;
-(id)customOverlayContainer;
-(void)setFont:(id)arg1 fullFontSize:(id)arg2 ambientOnly:(char)arg3 ;
-(void)_syncTypingAttributesWithDefaultAttribute:(id)arg1 ;
-(float)actualMinimumFontSize;
-(float)_newFontSize:(float)arg1 maxSize:(float)arg2 ;
-(float)_marginTopForBounds:(CGRect)arg1 ;
-(id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3 ;
-(void)_updateAtomTextColor;
-(CGRect)clearButtonRect;
-(char)_showsClearButton:(char)arg1 ;
-(char)_showsRightView;
-(char)_heightShouldBeMini;
-(int)borderStyle;
-(char)_hasContent;
-(char)_showsAtomBackground;
-(CGRect)_atomBackgroundViewFrame;
-(char)_showsClearButtonWhenEmpty;
-(CGRect)_baselineLeftViewRectForBounds:(CGRect)arg1 ;
-(float)_baselineLayoutConstraintConstantForBounds:(CGRect)arg1 ;
-(void)_setUpBaselineLayoutConstraintsForBounds:(CGRect)arg1 ;
-(char)_isShowingPlaceholder;
-(char)clearsPlaceholderOnBeginEditing;
-(CGRect)_prefixFrame;
-(void)_updateForPasscodeAppearance;
-(void)_updatePlaceholderPosition;
-(void)_updateAtomBackground;
-(void)_updateAutosizeStyleIfNeeded;
-(void)_layoutLabels;
-(void)_layoutContent;
-(CGRect)borderRectForBounds:(CGRect)arg1 ;
-(void)_applyRoundedRectBackgroundCornerRadiusToBackgroundViewWithWarning:(char)arg1 ;
-(id)_secureString:(id)arg1 ;
-(id)_attributedText;
-(void)_invalidateDefaultFullFontSize;
-(char)_textNeedsSanitizing:(id)arg1 ;
-(void)finishedSettingTextOrAttributedText;
-(void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(char)arg2 ;
-(void)_updateLabelAppearance;
-(void)setFont:(id)arg1 fullFontSize:(id)arg2 ;
-(void)_invalidateBaselineLayoutConstraints;
-(void)_disableClipToBoundsForBorderStyleNone;
-(id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(int)arg2 ;
-(void)_setPlaceholder:(id)arg1 ;
-(void)finishedSettingPlaceholder;
-(void)_setAttributedPlaceholder:(id)arg1 ;
-(void)_setActualRightView:(id)arg1 ;
-(void)_setActualLeftView:(id)arg1 ;
-(void)_setActualRightViewMode:(int)arg1 ;
-(void)_setActualLeftViewMode:(int)arg1 ;
-(float)_marginTop;
-(void)drawPlaceholderInRect:(CGRect)arg1 ;
-(void)drawSuffixInRect:(CGRect)arg1 ;
-(void)drawPrefixInRect:(CGRect)arg1 ;
-(void)_applicationResuming:(id)arg1 ;
-(void)_updateFieldEditorBackgroundViewLayout:(char)arg1 ;
-(void)_endedEditing;
-(void)drawBorder:(CGRect)arg1 ;
-(char)_implementsCustomDrawing;
-(char)isUndoEnabled;
-(CGRect)adjustedCaretRectForCaretRect:(CGRect)arg1 ;
-(id)_tvDefaultInterfaceTextColor;
-(id)_tvDefaultFocusedTextColor;
-(void)_createInteractionAssistant;
-(char)_isShowingPrefix;
-(id)actualFont;
-(CGPoint)_scrollOffset;
-(void)_setSystemBackgroundViewActive:(char)arg1 ;
-(id)_textLabelView;
-(void)setDefaultTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultTextAttributes;
-(void)_updateSuffix:(id)arg1 ;
-(void)_setPrefix:(id)arg1 ;
-(void)setClearsPlaceholderOnBeginEditing:(char)arg1 ;
-(void)setRecentsAccessoryView:(UIView *)arg1 ;
-(void)fieldEditorDidChangeSelection:(id)arg1 ;
-(id)_dictationInterpretations;
-(void)setAutoresizesTextToFit:(char)arg1 ;
-(void)setTextAutorresizesToFit:(char)arg1 ;
-(void)setClearButtonStyle:(int)arg1 ;
-(CGRect)textRect;
-(void)setInactiveHasDimAppearance:(char)arg1 ;
-(void)_clearSelectionUI;
-(void)_resetSelectionUI;
-(id)_tvTypingAttributes;
-(void)setBecomesFirstResponderOnClearButtonTap:(char)arg1 ;
-(void)setLabelOffset:(float)arg1 ;
-(id)_displayLabel;
-(id)_textStorageTextColor;
-(char)_uiktest_shouldDisableTextColorUpdateOnTraitCollectionChange;
-(char)_uiktest_tvUseVibrancy;
-(id)_uiktest_tvCustomTextColor;
-(id)selectedAttributedText;
-(void)_setBackgroundStrokeColor:(id)arg1 ;
-(void)_setBackgroundFillColor:(id)arg1 ;
-(void)_setBackgroundStrokeWidth:(float)arg1 ;
-(void)_setRoundedRectBackgroundCornerRadius:(float)arg1 ;
-(float)_roundedRectBackgroundCornerRadius;
-(NSLayoutConstraint *)_baselineLayoutConstraint;
-(_UIBaselineLayoutStrut *)_baselineLayoutLabel;
-(void)_setBaselineLayoutLabel:(id)arg1 ;
-(char)_tvUseVibrancy;
-(void)set_tvUseVibrancy:(char)arg1 ;
-(UIColor *)_tvCustomTextColor;
-(void)set_tvCustomTextColor:(UIColor *)arg1 ;
-(UIColor *)_tvCustomFocusedTextColor;
-(void)set_tvCustomFocusedTextColor:(UIColor *)arg1 ;
-(char)_disableTextColorUpdateOnTraitCollectionChange;
-(void)set_disableTextColorUpdateOnTraitCollectionChange:(char)arg1 ;
-(UIImage *)disabledBackground;
-(void)_setOverridePasscodeStyle:(char)arg1 ;
-(char)_overridePasscodeStyle;
-(void)_setPasscodeStyleAlpha:(float)arg1 ;
@end
