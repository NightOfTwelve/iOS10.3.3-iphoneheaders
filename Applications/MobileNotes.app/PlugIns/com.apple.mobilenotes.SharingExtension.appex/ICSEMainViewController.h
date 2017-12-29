/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.SharingExtension/com.apple.mobilenotes.SharingExtension-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class ICSERootViewController, UIScrollView, UITextView, UIImageView, ICNote, UIView, ICSEBottomView, NSLayoutConstraint, ICAttachmentBrickView, ICSEImagesView, UIBarButtonItem, NSArray, NotesBackgroundView, NSString;

@interface ICSEMainViewController : UIViewController <UITextViewDelegate> {

	char _showingPlaceholderText;
	ICSERootViewController* _rootViewController;
	UIScrollView* _scrollView;
	UITextView* _additionalText;
	UIImageView* _chevronView;
	ICNote* _targetNote;
	UIView* _rootContainer;
	UIView* _brickContainer;
	UIView* _imageContainer;
	ICSEBottomView* _bottomView;
	NSLayoutConstraint* _bottomViewHeightConstraint;
	NSLayoutConstraint* _bottomViewLeadingConstraint;
	NSLayoutConstraint* _bottomViewTrailingConstraint;
	NSLayoutConstraint* _bottomViewBottomConstraint;
	NSLayoutConstraint* _bottomSeparatorHeightConstraint;
	ICAttachmentBrickView* _brickView;
	ICSEImagesView* _imagesView;
	UIBarButtonItem* _leadingNavigationBarSpacer;
	UIBarButtonItem* _trailingNavigationBarSpacer;
	NSLayoutConstraint* _rootContainerHeightConstraint;
	NSArray* _brickContainerConstraints;
	NSArray* _imageContainerConstraints;
	UIBarButtonItem* _saveToNoteBarButtonItem;
	NSArray* _attachments;

}

@property (nonatomic,readonly) NotesBackgroundView * backgroundView; 
@property (assign,nonatomic,__weak) UIView * rootContainer;                                            //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,retain) UIView * brickContainer;                                                  //@synthesize brickContainer=_brickContainer - In the implementation block
@property (nonatomic,retain) UIView * imageContainer;                                                  //@synthesize imageContainer=_imageContainer - In the implementation block
@property (assign,nonatomic,__weak) ICSEBottomView * bottomView;                                       //@synthesize bottomView=_bottomView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomViewHeightConstraint;                   //@synthesize bottomViewHeightConstraint=_bottomViewHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomViewLeadingConstraint;                  //@synthesize bottomViewLeadingConstraint=_bottomViewLeadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomViewTrailingConstraint;                 //@synthesize bottomViewTrailingConstraint=_bottomViewTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomViewBottomConstraint;                   //@synthesize bottomViewBottomConstraint=_bottomViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomSeparatorHeightConstraint;              //@synthesize bottomSeparatorHeightConstraint=_bottomSeparatorHeightConstraint - In the implementation block
@property (nonatomic,retain) ICAttachmentBrickView * brickView;                                        //@synthesize brickView=_brickView - In the implementation block
@property (nonatomic,retain) ICSEImagesView * imagesView;                                              //@synthesize imagesView=_imagesView - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * leadingNavigationBarSpacer;                      //@synthesize leadingNavigationBarSpacer=_leadingNavigationBarSpacer - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * trailingNavigationBarSpacer;                     //@synthesize trailingNavigationBarSpacer=_trailingNavigationBarSpacer - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * rootContainerHeightConstraint;                //@synthesize rootContainerHeightConstraint=_rootContainerHeightConstraint - In the implementation block
@property (nonatomic,copy) NSArray * brickContainerConstraints;                                        //@synthesize brickContainerConstraints=_brickContainerConstraints - In the implementation block
@property (nonatomic,copy) NSArray * imageContainerConstraints;                                        //@synthesize imageContainerConstraints=_imageContainerConstraints - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveToNoteBarButtonItem;                                //@synthesize saveToNoteBarButtonItem=_saveToNoteBarButtonItem - In the implementation block
@property (assign,getter=isShowingPlaceholderText,nonatomic) char showingPlaceholderText;              //@synthesize showingPlaceholderText=_showingPlaceholderText - In the implementation block
@property (retain) NSArray * attachments;                                                              //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic,__weak) ICSERootViewController * rootViewController;                       //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UITextView * additionalText;                                       //@synthesize additionalText=_additionalText - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * chevronView;                                         //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) ICNote * targetNote;                                                      //@synthesize targetNote=_targetNote - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)imageContainer;
-(void)setImageContainer:(UIView *)arg1 ;
-(ICAttachmentBrickView *)brickView;
-(void)setBrickView:(ICAttachmentBrickView *)arg1 ;
-(UITextView *)additionalText;
-(void)extensionHostDidBecomeActive:(id)arg1 ;
-(ICNote *)targetNote;
-(void)setTargetNote:(ICNote *)arg1 ;
-(NSLayoutConstraint *)rootContainerHeightConstraint;
-(float)navigationBarHorizontalEdgeSpacing;
-(void)setLeadingNavigationBarSpacer:(UIBarButtonItem *)arg1 ;
-(void)saveToNote:(id)arg1 ;
-(void)setSaveToNoteBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)saveToNoteBarButtonItem;
-(void)setTrailingNavigationBarSpacer:(UIBarButtonItem *)arg1 ;
-(NSLayoutConstraint *)bottomViewHeightConstraint;
-(float)bottomViewHeight;
-(NSLayoutConstraint *)bottomViewLeadingConstraint;
-(float)bottomViewLeadingEdgeSpacing;
-(NSLayoutConstraint *)bottomViewTrailingConstraint;
-(float)bottomViewTrailingEdgeSpacing;
-(UIView *)brickContainer;
-(id)constraintsForView:(id)arg1 ;
-(void)setBrickContainerConstraints:(NSArray *)arg1 ;
-(void)setImageContainerConstraints:(NSArray *)arg1 ;
-(void)showPlaceholderText:(char)arg1 ;
-(void)attachmentsAvailable;
-(void)pickDestination:(id)arg1 ;
-(NSLayoutConstraint *)bottomSeparatorHeightConstraint;
-(char)isShowingPlaceholderText;
-(id)additionalString;
-(UIBarButtonItem *)leadingNavigationBarSpacer;
-(UIBarButtonItem *)trailingNavigationBarSpacer;
-(NSLayoutConstraint *)bottomViewBottomConstraint;
-(float)bottomViewBottomEdgeSpacing;
-(void)scrollTextToVisible;
-(void)setShowingPlaceholderText:(char)arg1 ;
-(void)installBrickForAttachment:(id)arg1 ;
-(void)showBrick:(char)arg1 ;
-(void)showImage:(char)arg1 ;
-(void)installImagesViewForAttachments:(id)arg1 ;
-(void)installBrickForFileURL:(id)arg1 title:(id)arg2 ;
-(void)installBrickForSection:(short)arg1 ;
-(void)setImagesView:(ICSEImagesView *)arg1 ;
-(ICSEImagesView *)imagesView;
-(id)imageFromAttachmentInfo:(id)arg1 ;
-(NSArray *)brickContainerConstraints;
-(NSArray *)imageContainerConstraints;
-(void)setAdditionalText:(UITextView *)arg1 ;
-(void)setBrickContainer:(UIView *)arg1 ;
-(void)setBottomViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomSeparatorHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRootContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(ICSERootViewController *)rootViewController;
-(void)setRootViewController:(ICSERootViewController *)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(NotesBackgroundView *)backgroundView;
-(void)viewDidLoad;
-(void)setRootContainer:(UIView *)arg1 ;
-(UIView *)rootContainer;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(ICSEBottomView *)bottomView;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setBottomView:(ICSEBottomView *)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
@end
