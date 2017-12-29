/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CIColor;

@interface UIColor : NSObject <NSSecureCoding, NSCopying> {

	NSString* _systemColorName;
	NSString* _cachedStyleString;

}

@property (setter=_setSystemColorName:,getter=_systemColorName,nonatomic,retain) NSString * systemColorName; 
@property (nonatomic,readonly) CGColorRef CGColor; 
@property (nonatomic,readonly) CIColor * CIColor; 
+(id)blackColor;
+(id)colorWithWhite:(float)arg1 alpha:(float)arg2 ;
+(id)whiteColor;
+(id)clearColor;
+(void)initialize;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)systemBlueColor;
+(id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)grayColor;
+(id)lightGrayColor;
+(id)darkGrayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
+(char)supportsSecureCoding;
+(id)tableCellDefaultSelectionTintColor;
+(id)_alternateSystemInteractionTintColor;
+(id)systemRedColor;
+(id)systemDarkRedColor;
+(id)systemGreenColor;
+(id)systemDarkGreenColor;
+(id)systemDarkBlueColor;
+(id)systemOrangeColor;
+(id)systemDarkOrangeColor;
+(id)systemTealColor;
+(id)systemDarkTealColor;
+(id)systemPinkColor;
+(id)systemDarkPinkColor;
+(id)_systemColorWithName:(id)arg1 ;
+(id)_externalSystemDarkGrayColor;
+(id)_externalBarBackgroundColor;
+(id)_externalSystemWhiteColor;
+(id)_accessibilityButtonShapesBackgroundColorOnLight;
+(id)_accessibilityButtonShapesBackgroundColorOnDark;
+(id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+(id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+(id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+(id)_externalSystemExtraDarkGrayColor;
+(id)groupTableViewBackgroundColor;
+(id)tableSeparatorLightColor;
+(id)tableSeparatorDarkColor;
+(id)tableGroupedSeparatorLightColor;
+(id)tableCellbackgroundColorCarPlay;
+(id)tableCellBackgroundColor;
+(id)tableBackgroundColor;
+(id)_externalSystemMidGrayColor;
+(id)tableCellPlainBackgroundColor;
+(id)tableCellGroupedBackgroundColor;
+(id)tableCellGroupedBackgroundColorLegacyWhite;
+(id)tableCellValue2BlueColor;
+(id)tableCellValue1BlueColor;
+(id)tableCellGrayTextColor;
+(id)tablePlainHeaderFooterFloatingBackgroundColor;
+(id)tablePlainHeaderFooterBackgroundColor;
+(id)_vibrantLightDividerBurnColor;
+(id)_vibrantLightDividerDarkeningColor;
+(id)_vibrantLightSectionDelimiterDividerBurnColor;
+(id)_vibrantLightSectionDelimiterDividerDarkeningColor;
+(id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(float)arg4 ;
+(id)insertionPointColor;
+(id)selectionHighlightColor;
+(id)__halfTransparentBlackColor;
+(id)__halfTransparentWhiteColor;
+(float)_luminanceWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
+(id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
+(id)_disambiguated_due_to_CIImage_colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)_disambiguated_due_to_CIImage_colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithPatternImage:(id)arg1 ;
+(id)colorWithCIColor:(id)arg1 ;
+(id)colorWithDisplayP3Red:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)_systemColorForColor:(id)arg1 withName:(id)arg2 ;
+(id)classFallbacksForKeyedArchiver;
+(id)tableSelectionColor;
+(id)tableSelectionGradientStartColor;
+(id)tableSelectionGradientEndColor;
+(id)tableShadowColor;
+(id)tableGroupedTopShadowColor;
+(id)sectionListBorderColor;
+(id)sectionHeaderBackgroundColor;
+(id)sectionHeaderOpaqueBackgroundColor;
+(id)sectionHeaderBorderColor;
+(id)textFieldAtomPurpleColor;
+(id)infoTextOverPinStripeTextColor;
+(id)textFieldAtomBlueColor;
+(id)pinStripeColor;
+(id)selectionGrabberColor;
+(id)lightTextColor;
+(id)darkTextColor;
+(id)_markedTextBackgroundColor;
+(id)_markedTextBorderColor;
+(id)tableCellBlueTextColor;
+(id)viewFlipsideBackgroundColor;
+(id)underPageBackgroundColor;
+(id)scrollViewTexturedBackgroundColor;
+(id)systemYellowColor;
+(id)systemGrayColor;
+(id)systemMidGrayColor;
+(id)systemPurpleColor;
+(id)systemDarkYellowColor;
+(id)externalSystemTealColor;
+(id)externalSystemRedColor;
+(id)externalSystemGreenColor;
+(id)_systemInteractionTintColor;
+(id)_systemDestructiveTintColor;
+(id)_barHairlineShadowColor;
+(id)_barStyleBlackHairlineShadowColor;
+(id)_systemMidGrayTintColor;
+(id)_externalSystemGrayColor;
+(id)_externalSystemSuperDarkGrayColor;
+(id)noContentLightGradientBackgroundColor;
+(id)noContentDarkGradientBackgroundColor;
+(id)_translucentPaperTextureColor;
+(id)_dimmingViewColor;
+(id)_grayColorForFontSize:(float)arg1 ;
+(id)_systemSelectedColor;
+(id)_vibrantLightFillBurnColor;
+(id)_vibrantLightFillDarkeningColor;
+(id)_vibrantDarkFillDodgeColor;
+(id)_webContentBackgroundColor;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)CGColor;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)colorWithAlphaComponent:(float)arg1 ;
-(char)getWhite:(float*)arg1 alpha:(float*)arg2 ;
-(void)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4 ;
-(Class)classForCoder;
-(char)_getWhite:(float*)arg1 alpha:(float*)arg2 ;
-(id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
-(id)_systemColorName;
-(void)setFill;
-(id)initWithWhite:(float)arg1 alpha:(float)arg2 ;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(float)alphaComponent;
-(CGColorRef)cgColor;
-(void)setStroke;
-(id)styleString;
-(char)_getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4 ;
-(char)_isDeepColor;
-(char)isPatternColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(char)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 alpha:(float*)arg4 ;
-(id)initWithDisplayP3Red:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(id)initWithCIColor:(id)arg1 ;
-(CIColor *)CIColor;
-(id)initWithPatternImage:(id)arg1 ;
-(void)_setSystemColorName:(id)arg1 ;
-(float)_luminance;
-(id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2 ;
-(id)_colorBlendedWithColor:(id)arg1 ;
-(char)_isSimilarToColor:(id)arg1 withinPercentage:(float)arg2 ;
-(float)_colorDifferenceFromColor:(id)arg1 ;
-(float)_luminanceDifferenceFromColor:(id)arg1 ;
-(id)_colorBlendedWithColors:(id)arg1 ;
-(id)ui_highlightedColor;
@end
