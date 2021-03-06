/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITraitCollection, UILayoutGuide, _UIStackedImageContainerView, UIImage, NSArray, UIColor;

@interface UIImageView : UIView {

	id _storage;
	UIEdgeInsets _cachedEdgeInsetsForEffects;
	UITraitCollection* _lastResolvedTraitCollection;
	int _lastResolvedLayoutDirectionTrait;
	char _templateSettingsAreInvalid;
	char _edgeInsetsForEffectsAreValid;
	char _adjustsImageWhenAncestorFocused;
	char __animatesContents;
	UILayoutGuide* _focusedFrameGuide;

}

@property (assign,setter=_setDefaultRenderingMode:,nonatomic) int _defaultRenderingMode; 
@property (nonatomic,readonly) UIEdgeInsets _edgeInsetsForEffects; 
@property (assign,setter=_setEdgeInsetsForEffectsAreValid:,nonatomic) char _edgeInsetsForEffectsAreValid;                    //@synthesize edgeInsetsForEffectsAreValid=_edgeInsetsForEffectsAreValid - In the implementation block
@property (assign,setter=_setMasksTemplateImages:,nonatomic) char _masksTemplateImages; 
@property (nonatomic,readonly) char _templateSettingsAreInvalid;                                                             //@synthesize templateSettingsAreInvalid=_templateSettingsAreInvalid - In the implementation block
@property (assign,nonatomic) int drawMode; 
@property (assign,setter=_setTemplateImageRenderingEffects:,nonatomic) unsigned _templateImageRenderingEffects; 
@property (assign,setter=_setAnimatesContents:,nonatomic) char _animatesContents;                                            //@synthesize _animatesContents=__animatesContents - In the implementation block
@property (assign,setter=_setLayeredImageCornerRadius:,nonatomic) float _layeredImageCornerRadius; 
@property (nonatomic,readonly) _UIStackedImageContainerView * _layeredImageContainer; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * highlightedImage; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) char userInteractionEnabled; 
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (nonatomic,copy) NSArray * animationImages; 
@property (nonatomic,copy) NSArray * highlightedAnimationImages; 
@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic) int animationRepeatCount; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (getter=isAnimating,nonatomic,readonly) char animating; 
@property (assign,nonatomic) char adjustsImageWhenAncestorFocused;                                                           //@synthesize adjustsImageWhenAncestorFocused=_adjustsImageWhenAncestorFocused - In the implementation block
@property (readonly) UILayoutGuide * focusedFrameGuide;                                                                      //@synthesize focusedFrameGuide=_focusedFrameGuide - In the implementation block
+(id)_surfacePropertiesForRenderingCIImageWithSize:(CGSize)arg1 pixelFormat:(unsigned long)arg2 bytesPerElement:(unsigned)arg3 ;
+(char)_canReuseIOSurface:(IOSurfaceRef)arg1 forRenderingCIImageWithIOSurfaceProperties:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setSemanticContentAttribute:(int)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(char)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(UIImage *)image;
-(UIEdgeInsets)alignmentRectInsets;
-(CGImageRef)imageRef;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(char)useBlockyMagnificationInClassic;
-(char)_canDrawContent;
-(id)_generateBackdropMaskImage;
-(void)tintColorDidChange;
-(void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setAnimationRepeatCount:(int)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(unsigned)_templateImageRenderingEffects;
-(void)_setDefaultRenderingMode:(int)arg1 ;
-(void)_setTemplateImageRenderingEffects:(unsigned)arg1 ;
-(char)isHighlighted;
-(NSArray *)animationImages;
-(NSArray *)highlightedAnimationImages;
-(UIImage *)highlightedImage;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(int)_defaultRenderingMode;
-(char)_masksTemplateImages;
-(id)_currentImage;
-(id)_currentHighlightedImage;
-(char)_shouldDrawImage:(id)arg1 ;
-(id)_cachedPretiledImageForImage:(id)arg1 ;
-(void)_updateLayerContentsForCIImageBackedImage:(id)arg1 ;
-(char)_needsImageEffectsForImage:(id)arg1 ;
-(id)_effectiveTintColorWithImage:(id)arg1 ;
-(char)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(char)arg2 ;
-(void)_drawImageEffectsForImage:(id)arg1 inRect:(CGRect)arg2 ;
-(char)isAnimating;
-(char)_setImageViewContents:(id)arg1 ;
-(char)_displayImageAsLayered:(id)arg1 ;
-(void)_configureForLayeredImage:(id)arg1 ;
-(_UIStackedImageContainerView *)_layeredImageContainer;
-(void)_teardownLayeredImage;
-(void)_setDecompressingImage:(id)arg1 forType:(unsigned)arg2 ;
-(void)stopAnimating;
-(void)_clearPretiledImageCacheForImage:(id)arg1 ;
-(void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2 ;
-(void)_updatePretiledImageCacheForImage:(id)arg1 ;
-(void)_updateState;
-(void)_updateTemplateProperties;
-(char)_recomputePretilingState;
-(void)_setViewGeometry:(CGRect)arg1 forMetric:(int)arg2 ;
-(UIEdgeInsets)_edgeInsetsForEffects;
-(id)_activeImage;
-(id)_decompressingImageForType:(unsigned)arg1 ;
-(void)_resolveImageForTrait:(id)arg1 ;
-(char)_shouldTreatImageAsTemplate:(id)arg1 ;
-(void)_updateMasking;
-(void)_templateSettingsDidChange;
-(void)_invalidateTemplateSettings;
-(char)_getDrawModeCompositeOperation:(int*)arg1 color:(id*)arg2 andAlpha:(float*)arg3 ;
-(void)startAnimating;
-(char)_animatesContents;
-(id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(char*)arg4 ;
-(void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg1 focusAnimationCoordinator:(id)arg2 ;
-(void)_setLayeredImageContainer:(id)arg1 ;
-(id)_applyImageEffectsToCIImage:(id)arg1 effectiveTintColor:(id)arg2 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setAnimationImages:(NSArray *)arg1 ;
-(void)setHighlightedAnimationImages:(NSArray *)arg1 ;
-(id)_currentAnimationKeyframeImage;
-(double)animationDuration;
-(int)animationRepeatCount;
-(void)_setMasksTemplateImages:(char)arg1 ;
-(int)drawMode;
-(void)setDrawMode:(int)arg1 ;
-(void)setCGImageRef:(CGImageRef)arg1 ;
-(void)setAnimating:(char)arg1 ;
-(id)_checkImageForAdaptation:(id)arg1 hasAdapted:(char*)arg2 ;
-(id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(char*)arg2 ;
-(float)_layeredImageCornerRadius;
-(void)_setLayeredImageCornerRadius:(float)arg1 ;
-(char)_templateSettingsAreInvalid;
-(char)_edgeInsetsForEffectsAreValid;
-(void)_setEdgeInsetsForEffectsAreValid:(char)arg1 ;
-(char)adjustsImageWhenAncestorFocused;
-(void)setAdjustsImageWhenAncestorFocused:(char)arg1 ;
-(UILayoutGuide *)focusedFrameGuide;
-(void)_setAnimatesContents:(char)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(char)isAccessibilityElementByDefault;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_applySettingsForLegibilityStyle:(int)arg1 ;
@end

