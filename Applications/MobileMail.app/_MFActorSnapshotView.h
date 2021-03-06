/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface _MFActorSnapshotView : UIView {

	UIImageView* _imageView;
	UIEdgeInsets _snapshotInsets;

}

@property (nonatomic,retain) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets snapshotInsets;              //@synthesize snapshotInsets=_snapshotInsets - In the implementation block
-(UIEdgeInsets)snapshotInsets;
-(void)setSnapshotInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

