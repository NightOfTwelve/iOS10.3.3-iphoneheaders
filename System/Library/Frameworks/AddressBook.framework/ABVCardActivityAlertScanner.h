/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABVCardActivityAlertScanner : NSObject {

	NSString* _string;
	unsigned _position;

}
+(id)scannerWithString:(id)arg1 ;
+(char)characterIsStringValueCharacter:(unsigned short)arg1 ;
+(id)scanAlertValueFromString:(id)arg1 ;
-(void)dealloc;
-(unsigned)position;
-(id)initWithString:(id)arg1 ;
-(id)scanAlertValue;
-(id)scanKeyValuePair;
-(char)scanPastItemDelimiter;
-(id)scanStringValue;
-(char)scanPastKeyValueSeparator;
-(unsigned short)nextUnescapedCharacter;
-(id)scanQuotedStringValue;
-(id)scanUnquotedStringValue;
-(unsigned short)scanCharacter;
-(char)scanPastCharacter:(unsigned short)arg1 ;
-(unsigned short)scanCharacterWithEscaping:(char)arg1 ;
-(void)scanPastWhitespace;
-(char)atEnd;
-(unsigned short)nextCharacter;
@end

