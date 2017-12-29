/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <Tips/TPSBaseTipCollectionViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <Tips/TPSHtmlParserDelegate.h>

@protocol TPSTipCollectionViewCellDelegate;
@class APDKVOManager, TPSTipCellAppearance, NSString, UILabel, UIScrollView, AVAssetImageGenerator, AVPlayerLayer, NSLayoutConstraint, TPSURLSession, UIView, NSBlockOperation, TPSTipContentTextView, TPSTipContentLabel, AVPlayer;

@interface TPSTipCollectionViewCell : TPSBaseTipCollectionViewCell <UITextViewDelegate, TPSHtmlParserDelegate> {

	CGSize _cacheCellSize;
	APDKVOManager* _kvoManager;
	TPSTipCellAppearance* _tipCellAppearance;
	char _readyToDisplayAVPlayer;
	char _avPlayerPlaybackFinished;
	char _registeredForAVPlayerNotification;
	float _scaledBottomPadding;
	float _titleTextLabelFirstBaseline;
	float _contentBodyTextFirstBaseline;
	NSString* _movieFilePath;
	UILabel* _titleTextLabel;
	UILabel* _rateTipLabel;
	UIScrollView* _contentScrollView;
	AVAssetImageGenerator* _avplayerLastFrameGenerator;
	AVPlayerLayer* _avplayerLayer;
	NSLayoutConstraint* _contentScrollViewWidthConstraint;
	NSLayoutConstraint* _contentScrollViewLeadingConstraint;
	NSLayoutConstraint* _contentScrollViewTopConstraint;
	NSLayoutConstraint* _relatedAppAssetViewTopConstraint;
	NSLayoutConstraint* _relatedAppAssetViewWidthConstraint;
	NSLayoutConstraint* _relatedAppAssetViewLeadingConstraint;
	NSLayoutConstraint* _titleTextLabelFirstBaselineConstraint;
	NSLayoutConstraint* _titleTextLabelLeadingConstraint;
	NSLayoutConstraint* _titleTextLabelTrailingConstraint;
	NSLayoutConstraint* _titleTextLabelWidthConstraint;
	NSLayoutConstraint* _contentTextViewFirstBaselineConstraint;
	NSLayoutConstraint* _contentTextViewLeadingConstraint;
	NSLayoutConstraint* _contentTextViewTrailingConstraint;
	NSLayoutConstraint* _contentTextViewWidthConstraint;
	NSLayoutConstraint* _contentTextViewLastBaselineConstraint;
	NSLayoutConstraint* _contentLabelFirstBaselineConstraint;
	NSLayoutConstraint* _contentLabelLeadingConstraint;
	NSLayoutConstraint* _contentLabelTrailingConstraint;
	NSLayoutConstraint* _contentLabelLastBaselineConstraint;
	NSLayoutConstraint* _contentLabelWidthConstraint;
	NSLayoutConstraint* _imageAssetViewHeightConstraint;
	NSLayoutConstraint* _imageAssetViewWidthConstraint;
	TPSURLSession* _videoUrlSession;
	char _moviePlaybackFinished;
	char _hasNotifyDelegateContentLoaded;
	char _contentLoaded;
	char _RTL;
	id<TPSTipCollectionViewCellDelegate> _delegate;
	UIView* _cellSeparator;
	NSBlockOperation* _contentTextOperation;
	NSString* _contentTextOperationID;
	TPSTipContentTextView* _contentTextView;
	TPSTipContentLabel* _contentLabel;
	AVPlayer* _avplayer;

}

@property (nonatomic,retain) NSBlockOperation * contentTextOperation;                           //@synthesize contentTextOperation=_contentTextOperation - In the implementation block
@property (nonatomic,retain) NSString * contentTextOperationID;                                 //@synthesize contentTextOperationID=_contentTextOperationID - In the implementation block
@property (nonatomic,retain) TPSTipContentTextView * contentTextView;                           //@synthesize contentTextView=_contentTextView - In the implementation block
@property (nonatomic,retain) TPSTipContentLabel * contentLabel;                                 //@synthesize contentLabel=_contentLabel - In the implementation block
@property (nonatomic,retain) AVPlayer * avplayer;                                               //@synthesize avplayer=_avplayer - In the implementation block
@property (assign,nonatomic,__weak) id<TPSTipCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char moviePlaybackFinished;                                        //@synthesize moviePlaybackFinished=_moviePlaybackFinished - In the implementation block
@property (assign,nonatomic) char hasNotifyDelegateContentLoaded;                               //@synthesize hasNotifyDelegateContentLoaded=_hasNotifyDelegateContentLoaded - In the implementation block
@property (assign,nonatomic) char contentLoaded;                                                //@synthesize contentLoaded=_contentLoaded - In the implementation block
@property (assign,getter=isRTL,nonatomic) char RTL;                                             //@synthesize RTL=_RTL - In the implementation block
@property (nonatomic,retain) UIView * cellSeparator;                                            //@synthesize cellSeparator=_cellSeparator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributedStringOperationQueue;
+(id)videoPlayButtonShownTips;
-(TPSTipContentTextView *)contentTextView;
-(void)moveHeroVideoToFirstFrame;
-(void)removeHeroMovieIfPlaying;
-(void)playHeroMovie;
-(void)updateContentLabel;
-(char)contentLoaded;
-(void)loadContentIfNeeded;
-(void)continuePlayHeroMovie;
-(void)removeHeroMovie;
-(void)setContentLoaded:(char)arg1 ;
-(void)setHasNotifyDelegateContentLoaded:(char)arg1 ;
-(char)setTip:(id)arg1 withCellAppearance:(id)arg2 ;
-(UIView *)cellSeparator;
-(void)movieCleanup;
-(void)setCellAppearance:(id)arg1 ;
-(void)setImage:(id)arg1 forView:(id)arg2 ;
-(id)imagePathForView:(id)arg1 ;
-(void)cancelVideoDownloadTask;
-(void)updateContentViewContraints;
-(void)updateContentScrollViewConstraints;
-(void)replayHeroVideo;
-(void)setCurrentTipContentNeedsTextView:(char)arg1 ;
-(char)hasNotifyDelegateContentLoaded;
-(void)updateContentLoaded;
-(void)updatePreferredMaxLayoutWidth;
-(char)isOneLinerForText:(id)arg1 maxWidth:(float)arg2 font:(id)arg3 ;
-(void)updateAttributedStringWithCache;
-(id)contentTextViewAttributes;
-(void)setContentTextOperation:(NSBlockOperation *)arg1 ;
-(void)setContentTextOperationID:(NSString *)arg1 ;
-(void)playHeroMovieDelay;
-(AVPlayer *)avplayer;
-(void)avplayerDidFinishPlaying:(id)arg1 ;
-(void)avplayerItemErrorChanged;
-(void)restartMovieDelay;
-(void)removeHeroMovieUpdatePlaybackFinished:(char)arg1 ;
-(void)removeAVPlayerNotifications;
-(char)updateImageToVideoLastFrame;
-(id)htmlParserBoldFont:(id)arg1 ;
-(id)htmlParserItalicFont:(id)arg1 ;
-(id)imageForPath:(id)arg1 ;
-(void)parsedImage:(id)arg1 forPath:(id)arg2 cost:(unsigned)arg3 ;
-(char)moviePlaybackFinished;
-(void)setMoviePlaybackFinished:(char)arg1 ;
-(void)setCellSeparator:(UIView *)arg1 ;
-(NSBlockOperation *)contentTextOperation;
-(NSString *)contentTextOperationID;
-(void)setContentTextView:(TPSTipContentTextView *)arg1 ;
-(void)setAvplayer:(AVPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TPSTipCollectionViewCellDelegate>)arg1 ;
-(void)dealloc;
-(id<TPSTipCollectionViewCellDelegate>)delegate;
-(void)updateConstraints;
-(void)prepareForReuse;
-(char)_textView:(id)arg1 shouldHighlightForInteractionInRange:(NSRange)arg2 ;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(int)arg4 ;
-(char)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 interaction:(int)arg4 ;
-(void)updateFonts;
-(void)setContentLabel:(TPSTipContentLabel *)arg1 ;
-(void)updateTitleLabel;
-(TPSTipContentLabel *)contentLabel;
-(char)isRTL;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setRTL:(char)arg1 ;
@end
