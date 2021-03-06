/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Weather/Weather-Structs.h>
@class CPBitmapStore, NSLock, NSCache, NSObject;

@interface WAWeatherUILabelCache : NSObject {

	CPBitmapStore* _store;
	NSLock* _storeLock;
	NSCache* _temperatureLabels;
	NSCache* _monospacedTemperatureLabels;
	NSCache* _lightTemperatureLabels;
	NSCache* _monospacedLightTemperatureLabels;
	NSCache* _boldTemperatureLabels;
	NSCache* _precipitationLabels;
	NSCache* _cityCardNameLabels;
	NSCache* _cityCardNameBaselines;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) CPBitmapStore * store;                                   //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSLock * storeLock;                                      //@synthesize storeLock=_storeLock - In the implementation block
@property (nonatomic,retain) NSCache * temperatureLabels;                             //@synthesize temperatureLabels=_temperatureLabels - In the implementation block
@property (nonatomic,retain) NSCache * monospacedTemperatureLabels;                   //@synthesize monospacedTemperatureLabels=_monospacedTemperatureLabels - In the implementation block
@property (nonatomic,retain) NSCache * lightTemperatureLabels;                        //@synthesize lightTemperatureLabels=_lightTemperatureLabels - In the implementation block
@property (nonatomic,retain) NSCache * monospacedLightTemperatureLabels;              //@synthesize monospacedLightTemperatureLabels=_monospacedLightTemperatureLabels - In the implementation block
@property (nonatomic,retain) NSCache * boldTemperatureLabels;                         //@synthesize boldTemperatureLabels=_boldTemperatureLabels - In the implementation block
@property (nonatomic,retain) NSCache * precipitationLabels;                           //@synthesize precipitationLabels=_precipitationLabels - In the implementation block
@property (nonatomic,retain) NSCache * cityCardNameLabels;                            //@synthesize cityCardNameLabels=_cityCardNameLabels - In the implementation block
@property (nonatomic,retain) NSCache * cityCardNameBaselines;                         //@synthesize cityCardNameBaselines=_cityCardNameBaselines - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
+(id)imageForPrecipitation:(id)arg1 ;
+(id)imageForTemperature:(id)arg1 withStyle:(unsigned)arg2 ;
+(id)imageForTime:(id)arg1 bold:(char)arg2 ;
+(UIEdgeInsets)outsetsForString:(id)arg1 withLabelType:(unsigned)arg2 ;
+(void)precacheLabels;
+(id)attributesForType:(unsigned)arg1 ;
+(id)imageForString:(id)arg1 attributes:(id)arg2 size:(CGSize)arg3 baselineOffset:(float*)arg4 outsets:(UIEdgeInsets*)arg5 ;
+(id)imageForString:(id)arg1 attributes:(id)arg2 ;
+(id)excessiveLineHeightCharacterSet;
+(UIEdgeInsets)outsetsForFont:(id)arg1 ;
+(id)imageForString:(id)arg1 attributes:(id)arg2 size:(CGSize)arg3 baselineOffset:(float*)arg4 ;
+(id)imageForLabelWithText:(id)arg1 withLightlabel:(char)arg2 withFont:(id)arg3 ;
+(void)precacheWeekdays;
+(id)_localizedTimesToPrecache;
+(id)sharedUILabelCache;
+(void)_slowlyPrecacheLocalizedTimes:(id)arg1 ;
+(void)_slowlyPrecacheTemperatures;
+(id)imageForWeekday:(id)arg1 ;
+(id)imageForWeekday:(id)arg1 withStyle:(unsigned)arg2 ;
+(id)_attributesForCreatingTemperatureImageWithLabelStyle:(unsigned)arg1 ;
+(id)imageForAttributedString:(id)arg1 ;
+(id)imageForLabelWithText:(id)arg1 withLightlabel:(char)arg2 ;
+(id)imageForCityCardName:(id)arg1 withWindowWidth:(float)arg2 ;
+(float)baselineForCityCardName:(id)arg1 withWindowWidth:(float)arg2 ;
-(void)userTextSizeDidChange;
-(void)deleteAndCreateCache;
-(id)cachedImageForWeekday:(id)arg1 withStyle:(unsigned)arg2 ;
-(id)cachedImageForTime:(id)arg1 bold:(char)arg2 ;
-(NSCache *)temperatureLabels;
-(NSCache *)monospacedTemperatureLabels;
-(NSCache *)lightTemperatureLabels;
-(NSCache *)monospacedLightTemperatureLabels;
-(NSCache *)boldTemperatureLabels;
-(NSCache *)precipitationLabels;
-(NSCache *)cityCardNameLabels;
-(NSCache *)cityCardNameBaselines;
-(id)cachedImageForWeekday:(id)arg1 ;
-(NSLock *)storeLock;
-(void)setStoreLock:(NSLock *)arg1 ;
-(void)setTemperatureLabels:(NSCache *)arg1 ;
-(void)setMonospacedTemperatureLabels:(NSCache *)arg1 ;
-(void)setLightTemperatureLabels:(NSCache *)arg1 ;
-(void)setMonospacedLightTemperatureLabels:(NSCache *)arg1 ;
-(void)setBoldTemperatureLabels:(NSCache *)arg1 ;
-(void)setPrecipitationLabels:(NSCache *)arg1 ;
-(void)setCityCardNameLabels:(NSCache *)arg1 ;
-(void)setCityCardNameBaselines:(NSCache *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)resetLocale;
-(void)setStore:(CPBitmapStore *)arg1 ;
-(CPBitmapStore *)store;
@end

