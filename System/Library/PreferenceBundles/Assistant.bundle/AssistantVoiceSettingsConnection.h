/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSettingsConnection.h>

@class NSMutableDictionary;

@interface AssistantVoiceSettingsConnection : AFSettingsConnection {

	NSMutableDictionary* _cachedAvailableVoices;

}

@property (nonatomic,retain) NSMutableDictionary * cachedAvailableVoices;              //@synthesize cachedAvailableVoices=_cachedAvailableVoices - In the implementation block
+(id)outputLanguageIdentifiers;
-(id)dialectForLanguageIdentifier:(id)arg1 ;
-(char)languageHasBothGender:(id)arg1 ;
-(NSMutableDictionary *)cachedAvailableVoices;
-(char)languageHasVoiceSelection:(id)arg1 ;
-(id)getAvailableDialectsForLanguage:(id)arg1 ;
-(void)setOutputVoiceLanguage:(id)arg1 gender:(int)arg2 ;
-(id)getAvailableVoicesForLanguage:(id)arg1 ;
-(id)nonCacheAvailableVoicesForLanguage:(id)arg1 ;
-(id)_regionForLanguageIdentifier:(id)arg1 ;
-(char)languageHasCustomVoice:(id)arg1 ;
-(void)setCachedAvailableVoices:(NSMutableDictionary *)arg1 ;
@end
