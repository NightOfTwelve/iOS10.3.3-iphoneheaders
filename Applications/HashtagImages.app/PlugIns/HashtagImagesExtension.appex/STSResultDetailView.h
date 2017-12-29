/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HashtagImages.app/PlugIns/HashtagImagesExtension.appex/HashtagImagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HashtagImagesExtension/HashtagImagesExtension-Structs.h>
#import <UIKit/UIView.h>

@protocol STSResultDetailViewDelegate;
@class UIVisualEffectView, UIImageView, STSResultDetailFooter, UIView, UIImage, STSAnimatedImageInfo, NSString;

@interface STSResultDetailView : UIView {

	UIVisualEffectView* _backgroundView;
	UIImageView* _thumbnailView;
	STSResultDetailFooter* _footer;
	char _isFullscreen;
	char _useBackgroundBlur;
	id<STSResultDetailViewDelegate> _delegate;
	UIView* _customContentView;
	UIImage* _thumbnail;
	STSAnimatedImageInfo* _thumbnailInfo;
	CGSize _contentSize;

}

@property (assign,nonatomic,__weak) id<STSResultDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                           //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) UIView * customContentView;                                   //@synthesize customContentView=_customContentView - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnail;                                        //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) STSAnimatedImageInfo * thumbnailInfo;                       //@synthesize thumbnailInfo=_thumbnailInfo - In the implementation block
@property (assign,nonatomic) CGSize providerIconSize; 
@property (nonatomic,retain) UIImage * providerIcon; 
@property (nonatomic,copy) NSString * providerName; 
@property (assign,nonatomic) char isFullscreen;                                            //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) char useBackgroundBlur;                                       //@synthesize useBackgroundBlur=_useBackgroundBlur - In the implementation block
-(UIImage *)providerIcon;
-(void)setProviderIcon:(UIImage *)arg1 ;
-(void)_didTapProvider:(id)arg1 ;
-(void)_didTapSend:(id)arg1 ;
-(void)_calculateFramesForBounds:(CGRect)arg1 traitCollection:(id)arg2 andSetFrames:(char)arg3 contentFrame:(CGRect*)arg4 ;
-(CGSize)providerIconSize;
-(void)setProviderIconSize:(CGSize)arg1 ;
-(void)updateWithThumbnail:(id)arg1 orThumbnailInfo:(id)arg2 ;
-(CGRect)contentFrameForBounds:(CGRect)arg1 traitCollection:(id)arg2 ;
-(void)setUseBackgroundBlur:(char)arg1 ;
-(STSAnimatedImageInfo *)thumbnailInfo;
-(char)useBackgroundBlur;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)contentSize;
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setDelegate:(id<STSResultDetailViewDelegate>)arg1 ;
-(id<STSResultDetailViewDelegate>)delegate;
-(UIEdgeInsets)layoutMargins;
-(UIImage *)thumbnail;
-(UIView *)customContentView;
-(char)isFullscreen;
-(void)setIsFullscreen:(char)arg1 ;
-(NSString *)providerName;
-(void)setCustomContentView:(UIView *)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
@end
