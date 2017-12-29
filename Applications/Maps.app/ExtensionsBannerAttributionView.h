/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/MKViewWithHairline.h>

@class UILabel;

@interface ExtensionsBannerAttributionView : MKViewWithHairline {

	UILabel* _attributionLabel;

}

@property (nonatomic,retain) UILabel * attributionLabel;              //@synthesize attributionLabel=_attributionLabel - In the implementation block
-(UILabel *)attributionLabel;
-(void)setAttributionLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(void)_setupConstraints;
@end
