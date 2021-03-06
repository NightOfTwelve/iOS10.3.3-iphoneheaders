/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface IMUbiquitousPersistentStoreLoader : NSObject {

	NSString* _identifier;
	NSURL* _persistentStoreURL;
	NSString* _storeName;
	NSString* _managedObjectModelName;
	char _isUbiquitous;
	NSString* _ubiquitousStoreIdentifier;
	NSString* _ubiquitousContentName;
	NSString* _ubiquitousPeerIDOverride;

}

@property (nonatomic,readonly) NSURL * storeURL; 
@property (nonatomic,retain) NSURL * persistentStoreURL;                        //@synthesize persistentStoreURL=_persistentStoreURL - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * storeName;                              //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,retain) NSString * managedObjectModelName;                 //@synthesize managedObjectModelName=_managedObjectModelName - In the implementation block
@property (assign,nonatomic) char isUbiquitous;                                 //@synthesize isUbiquitous=_isUbiquitous - In the implementation block
@property (nonatomic,retain) NSString * ubiquitousStoreIdentifier;              //@synthesize ubiquitousStoreIdentifier=_ubiquitousStoreIdentifier - In the implementation block
@property (nonatomic,retain) NSString * ubiquitousContentName;                  //@synthesize ubiquitousContentName=_ubiquitousContentName - In the implementation block
@property (nonatomic,retain) NSString * ubiquitousPeerIDOverride;               //@synthesize ubiquitousPeerIDOverride=_ubiquitousPeerIDOverride - In the implementation block
-(id)initWithPersistentStoreURL:(id)arg1 ;
-(NSString *)ubiquitousContentName;
-(NSString *)ubiquitousStoreIdentifier;
-(id)ubiquitousContainerURL;
-(NSString *)ubiquitousPeerIDOverride;
-(id)addPersistentStoreToPersistentStoreCoordinator:(id)arg1 withType:(id)arg2 configuration:(id)arg3 URL:(id)arg4 options:(id)arg5 ;
-(id)addPersistentStoreToPersistentStoreCoordinator:(id)arg1 includeUbiquitousOptions:(char)arg2 ;
-(char)storeFileExists;
-(void)deletePersistentStore;
-(NSString *)managedObjectModelName;
-(void)setManagedObjectModelName:(NSString *)arg1 ;
-(void)setUbiquitousStoreIdentifier:(NSString *)arg1 ;
-(void)setUbiquitousContentName:(NSString *)arg1 ;
-(void)setUbiquitousPeerIDOverride:(NSString *)arg1 ;
-(char)isUbiquitous;
-(NSString *)storeName;
-(void)setStoreName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSURL *)storeURL;
-(void)setIsUbiquitous:(char)arg1 ;
-(NSURL *)persistentStoreURL;
-(void)setPersistentStoreURL:(NSURL *)arg1 ;
@end

