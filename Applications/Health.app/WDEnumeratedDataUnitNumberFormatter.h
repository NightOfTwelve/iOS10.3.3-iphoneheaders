/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKNumberFormatter.h>

@class NSDictionary, NSString;

@interface WDEnumeratedDataUnitNumberFormatter : NSObject <HKNumberFormatter> {

	NSDictionary* _valueLabels;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataUnit:(id)arg1 ;
-(char)returnsUnitWithValueForDisplay;
-(id)stringFromNumber:(id)arg1 dataUnit:(id)arg2 unitController:(id)arg3 ;
@end

