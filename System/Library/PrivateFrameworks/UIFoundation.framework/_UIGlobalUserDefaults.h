/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@protocol UIFoundationGlobalUserDefaultsHelper;
@class NSMutableDictionary;

@interface _UIGlobalUserDefaults : NSUserDefaults {

	id<UIFoundationGlobalUserDefaultsHelper> _userDefaultsHelper;
	NSMutableDictionary* _userDefaultsDictionary;
	unsigned _backgroundTaskIdentifier;

}

@property (nonatomic,retain) id<UIFoundationGlobalUserDefaultsHelper> userDefaultsHelper;              //@synthesize userDefaultsHelper=_userDefaultsHelper - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userDefaultsDictionary;                             //@synthesize userDefaultsDictionary=_userDefaultsDictionary - In the implementation block
@property (assign,nonatomic) unsigned backgroundTaskIdentifier;                                        //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
-(void)_synchronizeIfNeeded;
-(void)setUserDefaultsHelper:(id<UIFoundationGlobalUserDefaultsHelper>)arg1 ;
-(void)setUserDefaultsDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userDefaultsDictionary;
-(void)loadDefaultsDictionaryIfNeeded;
-(void)_scheduleSynchronization;
-(id)_userDefaultsHelperCreateIfNeeded;
-(void)loadDefaultsDictionary;
-(id<UIFoundationGlobalUserDefaultsHelper>)userDefaultsHelper;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)synchronize;
-(void)setBackgroundTaskIdentifier:(unsigned)arg1 ;
-(unsigned)backgroundTaskIdentifier;
@end

