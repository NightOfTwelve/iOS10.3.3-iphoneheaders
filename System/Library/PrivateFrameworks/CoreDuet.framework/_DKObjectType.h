/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying> {

	int _typeCode;
	Class _objectClass;

}

@property (nonatomic,readonly) int typeCode; 
@property (nonatomic,readonly) Class objectClass; 
+(char)supportsSecureCoding;
+(id)objectTypeWithName:(id)arg1 ;
+(id)objectTypeFromClass:(Class)arg1 ;
+(id)objectTypeWithTypeCode:(int)arg1 ;
+(Class)associatedObjectClass;
+(int)typeCodeFromName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)objectClass;
-(id)initWithTypeCode:(int)arg1 objectClass:(Class)arg2 ;
-(int)typeCode;
@end

