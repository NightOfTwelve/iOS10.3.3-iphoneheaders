/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKBCacheableView.h>

@class UIKBTree, UIKBRenderConfig, UIKBRenderFactory, NSMutableDictionary, NSString, UIKeyboardMenuView;

@interface UIKBKeyView : UIView <UIKBCacheableView> {

	UIKBTree* m_keyplane;
	UIKBTree* m_key;
	CGRect m_drawFrame;
	CFBooleanRef m_allowsCaching;
	UIKBRenderConfig* m_renderConfig;
	UIKBRenderFactory* m_factory;
	NSMutableDictionary* _keyLayers;
	int _renderedKeyState;
	NSString* _cachedTraitsHashString;
	CGColorRef _activeBackgroundColor;
	id _activeCompositingFilter;
	char _singleRerender;
	char _cachedControlKeyRenderingPreference;
	char _renderAsMask;
	int _cachedAnchorCorner;
	unsigned _cachedShiftState;
	int _cachedSelector;
	UIKeyboardMenuView* _popupMenu;
	double _endingTransitionDuration;

}

@property (assign,nonatomic) char renderAsMask;                                     //@synthesize renderAsMask=_renderAsMask - In the implementation block
@property (readonly) int cachedRenderFlags; 
@property (nonatomic,readonly) UIEdgeInsets displayInsets; 
@property (nonatomic,retain) NSString * cachedTraitsHashString;                     //@synthesize cachedTraitsHashString=_cachedTraitsHashString - In the implementation block
@property (assign,nonatomic) int cachedAnchorCorner;                                //@synthesize cachedAnchorCorner=_cachedAnchorCorner - In the implementation block
@property (assign,nonatomic) unsigned cachedShiftState;                             //@synthesize cachedShiftState=_cachedShiftState - In the implementation block
@property (assign,nonatomic) int cachedSelector;                                    //@synthesize cachedSelector=_cachedSelector - In the implementation block
@property (assign,nonatomic) char cachedControlKeyRenderingPreference;              //@synthesize cachedControlKeyRenderingPreference=_cachedControlKeyRenderingPreference - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyplane; 
@property (nonatomic,readonly) UIKBTree * key; 
@property (assign,nonatomic) CGRect drawFrame; 
@property (nonatomic,retain) UIKBRenderConfig * renderConfig; 
@property (nonatomic,retain) UIKBRenderFactory * factory; 
@property (assign,nonatomic) UIKeyboardMenuView * popupMenu;                        //@synthesize popupMenu=_popupMenu - In the implementation block
@property (nonatomic,readonly) CGRect variantFrame; 
@property (nonatomic,readonly) UIKBKeyView * contentsKeyView; 
@property (nonatomic,readonly) char hasRendered; 
@property (assign,nonatomic) double endingTransitionDuration;                       //@synthesize endingTransitionDuration=_endingTransitionDuration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) char cacheDeferable; 
@property (nonatomic,readonly) float cachedWidth; 
@property (nonatomic,readonly) char keepNonPersistent; 
-(UIKBTree *)key;
-(void)dealloc;
-(UIKBRenderConfig *)renderConfig;
-(void)dimKeys:(id)arg1 ;
-(int)didInputSubTree:(id)arg1 ;
-(UIKBKeyView *)contentsKeyView;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(id)subTreeHitTest:(CGPoint)arg1 ;
-(void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(char)_canDrawContent;
-(id)_generateBackdropMaskImage;
-(void)displayLayer:(id)arg1 ;
-(void)_applyAppearanceInvocations;
-(int)textEffectsVisibilityLevel;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(unsigned)focusableVariantCount;
-(id)layerForRenderFlags:(int)arg1 ;
-(int)imageOrientationForLayer:(id)arg1 ;
-(void)prepareForDisplay;
-(void)setDrawFrame:(CGRect)arg1 ;
-(UIKBTree *)keyplane;
-(NSString *)cacheKey;
-(float)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(char)cacheDeferable;
-(char)keepNonPersistent;
-(UIKBRenderFactory *)factory;
-(CGRect)variantFrame;
-(void)setPopupMenu:(UIKeyboardMenuView *)arg1 ;
-(void)_populateLayer:(id)arg1 withContents:(id)arg2 ;
-(char)_viewShouldBeOpaque;
-(CGRect)drawFrame;
-(int)cachedRenderFlags;
-(char)renderAsMask;
-(UIEdgeInsets)displayInsets;
-(int)cachedSelector;
-(int)cachedAnchorCorner;
-(unsigned)cachedShiftState;
-(char)cachedControlKeyRenderingPreference;
-(char)allowBackgroundCachingForRenderFlags:(int)arg1 ;
-(NSString *)cachedTraitsHashString;
-(id)renderFlagsForTraits:(id)arg1 ;
-(char)requiresSublayers;
-(char)_shouldUpdateLayers;
-(void)setCachedTraitsHashString:(NSString *)arg1 ;
-(void)setCachedAnchorCorner:(int)arg1 ;
-(void)setCachedShiftState:(unsigned)arg1 ;
-(void)setCachedSelector:(int)arg1 ;
-(void)setCachedControlKeyRenderingPreference:(char)arg1 ;
-(UIKeyboardMenuView *)popupMenu;
-(void)setRenderAsMask:(char)arg1 ;
-(char)hasRendered;
-(void)changeBackgroundToEnabled;
-(void)changeBackgroundToActiveIfNecessary;
-(void)setFactory:(UIKBRenderFactory *)arg1 ;
-(double)endingTransitionDuration;
-(void)setEndingTransitionDuration:(double)arg1 ;
@end

