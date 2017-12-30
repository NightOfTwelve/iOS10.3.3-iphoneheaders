/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IDSHomeKitCloudRelayUserAccessTokensMessage : FTIDSMessage <NSCopying> {

	NSString* _subService;
	NSString* _serviceUserID;
	NSString* _userID;
	NSString* _userHandle;
	NSArray* _accessoryRequests;
	NSArray* _responseAccessTokens;

}

@property (copy) NSString * subService;                       //@synthesize subService=_subService - In the implementation block
@property (copy) NSString * serviceUserID;                    //@synthesize serviceUserID=_serviceUserID - In the implementation block
@property (copy) NSString * userID;                           //@synthesize userID=_userID - In the implementation block
@property (copy) NSString * userHandle;                       //@synthesize userHandle=_userHandle - In the implementation block
@property (copy) NSArray * accessoryRequests;                 //@synthesize accessoryRequests=_accessoryRequests - In the implementation block
@property (copy) NSArray * responseAccessTokens;              //@synthesize responseAccessTokens=_responseAccessTokens - In the implementation block
-(void)setServiceUserID:(NSString *)arg1 ;
-(void)setUserHandle:(NSString *)arg1 ;
-(void)setAccessoryRequests:(NSArray *)arg1 ;
-(NSArray *)responseAccessTokens;
-(NSString *)serviceUserID;
-(NSString *)userHandle;
-(NSArray *)accessoryRequests;
-(void)setResponseAccessTokens:(NSArray *)arg1 ;
-(id)messageBody;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subService;
-(id)additionalMessageHeaders;
-(void)setSubService:(NSString *)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end
