/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	char _primary;

}
-(void)dealloc;
-(id)description;
-(id)name;
-(id)types;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setIsPrimary:(char)arg1 ;
-(void)addType:(id)arg1 ;
-(char)isPrimary;
-(id)grouping;
-(void)finalize;
-(void)setGrouping:(id)arg1 ;
-(void)addTypes:(id)arg1 ;
@end
