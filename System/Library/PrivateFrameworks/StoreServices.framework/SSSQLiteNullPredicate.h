/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate <NSCopying> {

	char _matchesNull;

}

@property (nonatomic,readonly) char matchesNull;              //@synthesize matchesNull=_matchesNull - In the implementation block
+(id)isNullPredicateWithProperty:(id)arg1 ;
+(id)isNotNullPredicateWithProperty:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(char)matchesNull;
@end

