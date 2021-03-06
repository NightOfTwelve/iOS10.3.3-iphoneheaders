/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@class CFPrefsPlistSource, CFPrefsCloudSource;

@interface CFPrefsSearchListSource : CFPrefsSource {

	CFStringRef _identifier;
	CFArrayRef _sourceList;
	CFSetRef _cloudKeys;
	CFArrayRef _cloudPrefixKeys;
	CFPrefsPlistSource* _standardSetTarget;
	CFPrefsCloudSource* _cloudSetTarget;
	opaque_pthread_mutex_t* _searchListLock;
	char initialized;

}
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFArrayRef)alreadylocked_copyKeyList;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(char*)arg5 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long)arg3 ;
-(char)alreadylocked_requestNewData;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCloudEnabled:(char)arg1 forKeyPrefix:(CFStringRef)arg2 ;
-(void)setCloudEnabled:(char)arg1 forKey:(CFStringRef)arg2 ;
-(void)lockObservers;
-(void)unlockObservers;
-(void)alreadylocked_setObservingContents:(char)arg1 ;
-(id)initWithIdentifier:(CFStringRef)arg1 containingPreferences:(id)arg2 ;
-(char)alreadylocked_useCloudForKey:(CFStringRef)arg1 ;
-(long)alreadylocked_generationCountFromListOfSources:(id*)arg1 count:(long)arg2 ;
-(void)asynchronouslyNotifyOfChangesFromDictionary:(CFDictionaryRef)arg1 toDictionary:(CFDictionaryRef)arg2 ;
-(CFStringRef)copyCloudConfigurationWithURL:(CFURLRef)arg1 outConfigFileSource:(id*)arg2 outStoreName:(const _CFString*)arg3 ;
-(void)addPreferencesObserver:(id)arg1 ;
-(void)removePreferencesObserver:(id)arg1 ;
-(void)addManagedSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 ;
-(void)addSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(char)arg3 container:(CFStringRef)arg4 ;
-(void)addCloudSourceForIdentifier:(CFStringRef)arg1 configurationPath:(CFStringRef)arg2 storeName:(CFStringRef)arg3 container:(CFStringRef)arg4 ;
-(void)addSuiteSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 ;
-(void)addNamedVolatileSourceForIdentifier:(CFStringRef)arg1 ;
-(void)addCompatibilitySource;
-(char)alreadylocked_hasCloudValueForKey:(CFStringRef)arg1 ;
-(char)alreadylocked_hasNonRegisteredValueForKey:(CFStringRef)arg1 ;
-(void)handleRemoteChangeNotificationForDomainIdentifier:(CFStringRef)arg1 ;
-(void)removeSource:(id)arg1 ;
-(void)replaceSource:(id)arg1 withSource:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(char)synchronize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)lock;
-(void)unlock;
-(long)generationCount;
-(void)addSource:(id)arg1 ;
-(void)freeze;
-(CFStringRef)domainIdentifier;
@end

