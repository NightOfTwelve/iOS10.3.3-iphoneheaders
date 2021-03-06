/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IDSHomeKitCloudRelayConsentTokensMessage : FTIDSMessage <NSCopying> {

	NSString* _subService;
	NSString* _serviceUserID;
	NSArray* _accessoryIDs;
	NSString* _adminID;
	NSString* _expiry;
	NSArray* responseConsentTokens;
	NSArray* _responseConsentTokens;

}

@property (copy) NSString * subService;                        //@synthesize subService=_subService - In the implementation block
@property (copy) NSString * serviceUserID;                     //@synthesize serviceUserID=_serviceUserID - In the implementation block
@property (copy) NSArray * accessoryIDs;                       //@synthesize accessoryIDs=_accessoryIDs - In the implementation block
@property (copy) NSString * adminID;                           //@synthesize adminID=_adminID - In the implementation block
@property (copy) NSString * expiry;                            //@synthesize expiry=_expiry - In the implementation block
@property (copy) NSArray * responseConsentTokens;              //@synthesize responseConsentTokens=_responseConsentTokens - In the implementation block
-(void)setServiceUserID:(NSString *)arg1 ;
-(void)setAdminID:(NSString *)arg1 ;
-(void)setAccessoryIDs:(NSArray *)arg1 ;
-(NSArray *)responseConsentTokens;
-(NSString *)serviceUserID;
-(NSArray *)accessoryIDs;
-(NSString *)adminID;
-(void)setResponseConsentTokens:(NSArray *)arg1 ;
-(id)messageBody;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subService;
-(id)additionalMessageHeaders;
-(void)setSubService:(NSString *)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setExpiry:(NSString *)arg1 ;
-(NSString *)expiry;
-(id)bagKey;
@end

