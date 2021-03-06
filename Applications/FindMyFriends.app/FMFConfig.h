/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFEntity.h>

@class NSNumber, FMFAccount;

@interface FMFConfig : FMFEntity

@property (nonatomic,retain) NSNumber * accuracyThresholdForLabeling; 
@property (nonatomic,retain) NSNumber * myLocationMinInterval; 
@property (nonatomic,retain) NSNumber * myLocationMaxInterval; 
@property (nonatomic,retain) NSNumber * locationTimeToLive; 
@property (nonatomic,retain) NSNumber * maxLocatingInterval; 
@property (nonatomic,retain) NSNumber * locationValidityDuration; 
@property (nonatomic,retain) NSNumber * sessionLifespan; 
@property (nonatomic,retain) NSNumber * oldLocationInterval; 
@property (nonatomic,retain) FMFAccount * account; 
@property (nonatomic,retain) NSNumber * maxFriends; 
@property (nonatomic,retain) NSNumber * maxFollowers; 
@property (nonatomic,retain) NSNumber * maxEvents; 
@property (nonatomic,retain) NSNumber * maxInEvent; 
@property (nonatomic,retain) NSNumber * maxInvites; 
@property (nonatomic,retain) NSNumber * maxLabels; 
@property (nonatomic,retain) NSNumber * maxMyLabelledLocations; 
@property (nonatomic,retain) NSNumber * maxFriendsLabelledLocations; 
@property (nonatomic,retain) NSNumber * maxPeopleInOfferLocation; 
@property (nonatomic,retain) NSNumber * maxNotifyOtherFences; 
@property (nonatomic,retain) NSNumber * maxPeopleInNotifyOtherFence; 
@property (nonatomic,retain) NSNumber * lastModifiedDate; 
@property (nonatomic,retain) NSNumber * eventExpiryDefaultInSec; 
@property (nonatomic,retain) NSNumber * eventExpiryMaxInSec; 
@property (nonatomic,retain) NSNumber * maxCharLimitForInviteText; 
@property (nonatomic,retain) NSNumber * maxCharLimitForLabelName; 
@property (nonatomic,retain) NSNumber * maxCharLimitForEventName; 
@property (nonatomic,retain) NSNumber * maxTriesToRegisterDevice; 
@property (nonatomic,retain) NSNumber * maxWaitTimeForRegister; 
@property (nonatomic,retain) NSNumber * distanceForNearbyInMeters; 
@property (nonatomic,retain) NSNumber * minAccuracyForMyLocation; 
@property (nonatomic,retain) NSNumber * locationShareExpiryDefaultInSec; 
@property (nonatomic,retain) NSNumber * notifyMeFenceStaleAfterMinutes; 
@property (nonatomic,retain) NSNumber * barONOverride; 
@property (nonatomic,retain) NSNumber * backgroundRefreshTimeInterval; 
@property (nonatomic,retain) NSNumber * backgroundLocateEnabled; 
@property (nonatomic,retain) NSNumber * backgroundLocateDesiredAccuracy; 
@property (nonatomic,retain) NSNumber * backgroundLocateWorstAcceptedAccuracy; 
@property (nonatomic,retain) NSNumber * backgroundLocateMaxLocateTimeInterval; 
@property (nonatomic,retain) NSNumber * backgroundLocateBufferTimeInterval; 
@property (nonatomic,retain) NSNumber * backgroundLocateValidityDuration; 
@property (assign,nonatomic) char allowMigration; 
@property (nonatomic,retain) NSNumber * familyPhotoCheckIntervalInSecs; 
@property (assign,nonatomic) char phoneNumbersAllowedInNotifyOthers; 
-(void)prepareForDeletion;
@end

