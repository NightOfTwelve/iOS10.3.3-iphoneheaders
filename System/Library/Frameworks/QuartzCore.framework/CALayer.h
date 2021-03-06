/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/CAMediaTiming.h>

@class NSArray, CAMeshTransform, NSString, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {

	CALayerIvars* _attr;

}

@property (nonatomic,readonly) CALayer * _labelLayerToClipDuringBoundsSizeAnimation; 
@property (copy) NSArray * states; 
@property (copy) NSArray * stateTransitions; 
@property (readonly) CGRect visibleRect; 
@property (copy) CAMeshTransform * meshTransform; 
@property (assign) char needsLayoutOnGeometryChange; 
@property (assign) char canDrawConcurrently; 
@property (assign) char acceleratesDrawing; 
@property (getter=isFrozen) char frozen; 
@property (assign) char allowsHitTesting; 
@property (assign) char hitTestsAsOpaque; 
@property (assign) char clearsContext; 
@property (assign) char contentsOpaque; 
@property (assign) char contentsContainsSubtitles; 
@property (assign) char allowsContentsRectCornerMasking; 
@property (assign) char literalContentsCenter; 
@property (copy) NSString * contentsScaling; 
@property (assign) CGAffineTransform contentsTransform; 
@property (assign) char contentsDither; 
@property (assign) CGColorRef contentsMultiplyColor; 
@property (assign) char invertsShadow; 
@property (assign) char shadowPathIsBounds; 
@property (retain) id cornerContents; 
@property (assign) CGRect cornerContentsCenter; 
@property (assign) char cornerContentsMasksEdges; 
@property (assign) unsigned maskedCorners; 
@property (assign) float motionBlurAmount; 
@property (assign) char sortsSublayers; 
@property (assign) char preloadsCache; 
@property (assign) char rasterizationPrefersDisplayCompositing; 
@property (assign) char allowsGroupBlending; 
@property (assign) char allowsDisplayCompositing; 
@property (assign) CGSize sizeRequisition; 
@property (assign) CGSize backgroundColorPhase; 
@property (copy) NSArray * behaviors; 
@property (assign) float velocityStretch; 
@property (assign) float mass; 
@property (assign) float momentOfInertia; 
@property (assign) float coefficientOfRestitution; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint position; 
@property (assign) float zPosition; 
@property (assign) CGPoint anchorPoint; 
@property (assign) float anchorPointZ; 
@property (assign) CATransform3D transform; 
@property (assign) CGRect frame; 
@property (getter=isHidden) char hidden; 
@property (getter=isDoubleSided) char doubleSided; 
@property (getter=isGeometryFlipped) char geometryFlipped; 
@property (readonly) CALayer * superlayer; 
@property (copy) NSArray * sublayers; 
@property (assign) CATransform3D sublayerTransform; 
@property (retain) CALayer * mask; 
@property (assign) char masksToBounds; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (copy) NSString * contentsGravity; 
@property (assign) float contentsScale; 
@property (assign) CGRect contentsCenter; 
@property (copy) NSString * contentsFormat; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (getter=isOpaque) char opaque; 
@property (assign) char needsDisplayOnBoundsChange; 
@property (assign) char drawsAsynchronously; 
@property (assign) unsigned edgeAntialiasingMask; 
@property (assign) char allowsEdgeAntialiasing; 
@property (assign) CGColorRef backgroundColor; 
@property (assign) float cornerRadius; 
@property (assign) float borderWidth; 
@property (assign) CGColorRef borderColor; 
@property (assign) float opacity; 
@property (assign) char allowsGroupOpacity; 
@property (retain) id compositingFilter; 
@property (copy) NSArray * filters; 
@property (copy) NSArray * backgroundFilters; 
@property (assign) char shouldRasterize; 
@property (assign) float rasterizationScale; 
@property (assign) CGColorRef shadowColor; 
@property (assign) float shadowOpacity; 
@property (assign) CGSize shadowOffset; 
@property (assign) float shadowRadius; 
@property (assign) const CGPathRef shadowPath; 
@property (copy) NSDictionary * actions; 
@property (copy) NSString * name; 
@property (__weak) id<CALayerDelegate> delegate; 
@property (copy) NSDictionary * style; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(char)needsLayoutForKey:(id)arg1 ;
+(id)layer;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)properties;
+(id)defaultActionForKey:(id)arg1 ;
+(char)needsDisplayForKey:(id)arg1 ;
-(void)_ui_animateKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 usingSpringWithStiffnessFactor:(float)arg4 initialVelocity:(float)arg5 completion:(/*^block*/id)arg6 ;
-(void)_ui_removeAnimationForKeyPath:(id)arg1 ;
-(void)setPerspectiveDistance:(float)arg1 ;
-(char)uiHasFilterWithName:(id)arg1 ;
-(CALayer *)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)_setLabelMasksToBoundsForAnimation:(char)arg1 ;
-(int)compareTextEffectsOrdering:(id)arg1 ;
-(void)web_disableAllActions;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(id)_initWithReference:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(char)_canDisplayConcurrently;
-(void)setSizeRequisition:(CGSize)arg1 ;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(void)insertState:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)dependentStatesOfState:(id)arg1 ;
-(id)stateTransitionFrom:(id)arg1 to:(id)arg2 ;
-(void)_scrollPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)_scrollRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGRect)_visibleRectOfLayer:(id)arg1 ;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(char)_defersDidBecomeVisiblePostCommit;
-(CGColorSpaceRef)_retainColorSpace;
-(unsigned)_renderImageCopyFlags;
-(char)ignoresHitTesting;
-(char)allowsHitTesting;
-(char)sortsSublayers;
-(char)_scheduleAnimationTimer;
-(void)_cancelAnimationTimer;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(void)_renderBorderInContext:(CGContextRef)arg1 ;
-(char)drawsMipmapLevels;
-(CGSize)sizeRequisition;
-(id)cornerContents;
-(void)_contentsFormatDidChange:(id)arg1 ;
-(CGRect)cornerContentsCenter;
-(char)cornerContentsMasksEdges;
-(char)contentsContainsSubtitles;
-(void)setContentsContainsSubtitles:(char)arg1 ;
-(NSArray *)backgroundFilters;
-(void)setBackgroundFilters:(NSArray *)arg1 ;
-(char)rasterizationPrefersDisplayCompositing;
-(float)motionBlurAmount;
-(CGSize)backgroundColorPhase;
-(float)velocityStretch;
-(float)coefficientOfRestitution;
-(char)preloadsCache;
-(char)allowsDisplayCompositing;
-(char)wantsExtendedDynamicRangeContent;
-(char)literalContentsCenter;
-(char)invertsShadow;
-(char)shadowPathIsBounds;
-(CADoubleRect)convertDoubleRect:(CADoubleRect)arg1 fromLayer:(id)arg2 ;
-(id)layerBeingDrawn;
-(id)layerAtTime:(double)arg1 ;
-(char)doubleSided;
-(char)allowsContentsRectCornerMasking;
-(void)setAllowsContentsRectCornerMasking:(char)arg1 ;
-(void)setLiteralContentsCenter:(char)arg1 ;
-(void)setInvertsShadow:(char)arg1 ;
-(char)contentsDither;
-(void)setContentsDither:(char)arg1 ;
-(char)contentsOpaque;
-(void)setMotionBlurAmount:(float)arg1 ;
-(void)setWantsExtendedDynamicRangeContent:(char)arg1 ;
-(void)setBackgroundColorPhase:(CGSize)arg1 ;
-(id)lights;
-(void)setLights:(id)arg1 ;
-(void)setVelocityStretch:(float)arg1 ;
-(void)setCoefficientOfRestitution:(float)arg1 ;
-(char)getRendererInfo:(CARenderRendererInfo*)arg1 size:(unsigned long)arg2 ;
-(void)setAcceleratesDrawing:(char)arg1 ;
-(void)setContentsChanged;
-(char)acceleratesDrawing;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 ;
-(char)isDescendantOf:(id)arg1 ;
-(void)setCanDrawConcurrently:(char)arg1 ;
-(char)isFlipped;
-(void*)regionBeingDrawn;
-(void)setFlipped:(char)arg1 ;
-(id)init;
-(oneway void)release;
-(CGSize)size;
-(void)setHidden:(char)arg1 ;
-(CGRect)bounds;
-(void)setFrame:(CGRect)arg1 ;
-(void)setShadowColor:(CGColorRef)arg1 ;
-(void)setShadowRadius:(float)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setNeedsLayout;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)setTransform:(CATransform3D)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOpaque:(char)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(char)arg1 ;
-(void)setNeedsDisplay;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSDictionary *)arg1 ;
-(void)setCompositingFilter:(id)arg1 ;
-(CGColorRef)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CALayerDelegate>)arg1 ;
-(void)dealloc;
-(char)isHidden;
-(void)addSublayer:(id)arg1 ;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(id)debugDescription;
-(id<CALayerDelegate>)delegate;
-(void)setSpeed:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)layoutIfNeeded;
-(NSDictionary *)actions;
-(void)setHitTestsAsOpaque:(char)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)display;
-(NSDictionary *)style;
-(char)containsPoint:(CGPoint)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setRasterizationPrefersDisplayCompositing:(char)arg1 ;
-(CALayer *)superlayer;
-(void)setAllowsEdgeAntialiasing:(char)arg1 ;
-(CGAffineTransform)affineTransform;
-(void)setAffineTransform:(CGAffineTransform)arg1 ;
-(void)setMasksToBounds:(char)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setRasterizationScale:(float)arg1 ;
-(float)rasterizationScale;
-(id)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CATransform3D)transform;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)contents;
-(void)layoutBelowIfNeeded;
-(CADoublePoint)convertDoublePoint:(CADoublePoint)arg1 toLayer:(id)arg2 ;
-(CADoublePoint)convertDoublePoint:(CADoublePoint)arg1 fromLayer:(id)arg2 ;
-(id)context;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(double)convertTime:(double)arg1 fromLayer:(id)arg2 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(char)hasBeenCommitted;
-(float)repeatCount;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(double)beginTime;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(char)arg1 ;
-(id)presentationLayer;
-(char)isOpaque;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(void)setContentsFormat:(NSString *)arg1 ;
-(void)setContentsCenter:(CGRect)arg1 ;
-(CGRect)contentsCenter;
-(NSArray *)sublayers;
-(void)setAllowsGroupBlending:(char)arg1 ;
-(CALayer *)mask;
-(void)setMask:(CALayer *)arg1 ;
-(void)setCornerContents:(id)arg1 ;
-(void)setCornerContentsCenter:(CGRect)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(CGPoint)position;
-(char)needsLayout;
-(void)removeFromSuperlayer;
-(void)setSublayers:(NSArray *)arg1 ;
-(void)setContentsGravity:(NSString *)arg1 ;
-(char)needsDisplayOnBoundsChange;
-(NSString *)contentsGravity;
-(void)setContentsScaling:(NSString *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(float)contentsScale;
-(void)setContentsScale:(float)arg1 ;
-(void)setShouldRasterize:(char)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(char)needsDisplay;
-(char)masksToBounds;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setClearsContext:(char)arg1 ;
-(char)clearsContext;
-(void)clearHasBeenCommitted;
-(void)displayIfNeeded;
-(NSArray *)filters;
-(void)removeAllAnimations;
-(char)shouldRasterize;
-(void)setContents:(id)arg1 ;
-(void)invalidateContents;
-(void)setContentsTransform:(CGAffineTransform)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(char)isFrozen;
-(void)_display;
-(id)ancestorSharedWithLayer:(id)arg1 ;
-(char)allowsWeakReference;
-(void)setSublayerTransform:(CATransform3D)arg1 ;
-(char)needsLayoutOnGeometryChange;
-(void)setNeedsLayoutOnGeometryChange:(char)arg1 ;
-(void)setStyle:(NSDictionary *)arg1 ;
-(CADoubleRect)doubleBounds;
-(void)setDoubleBounds:(CADoubleRect)arg1 ;
-(CGPoint)anchorPoint;
-(CADoublePoint)doublePosition;
-(void)setDoublePosition:(CADoublePoint)arg1 ;
-(CGSize)shadowOffset;
-(CGSize)_preferredSize;
-(void)setAllowsGroupOpacity:(char)arg1 ;
-(CGColorRef)shadowColor;
-(char)allowsGroupOpacity;
-(void)setPreloadsCache:(char)arg1 ;
-(void)setFrozen:(char)arg1 ;
-(CGRect)visibleRect;
-(void)setShadowOpacity:(float)arg1 ;
-(float)shadowRadius;
-(void)setZPosition:(float)arg1 ;
-(float)shadowOpacity;
-(NSString *)contentsScaling;
-(id)compositingFilter;
-(void)reloadValueForKeyPath:(id)arg1 ;
-(void)setEdgeAntialiasingMask:(unsigned)arg1 ;
-(void)_dealloc;
-(void)setMaskedCorners:(unsigned)arg1 ;
-(void)setCornerContentsMasksEdges:(char)arg1 ;
-(CGColorRef)borderColor;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(CGColorRef)contentsMultiplyColor;
-(id)valueForUndefinedKey:(id)arg1 ;
-(float)mass;
-(id)hitTest:(CGPoint)arg1 ;
-(char)opaque;
-(float)borderWidth;
-(CAMeshTransform *)meshTransform;
-(void)setMeshTransform:(CAMeshTransform *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setAllowsHitTesting:(char)arg1 ;
-(void)layoutSublayers;
-(NSString *)contentsFormat;
-(void)drawInContext:(CGContextRef)arg1 ;
-(char)retainWeakReference;
-(void)setShadowPath:(const CGPathRef)arg1 ;
-(CGRect)contentsRect;
-(char)layoutIsActive;
-(char)isDoubleSided;
-(void)setDoubleSided:(char)arg1 ;
-(CATransform3D)sublayerTransform;
-(unsigned)edgeAntialiasingMask;
-(NSArray *)behaviors;
-(char)allowsGroupBlending;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(char)isGeometryFlipped;
-(void)setGeometryFlipped:(char)arg1 ;
-(void)setBehaviors:(NSArray *)arg1 ;
-(char)drawsAsynchronously;
-(void)setDrawsAsynchronously:(char)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(char)hidden;
-(float)anchorPointZ;
-(void)setAnchorPointZ:(float)arg1 ;
-(char)contentsAreFlipped;
-(CADoubleRect)convertDoubleRect:(CADoubleRect)arg1 toLayer:(id)arg2 ;
-(double)convertTime:(double)arg1 toLayer:(id)arg2 ;
-(char)autoreverses;
-(void)setShadowPathIsBounds:(char)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(float)zPosition;
-(char)allowsEdgeAntialiasing;
-(NSString *)fillMode;
-(void)setAllowsDisplayCompositing:(char)arg1 ;
-(const CGPathRef)shadowPath;
-(float)momentOfInertia;
-(void)setMomentOfInertia:(float)arg1 ;
-(char)canDrawConcurrently;
-(CGAffineTransform)contentsTransform;
-(CGSize)preferredFrameSize;
-(NSString *)magnificationFilter;
-(NSString *)minificationFilter;
-(float)minificationFilterBias;
-(void)setMinificationFilterBias:(float)arg1 ;
-(void)setSortsSublayers:(char)arg1 ;
-(id)modelLayer;
-(void)removeState:(id)arg1 ;
-(void)setContentsOpaque:(char)arg1 ;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1 ;
-(char)hitTestsAsOpaque;
-(unsigned)maskedCorners;
-(void)addState:(id)arg1 ;
-(id)stateWithName:(id)arg1 ;
@end

