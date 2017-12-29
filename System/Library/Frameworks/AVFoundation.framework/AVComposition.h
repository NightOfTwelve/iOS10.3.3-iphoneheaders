/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVCompositionInternal, NSArray, NSDictionary;

@interface AVComposition : AVAsset <NSSecureCoding, NSMutableCopying> {

	AVCompositionInternal* _priv;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,copy,readonly) NSDictionary * URLAssetInitializationOptions; 
+(void)initialize;
+(char)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(OpaqueFigAssetRef)_figAsset;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(id)_mediaSelectionGroupDictionaries;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(NSDictionary *)URLAssetInitializationOptions;
-(long)_createEmptyMutableCompositionIfNeeded;
-(id)_initWithComposition:(id)arg1 ;
-(void)_loadAssetInspectorAndLoaderOnce;
-(id)_newTrackForIndex:(long)arg1 ;
-(id)_mutableTracks;
-(char)_clientProvidesNaturalSize;
-(void)_setNaturalSize:(CGSize)arg1 ;
-(char)_setURLAssetInitializationOptions:(id)arg1 error:(id*)arg2 ;
-(id)trackWithTrackID:(int)arg1 ;
-(NSArray *)tracks;
-(id)tracksWithMediaType:(id)arg1 ;
-(void)finalize;
@end
