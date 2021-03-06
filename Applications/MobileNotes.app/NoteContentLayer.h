/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>
#import <MobileNotes/NoteTextViewActionDelegate.h>
#import <MobileNotes/NoteTextViewLayoutDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol NoteContentLayerDelegate;
@class NSLayoutConstraint, NotesScrollView, NoteTextView, UIView, NoteDateLabel, NSString, UIScrollView, _UICompatibilityTextView, DOMHTMLDocument, NSArray;

@interface NoteContentLayer : UIView <NoteTextViewActionDelegate, NoteTextViewLayoutDelegate, UITextViewDelegate> {

	char _containsCJK;
	char _tracksMaximumContentLength;
	char _updatedTitleRange;
	id<NoteContentLayerDelegate> _delegate;
	NSLayoutConstraint* _bottomMarginConstraint;
	NSLayoutConstraint* _dateTopMarginConstraint;
	NSLayoutConstraint* _dateHorizontalContraint;
	NSLayoutConstraint* _textTopMarginConstraint;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _rightConstraint;
	NotesScrollView* _scrollView;
	NoteTextView* _textView;
	UIView* _horizontalLayoutGuide;
	NoteDateLabel* _dateLabel;

}

@property (nonatomic,retain) NSLayoutConstraint * bottomMarginConstraint;                            //@synthesize bottomMarginConstraint=_bottomMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dateTopMarginConstraint;                           //@synthesize dateTopMarginConstraint=_dateTopMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dateHorizontalContraint;                           //@synthesize dateHorizontalContraint=_dateHorizontalContraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textTopMarginConstraint;                           //@synthesize textTopMarginConstraint=_textTopMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftConstraint;                                    //@synthesize leftConstraint=_leftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightConstraint;                                   //@synthesize rightConstraint=_rightConstraint - In the implementation block
@property (nonatomic,retain) NotesScrollView * scrollView;                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NoteTextView * textView;                                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * horizontalLayoutGuide;                                         //@synthesize horizontalLayoutGuide=_horizontalLayoutGuide - In the implementation block
@property (nonatomic,retain) NoteDateLabel * dateLabel;                                              //@synthesize dateLabel=_dateLabel - In the implementation block
@property (assign,nonatomic) char updatedTitleRange;                                                 //@synthesize updatedTitleRange=_updatedTitleRange - In the implementation block
@property (nonatomic,readonly) char hasFullWidth; 
@property (nonatomic,readonly) char hasFullHeight; 
@property (assign,nonatomic,__weak) id<NoteContentLayerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char containsCJK;                                                       //@synthesize containsCJK=_containsCJK - In the implementation block
@property (assign,getter=isEditable,nonatomic) char editable; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) char contentContainsValuableContent; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,readonly) UIScrollView * contentScrollView; 
@property (nonatomic,readonly) _UICompatibilityTextView * contentTextView; 
@property (assign,nonatomic,__weak) id<NotesTextureScrolling> textureScrollingDelegate; 
@property (nonatomic,readonly) DOMHTMLDocument * htmlDocument; 
@property (nonatomic,readonly) NSArray * subWebResources; 
@property (assign,nonatomic) char tracksMaximumContentLength;                                        //@synthesize tracksMaximumContentLength=_tracksMaximumContentLength - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UICompatibilityTextView *)contentTextView;
-(void)updateDateLabel;
-(id<NotesTextureScrolling>)textureScrollingDelegate;
-(void)setTextureScrollingDelegate:(id<NotesTextureScrolling>)arg1 ;
-(id)contentAsPasteboardItems;
-(void)setTracksMaximumContentLength:(char)arg1 ;
-(id)contentAsPlainText:(char)arg1 ;
-(char)contentContainsValuableContent;
-(DOMHTMLDocument *)htmlDocument;
-(NSArray *)subWebResources;
-(char)tracksMaximumContentLength;
-(void)addSubWebResourcesObject:(id)arg1 ;
-(char)containsCJK;
-(void)setContent:(id)arg1 isPlainText:(char)arg2 isCJK:(char)arg3 ;
-(void)reloadInterface;
-(CGRect)rectForDOMNode:(id)arg1 ;
-(char)canInsertImagesInTextView:(id)arg1 ;
-(void)insertImageInTextView:(id)arg1 ;
-(void)noteTextView:(id)arg1 didChangeContentSize:(CGSize)arg2 ;
-(char)isNoteTextViewVisible:(id)arg1 ;
-(char)noteTextView:(id)arg1 acceptContentsFromPasteboard:(id)arg2 ;
-(char)allowsAttachmentsInTextView:(id)arg1 ;
-(void)noteTextView:(id)arg1 handleLongPressOnElement:(id)arg2 atPoint:(CGPoint)arg3 ;
-(char)noteTextView:(id)arg1 canHandleLongPressOnElement:(id)arg2 ;
-(void)updateHorizontalConstraints;
-(void)setTextTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textTopMarginConstraint;
-(void)setDateTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)dateTopMarginConstraint;
-(void)setNotesWebPreferencesOnWebView:(id)arg1 ;
-(void)webViewDidChangeNotification:(id)arg1 ;
-(NSLayoutConstraint *)dateHorizontalContraint;
-(void)setDateHorizontalContraint:(NSLayoutConstraint *)arg1 ;
-(char)hasFullHeight;
-(void)setupDateHorizontalConstraint;
-(void)forcedSetContainsCJK:(char)arg1 ;
-(char)hasFullWidth;
-(void)didChangeFullSizeClass;
-(void)invalidateSizeRelatedConstraints;
-(char)updatedTitleRange;
-(void)setUpdatedTitleRange:(char)arg1 ;
-(UIView *)horizontalLayoutGuide;
-(void)setHorizontalLayoutGuide:(UIView *)arg1 ;
-(void)replaceSelectionWithNode:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<NoteContentLayerDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<NoteContentLayerDelegate>)delegate;
-(CGPoint)contentOffset;
-(NSString *)title;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(id)keyCommands;
-(char)isEditable;
-(NotesScrollView *)scrollView;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)updateConstraints;
-(void)setScrollView:(NotesScrollView *)arg1 ;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(void)flashScrollIndicators;
-(void)setTextView:(NoteTextView *)arg1 ;
-(void)scrollSelectionToVisible:(char)arg1 ;
-(UIScrollView *)contentScrollView;
-(char)canResignFirstResponder;
-(void)setEditable:(char)arg1 ;
-(id)selectedDOMRange;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setSelectionToStart;
-(id)webArchive;
-(NoteTextView *)textView;
-(id)viewPrintFormatter;
-(void)setBottomMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(NoteDateLabel *)dateLabel;
-(void)setContainsCJK:(char)arg1 ;
-(CGRect)rectForSelection;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)setTimestampDate:(id)arg1 ;
-(void)setDateLabel:(NoteDateLabel *)arg1 ;
-(void)updateMarginConstraints;
-(void)setLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftConstraint;
-(NSLayoutConstraint *)rightConstraint;
@end

