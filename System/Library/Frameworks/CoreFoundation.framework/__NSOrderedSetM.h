/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSMutableArray;

@interface __NSOrderedSetM : NSMutableOrderedSet {

	unsigned _used;
	CFBasicHashRef _set;
	NSMutableArray* _array;

}
+(id)__new:(const id*)arg1 :(unsigned)arg2 :(char)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)_mutate;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS20*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned)countForObject:(id)arg1 ;
-(void)setObject:(id)arg1 atIndex:(unsigned)arg2 ;
@end

