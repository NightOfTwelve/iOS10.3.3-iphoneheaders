/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _AUStaticParameterInfo : NSObject <NSSecureCoding> {

	float _minValue;
	float _maxValue;
	unsigned long _unit;
	NSString* _unitName;
	unsigned long _flags;
	NSArray* _valueStrings;
	unsigned long _clumpID;

}

@property (assign,nonatomic) float minValue;                      //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) float maxValue;                      //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) unsigned long unit;                  //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) NSString * unitName;                 //@synthesize unitName=_unitName - In the implementation block
@property (assign,nonatomic) unsigned long flags;                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSArray * valueStrings;              //@synthesize valueStrings=_valueStrings - In the implementation block
@property (assign,nonatomic) unsigned long clumpID;               //@synthesize clumpID=_clumpID - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)unitName;
-(NSArray *)valueStrings;
-(void)setUnitName:(NSString *)arg1 ;
-(void)setValueStrings:(NSArray *)arg1 ;
-(unsigned long)clumpID;
-(void)setClumpID:(unsigned long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(float)minValue;
-(float)maxValue;
-(void)setMaxValue:(float)arg1 ;
-(void)setMinValue:(float)arg1 ;
-(unsigned long)unit;
-(void)setUnit:(unsigned long)arg1 ;
-(void)setFlags:(unsigned long)arg1 ;
-(unsigned long)flags;
@end
