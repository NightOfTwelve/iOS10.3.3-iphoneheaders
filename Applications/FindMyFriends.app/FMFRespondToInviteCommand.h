/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSString;

@interface FMFRespondToInviteCommand : FMFBaseCmd {

	char _accepted;
	char _ignoreResponse;
	NSString* _friendLongDisplayName;
	NSString* _friendRequestId;

}

@property (nonatomic,copy) NSString * friendRequestId;                    //@synthesize friendRequestId=_friendRequestId - In the implementation block
@property (nonatomic,copy) NSString * friendLongDisplayName;              //@synthesize friendLongDisplayName=_friendLongDisplayName - In the implementation block
@property (assign,nonatomic) char accepted;                               //@synthesize accepted=_accepted - In the implementation block
@property (assign,nonatomic) char ignoreResponse;                         //@synthesize ignoreResponse=_ignoreResponse - In the implementation block
-(id)willSucceedNotification;
-(id)willFailNotification;
-(char)isFireAndForget;
-(id)customCommandNotification;
-(id)didSucceedNotification;
-(id)didFailNotification;
-(id)pathSuffix;
-(id)initWithFriendRequestId:(id)arg1 longDisplayName:(id)arg2 inviteAccepted:(char)arg3 ignoreResponse:(char)arg4 ;
-(void)setFriendRequestId:(NSString *)arg1 ;
-(void)setFriendLongDisplayName:(NSString *)arg1 ;
-(NSString *)friendRequestId;
-(id)initWithFriendRequestId:(id)arg1 longDisplayName:(id)arg2 inviteAccepted:(char)arg3 ;
-(NSString *)friendLongDisplayName;
-(char)ignoreResponse;
-(void)setIgnoreResponse:(char)arg1 ;
-(void)setAccepted:(char)arg1 ;
-(char)accepted;
-(id)jsonBodyDictionary;
@end
