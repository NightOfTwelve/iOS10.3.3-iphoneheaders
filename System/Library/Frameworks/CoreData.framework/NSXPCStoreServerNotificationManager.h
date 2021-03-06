/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NSXPCStoreServerNotificationManager : NSObject {

	NSMutableDictionary* _generations;
	long long _origin;

}
-(void)registerStore:(id)arg1 ;
-(void)unregisterStore:(id)arg1 ;
-(void)registerContext:(id)arg1 ;
-(void)unregisterContext:(id)arg1 ;
-(id)currentGenerationTokenForStore:(id)arg1 ;
-(id)changesSinceGeneration:(id)arg1 ;
-(void)handleNotification:(id)arg1 ;
-(long long)currentGenerationForStore:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

