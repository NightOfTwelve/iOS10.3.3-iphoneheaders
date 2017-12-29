/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface NSMutableArray : NSArray
+(id)arrayWithCapacity:(unsigned)arg1 ;
-(void)filterUsingPredicate:(id)arg1 ;
-(void)sortUsingDescriptors:(id)arg1 ;
-(void)removeObjectsFromIndices:(unsigned*)arg1 numIndices:(unsigned)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)_mutate;
-(void)insertObjectsFromArray:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned)arg3 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned)arg3 ;
-(void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inSet:(id)arg2 ;
-(void)removeObjectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)removeObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)replaceObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromSet:(id)arg2 ;
-(void)sortUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeLastObject;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)removeObjectIdenticalTo:(id)arg1 ;
-(void)sortUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)sortWithOptions:(unsigned)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned)arg1 withObjectAtIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)setArray:(id)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)setSet:(id)arg1 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeFirstObject;
-(void)setObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectsInSet:(id)arg1 ;
@end
