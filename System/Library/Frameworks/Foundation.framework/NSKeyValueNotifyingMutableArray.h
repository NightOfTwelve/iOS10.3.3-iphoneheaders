/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableArray.h>

@class NSMutableArray;

@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray {

	NSMutableArray* _mutableArray;

}
+(SCD_Struct_NS31*)_proxyNonGCPoolPointer;
+(id)_proxyShare;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeLastObject;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
@end
