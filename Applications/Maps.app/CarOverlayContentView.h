/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface CarOverlayContentView : UICollectionViewCell {

	UIView* _content;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) UIView * content;                     //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(CGRect)_contentFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(UIView *)content;
-(UIEdgeInsets)edgeInsets;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setContent:(UIView *)arg1 ;
@end

