/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFPerson.h>

@class NSNumber, NSString, FMFAccount;

@interface FMFFutureFriend : FMFPerson

@property (nonatomic,retain) NSNumber * lastModifiedDate; 
@property (nonatomic,retain) NSString * invitationSentToHandle; 
@property (nonatomic,retain) NSString * uid; 
@property (nonatomic,retain) NSString * personId; 
@property (nonatomic,retain) FMFAccount * account; 
@property (assign,nonatomic) NSNumber * order; 
+(id)futureFriendWithPersonId:(id)arg1 ;
-(char)onlyInEvent;
-(id)fallbackHandles;
-(id)contactSearchKey;
-(id)locationUpdateDescriptionLabel;
-(id)prettyTimestampDescription;
-(int)locateInProgress;
-(char)hasFenceSet;
-(char)isUserLocateAllowed;
-(char)canAutoDeepLocate;
-(char)isAlsoAPermanentFriend;
-(char)isFirstAutoDeepLocateComplete;
-(id)location;
-(id)annotation;
-(char)hasLocation;
-(void)prepareForDeletion;
-(void)clearFavoriteOrder;
@end
