/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysMappingStrategy.h>

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {

	int _cd_rc;
	void* _table;
	unsigned long _length;
	id _reserved1;
	id* _keys;

}
+(char)accessInstanceVariablesDirectly;
+(id)alloc;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
-(Class)classForArchiver;
-(id)initForKeys:(id*)arg1 count:(unsigned)arg2 ;
-(CFArrayRef)_makeBranchTableForKeys:(const char**)arg1 count:(unsigned long)arg2 ;
-(void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long)arg2 ;
-(void)_coreDealloc:(char)arg1 ;
-(oneway void)release;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)description;
-(unsigned)length;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)_isDeallocating;
-(id*)keys;
-(char)_tryRetain;
-(id)initForKeys:(id)arg1 ;
-(unsigned)indexForKey:(id)arg1 ;
-(unsigned)fastIndexForKnownKey:(id)arg1 ;
@end

