/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MREffectManager : NSObject {

	NSMutableDictionary* mEffectSets;
	NSMutableDictionary* mEffectPools;
	NSMutableDictionary* mFontRepository;

}
+(void)initialize;
+(id)sharedManager;
-(id)effectWithEffectID:(id)arg1 ;
-(double)defaultPhaseInDurationForEffectID:(id)arg1 ;
-(double)defaultMainDurationForEffectID:(id)arg1 ;
-(id)descriptionForEffectID:(id)arg1 ;
-(char)hasCustomTimingForEffectID:(id)arg1 ;
-(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(float)arg5 ;
-(id)defaultEffectAttributesWithEffectID:(id)arg1 andSlideInformation:(id)arg2 ;
-(Class)classForEffectID:(id)arg1 ;
-(double)defaultPhaseOutDurationForEffectID:(id)arg1 ;
-(void)recycleEffect:(id)arg1 ;
-(id)imageProviderInfosForEffectID:(id)arg1 ;
-(char)isOpaqueForEffectID:(id)arg1 ;
-(id)attributeDescriptionForEffectID:(id)arg1 andKey:(id)arg2 ;
-(id)resourcePathForEffectID:(id)arg1 andResource:(id)arg2 ;
-(id)sizeScriptForEffectID:(id)arg1 andKey:(id)arg2 ;
-(float)lineSpacingFactorForTextInEffectID:(id)arg1 presetID:(id)arg2 atIndex:(int)arg3 ;
-(id)imageInputInfosForEffectID:(id)arg1 ;
-(char)hasMultiImageInputForEffectID:(id)arg1 ;
-(void)releaseResources;
-(id)init;
-(void)dealloc;
-(void)cleanup;
@end
