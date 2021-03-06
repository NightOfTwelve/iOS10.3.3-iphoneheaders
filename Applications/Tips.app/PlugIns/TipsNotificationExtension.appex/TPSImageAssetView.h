/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsNotificationExtension.appex/TipsNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsNotificationExtension/TipsNotificationExtension-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage, UIColor;

@interface TPSImageAssetView : UIView {

	UIImageView* _imageView;
	UIImageView* _borderImageView;
	UIImage* _borderImage;
	UIColor* _defaultBackgroundColor;
	UIColor* _noImageBackgroundColor;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * borderImageView;                 //@synthesize borderImageView=_borderImageView - In the implementation block
@property (nonatomic,retain) UIImage * borderImage;                         //@synthesize borderImage=_borderImage - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;              //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * noImageBackgroundColor;              //@synthesize noImageBackgroundColor=_noImageBackgroundColor - In the implementation block
-(id)initWithBorderImage:(id)arg1 ;
-(void)setNoImageBackgroundColor:(UIColor *)arg1 ;
-(UIImageView *)borderImageView;
-(void)setBorderImageView:(UIImageView *)arg1 ;
-(UIColor *)noImageBackgroundColor;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)image;
-(UIImageView *)imageView;
-(void)commonInit;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setBorderImage:(UIImage *)arg1 ;
-(UIImage *)borderImage;
-(UIColor *)defaultBackgroundColor;
-(void)updateBackgroundColor;
@end

