/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
+(char)supportsSecureCoding;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(oneway void)release;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)data;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(int)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(char)isDaylightSavingTimeForDate:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)localizedName:(int)arg1 locale:(id)arg2 ;
@end

