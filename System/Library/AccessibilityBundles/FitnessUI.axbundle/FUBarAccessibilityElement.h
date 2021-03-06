/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/FitnessUI.axbundle/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@interface FUBarAccessibilityElement : UIAccessibilityElement {

	id _barSeries;
	unsigned _index;
	CGPoint _barPoint;

}

@property (assign,nonatomic) CGPoint barPoint;              //@synthesize barPoint=_barPoint - In the implementation block
@property (nonatomic,retain) id barSeries;                  //@synthesize barSeries=_barSeries - In the implementation block
@property (assign,nonatomic) unsigned index;                //@synthesize index=_index - In the implementation block
+(id)accessibilityElementsForBarSeries:(id)arg1 ;
-(id)barSeries;
-(CGPoint)barPoint;
-(void)setBarSeries:(id)arg1 ;
-(void)setBarPoint:(CGPoint)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 barSeries:(id)arg2 index:(unsigned)arg3 plotPoint:(id)arg4 ;
-(unsigned)index;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(void)setIndex:(unsigned)arg1 ;
@end

