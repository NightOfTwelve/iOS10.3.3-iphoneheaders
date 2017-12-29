/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSPointerFunctions, NSArray, NSSet;

@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (readonly) unsigned count; 
@property (copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id anyObject; 
@property (copy,readonly) NSSet * setRepresentation; 
+(id)hashTableWithWeakObjects;
+(id)alloc;
+(id)weakObjectsHashTable;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)hashTableWithOptions:(unsigned)arg1 ;
-(NSPointerFunctions *)pointerFunctions;
-(void*)getItem:(const void*)arg1 ;
-(unsigned)weakCount;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned*)arg2 ;
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned)arg2 ;
-(char)intersectsHashTable:(id)arg1 ;
-(char)isEqualToHashTable:(id)arg1 ;
-(char)isSubsetOfHashTable:(id)arg1 ;
-(void)intersectHashTable:(id)arg1 ;
-(void)unionHashTable:(id)arg1 ;
-(void)minusHashTable:(id)arg1 ;
-(id)mutableSet;
-(id)init;
-(id)copy;
-(id)anyObject;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)description;
-(char)containsObject:(id)arg1 ;
-(NSArray *)allObjects;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeItem:(const void*)arg1 ;
-(NSSet *)setRepresentation;
-(id)initWithOptions:(unsigned)arg1 capacity:(unsigned)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(void)removeAllItems;
@end
