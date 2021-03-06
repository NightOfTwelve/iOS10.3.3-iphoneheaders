/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/UserLocationView.h>

@class UIImage, UIColor;

@interface MapsUserLocationView : UserLocationView {

	UIImage* _balloonImage;
	UIColor* _balloonTintColor;

}

@property (setter=_setBalloonImage:,nonatomic,retain) UIImage * balloonImage;                      //@synthesize balloonImage=_balloonImage - In the implementation block
@property (setter=_setBalloonTintColor:,nonatomic,retain) UIColor * balloonTintColor;              //@synthesize balloonTintColor=_balloonTintColor - In the implementation block
-(UIImage *)balloonImage;
-(void)_setBalloonImage:(id)arg1 ;
-(void)_setBalloonTintColor:(id)arg1 ;
-(void)setSelected:(char)arg1 ;
-(id)_balloonTintColor;
-(id)_balloonStrokeColor;
-(UIColor *)balloonTintColor;
-(CGPoint)calloutOffset;
-(int)_balloonCalloutStyle;
-(id)_balloonInnerStrokeColor;
-(id)_balloonImage;
-(CATransform3D)_innerCircleLayerDefaultTransform;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end

