/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@class NSString;

@interface NSNumber : NSValue

@property (readonly) SCD_Struct_NS46 decimalValue; 
@property (readonly) char charValue; 
@property (readonly) unsigned char unsignedCharValue; 
@property (readonly) short shortValue; 
@property (readonly) unsigned short unsignedShortValue; 
@property (readonly) int intValue; 
@property (readonly) unsigned unsignedIntValue; 
@property (readonly) long longValue; 
@property (readonly) unsigned long unsignedLongValue; 
@property (readonly) long long longLongValue; 
@property (readonly) unsigned long long unsignedLongLongValue; 
@property (readonly) float floatValue; 
@property (readonly) double doubleValue; 
@property (readonly) char boolValue; 
@property (readonly) int integerValue; 
@property (readonly) unsigned unsignedIntegerValue; 
@property (copy,readonly) NSString * stringValue; 
+(id)numberWithDouble:(double)arg1 ;
+(id)numberWithInteger:(int)arg1 ;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithBool:(char)arg1 ;
+(id)numberWithLong:(long)arg1 ;
+(id)numberWithFloat:(float)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(id)numberWithChar:(char)arg1 ;
+(id)numberWithUnsignedLong:(unsigned long)arg1 ;
+(id)numberWithUnsignedLongLong:(unsigned long long)arg1 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(char)supportsSecureCoding;
+(id)numberWithUnsignedShort:(unsigned short)arg1 ;
+(id)numberWithUnsignedChar:(unsigned char)arg1 ;
+(id)numberWithShort:(short)arg1 ;
-(unsigned long)_cfTypeID;
-(long)_cfNumberType;
-(unsigned char)_getValue:(void*)arg1 forType:(long)arg2 ;
-(int)_reverseCompare:(id)arg1 ;
-(char)_allowsDirectEncoding;
-(id)initWithChar:(char)arg1 ;
-(id)initWithUnsignedChar:(unsigned char)arg1 ;
-(id)initWithShort:(short)arg1 ;
-(id)initWithUnsignedShort:(unsigned short)arg1 ;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)integerValue;
-(double)doubleValue;
-(int)compare:(id)arg1 ;
-(char)boolValue;
-(int)intValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithLong:(long)arg1 ;
-(float)floatValue;
-(unsigned)unsignedIntegerValue;
-(unsigned long)unsignedLongValue;
-(unsigned)unsignedIntValue;
-(NSString *)stringValue;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(id)initWithBool:(char)arg1 ;
-(id)initWithUnsignedInt:(unsigned)arg1 ;
-(id)initWithUnsignedLongLong:(unsigned long long)arg1 ;
-(id)initWithDouble:(double)arg1 ;
-(char)isNSNumber__;
-(id)descriptionWithLocale:(id)arg1 ;
-(long)longValue;
-(id)initWithUnsignedInteger:(unsigned)arg1 ;
-(id)initWithLongLong:(long long)arg1 ;
-(id)initWithInteger:(int)arg1 ;
-(id)initWithFloat:(float)arg1 ;
-(short)shortValue;
-(char)isEqualToNumber:(id)arg1 ;
-(id)initWithInt:(int)arg1 ;
-(id)initWithUnsignedLong:(unsigned long)arg1 ;
-(SCD_Struct_NS46)decimalValue;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(unsigned short)unsignedShortValue;
@end

