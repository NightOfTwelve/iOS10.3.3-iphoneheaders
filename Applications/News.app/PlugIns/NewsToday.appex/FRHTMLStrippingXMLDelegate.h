/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableArray, NSString;

@interface FRHTMLStrippingXMLDelegate : NSObject <NSXMLParserDelegate> {

	NSMutableArray* _strings;

}

@property (nonatomic,retain) NSMutableArray * strings;                 //@synthesize strings=_strings - In the implementation block
@property (nonatomic,readonly) NSString * strippedString; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)strippedString;
-(id)init;
-(NSMutableArray *)strings;
-(void)setStrings:(NSMutableArray *)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
@end
