/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface PIDMapTable : NSObject {

	NSMapTable* _map;

}
+(id)strongObjectsMapTable;
+(id)weakObjectsMapTable;
-(id)objectForPID:(long long)arg1 ;
-(id)_initWithMapTable:(id)arg1 ;
-(void)removeObjectForPID:(long long)arg1 ;
-(void)setObject:(id)arg1 forPID:(long long)arg2 ;
-(id)description;
-(id)allObjects;
-(id)objectEnumerator;
@end

