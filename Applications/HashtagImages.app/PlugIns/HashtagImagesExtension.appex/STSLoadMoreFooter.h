/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HashtagImages.app/PlugIns/HashtagImagesExtension.appex/HashtagImagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HashtagImagesExtension/HashtagImagesExtension-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol STSLoadMoreFooterDelegate;
@class UIActivityIndicatorView, UIImageView, UIImage;

@interface STSLoadMoreFooter : UICollectionReusableView {

	UIActivityIndicatorView* _activityIndicator;
	UIImageView* _providerIconView;
	char _loading;
	id<STSLoadMoreFooterDelegate> _delegate;
	UIImage* _searchProviderImage;

}

@property (assign,nonatomic,__weak) id<STSLoadMoreFooterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIImage * searchProviderImage;                              //@synthesize searchProviderImage=_searchProviderImage - In the implementation block
+(float)defaultHeight;
-(void)_handleLogoTap:(id)arg1 ;
-(void)setSearchProviderImage:(UIImage *)arg1 ;
-(UIImage *)searchProviderImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<STSLoadMoreFooterDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<STSLoadMoreFooterDelegate>)delegate;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

