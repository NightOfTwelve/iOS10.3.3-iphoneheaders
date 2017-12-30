/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMAutomaticHistoryDeletionAgent.app/IMAutomaticHistoryDeletionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface IMHProcessedResponse : NSObject <NSSecureCoding> {

	NSDictionary* _deltaMap;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain) NSDictionary * deltaMap;              //@synthesize deltaMap=_deltaMap - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(char)supportsSecureCoding;
-(NSDictionary *)deltaMap;
-(void)setDeltaMap:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
@end
