/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableDictionary, NSLock, NSNumber, NSString, NSDictionary;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {

	int _allowedRetryCount;
	char _allowsBootstrapCellularData;
	char _allowsExpiredBags;
	int _bagType;
	NSData* _clientAuditTokenData;
	NSMutableDictionary* _httpHeaders;
	char _ignoresCaches;
	NSLock* _lock;
	NSNumber* _userIdentifier;
	char _usesCachedBagsOnly;

}

@property (assign,nonatomic) char allowsBootstrapCellularData;                 //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (assign,nonatomic) char allowsExpiredBags;                           //@synthesize allowsExpiredBags=_allowsExpiredBags - In the implementation block
@property (nonatomic,retain) NSData * clientAuditTokenData;                    //@synthesize clientAuditTokenData=_clientAuditTokenData - In the implementation block
@property (nonatomic,readonly) NSString * clientBundleIdentifier; 
@property (assign,nonatomic) char usesCachedBagsOnly;                          //@synthesize usesCachedBagsOnly=_usesCachedBagsOnly - In the implementation block
@property (assign,nonatomic) int allowedRetryCount;                            //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (assign,nonatomic) int bagType;                                      //@synthesize bagType=_bagType - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) char ignoresCaches;                               //@synthesize ignoresCaches=_ignoresCaches - In the implementation block
@property (nonatomic,retain) NSNumber * userIdentifier;                        //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * allHTTPHeaders; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithBagType:(int)arg1 ;
-(char)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(char)arg1 ;
-(NSData *)clientAuditTokenData;
-(int)allowedRetryCount;
-(void)setClientAuditTokenData:(NSData *)arg1 ;
-(int)bagType;
-(NSDictionary *)allHTTPHeaders;
-(void)setAllHTTPHeaders:(NSDictionary *)arg1 ;
-(char)allowsExpiredBags;
-(void)setAllowsExpiredBags:(char)arg1 ;
-(char)ignoresCaches;
-(char)usesCachedBagsOnly;
-(void)setUsesCachedBagsOnly:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cacheKey;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setUserIdentifier:(NSNumber *)arg1 ;
-(NSString *)clientBundleIdentifier;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setBagType:(int)arg1 ;
-(void)setAllowedRetryCount:(int)arg1 ;
-(void)setIgnoresCaches:(char)arg1 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSNumber *)userIdentifier;
@end

