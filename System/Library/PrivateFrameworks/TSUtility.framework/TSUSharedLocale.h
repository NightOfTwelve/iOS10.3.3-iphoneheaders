/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:48 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSArray;

@interface TSUSharedLocale : NSObject {

	CFLocaleRef mCurrentLocale;
	NSArray* mObserverObjects;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedLocale;
-(id)init;
-(oneway void)release;
-(void)dealloc;
-(id)retain;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFLocaleRef)currentLocale;
-(void)datePreferencesChanged:(id)arg1 ;
@end

