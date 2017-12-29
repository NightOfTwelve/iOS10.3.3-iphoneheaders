/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCollectionViewCell.h>
#import <SpringBoard/SBUIBannerView.h>

@protocol SBStarkSessionConfiguring;
@class SBBannerContextView, UIImageView, NSString;

@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView> {

	SBBannerContextView* _contextView;
	id<SBStarkSessionConfiguring> _starkSessionConfiguration;
	UIImageView* _dropShadowImageView;

}

@property (nonatomic,retain) id<SBStarkSessionConfiguring> starkSessionConfiguration;              //@synthesize starkSessionConfiguration=_starkSessionConfiguration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bannerContext;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(char)shouldBorrowScreen;
-(void)setStarkSessionConfiguration:(id<SBStarkSessionConfiguring>)arg1 ;
-(void)setBannerContext:(id)arg1 ;
-(void)noteDidDismiss;
-(id<SBStarkSessionConfiguring>)starkSessionConfiguration;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)canBecomeFirstResponder;
-(void)prepareForReuse;
-(char)_disableRasterizeInAnimations;
@end
