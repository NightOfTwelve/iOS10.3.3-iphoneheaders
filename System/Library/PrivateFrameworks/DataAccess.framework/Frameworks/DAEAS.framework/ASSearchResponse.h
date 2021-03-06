/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASSearchResponse : ASItem {

	NSArray* _stores;
	NSNumber* _status;
	int _expectedResultType;

}

@property (nonatomic,retain) NSArray * stores;                    //@synthesize stores=_stores - In the implementation block
@property (nonatomic,copy) NSNumber * status;                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int expectedResultType;              //@synthesize expectedResultType=_expectedResultType - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSArray *)stores;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setStores:(NSArray *)arg1 ;
-(int)expectedResultType;
-(void)setExpectedResultType:(int)arg1 ;
@end

