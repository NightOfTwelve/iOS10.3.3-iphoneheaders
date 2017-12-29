/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <FindMyFriends/FMFPerson.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <FindMyFriends/FMFMatchesMapSearchProtocol.h>

@class NSTimer, FMFMapAnnotation, FMFFollower, NSString, FMFAccount, FMFClientLocation, NSSet, NSNumber, NSArray;

@interface FMFFriend : FMFPerson <NSCopying, FMFMatchesMapSearchProtocol> {

	char isFirstAutoDeepLocateComplete;
	char _etaChecked;
	char _observersAdded;
	char _isDeletingFriend;
	int locateInProgress;
	NSTimer* locateInProgressTimer;
	FMFMapAnnotation* annotation;
	FMFFollower* thisFriendAsFollower;
	NSString* _eta;
	NSString* cachedTimeLabelValue;
	NSString* cachedDistanceLabelValue;

}

@property (nonatomic,retain) NSTimer * locateInProgressTimer; 
@property (assign,nonatomic) char etaChecked;                                        //@synthesize etaChecked=_etaChecked - In the implementation block
@property (assign,nonatomic) char observersAdded;                                    //@synthesize observersAdded=_observersAdded - In the implementation block
@property (assign,nonatomic,__weak) FMFFollower * thisFriendAsFollower; 
@property (nonatomic,retain) FMFAccount * account; 
@property (nonatomic,retain) FMFClientLocation * location; 
@property (nonatomic,retain) NSSet * eventFriends; 
@property (nonatomic,retain) NSSet * fences; 
@property (nonatomic,retain) NSSet * labelledLocations; 
@property (nonatomic,retain) NSString * uid; 
@property (nonatomic,retain) NSNumber * onlyInEvent; 
@property (nonatomic,retain) NSArray * invitationFromHandles; 
@property (nonatomic,retain) NSArray * invitationAcceptedHandles; 
@property (assign,nonatomic) int locateInProgress; 
@property (assign,nonatomic) char isFirstAutoDeepLocateComplete; 
@property (assign,nonatomic) char offerBackHandled; 
@property (nonatomic,readonly) char isUserLocateAllowed; 
@property (nonatomic,readonly) char canAutoDeepLocate; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,retain) FMFMapAnnotation * annotation; 
@property (assign,nonatomic) NSNumber * order; 
@property (assign,nonatomic) char isDeletingFriend;                                  //@synthesize isDeletingFriend=_isDeletingFriend - In the implementation block
@property (nonatomic,copy) NSString * cachedTimeLabelValue; 
@property (nonatomic,copy) NSString * cachedDistanceLabelValue; 
@property (nonatomic,retain) NSString * eta;                                         //@synthesize eta=_eta - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)friendWithId:(id)arg1 ;
+(id)friendOrFutureFriendWithPersonId:(id)arg1 ;
+(id)friendWithPersonId:(id)arg1 ;
+(id)friendOrFutureFriendWithId:(id)arg1 ;
+(id)friendWithEmail:(id)arg1 ;
-(id)fallbackHandles;
-(id)contactSearchKey;
-(id)locationUpdateDescriptionLabel;
-(id)friendsCurrentLocationLabel;
-(void)initalizeTransients;
-(void)resetETA;
-(void)clearETA;
-(char)matchesMapSearchString:(id)arg1 ;
-(id)mapSearchTitle;
-(id)mapSearchLocationLabel;
-(id)mapSearchLocationAddress;
-(int)mapSearchLocationAddressType;
-(int)locateInProgress;
-(NSString *)cachedTimeLabelValue;
-(NSString *)cachedDistanceLabelValue;
-(void)setCachedTimeLabelValue:(NSString *)arg1 ;
-(void)setCachedDistanceLabelValue:(NSString *)arg1 ;
-(char)hasFenceSet;
-(char)isUserLocateAllowed;
-(void)updateLocateInProgress:(int)arg1 ;
-(char)canAutoDeepLocate;
-(void)setIsImageGenerated:(char)arg1 ;
-(void)setThisFriendAsFollower:(FMFFollower *)arg1 ;
-(NSTimer *)locateInProgressTimer;
-(void)setLocateInProgressTimer:(NSTimer *)arg1 ;
-(void)resetFriendAsFollower;
-(void)didUpdateLocation:(id)arg1 ;
-(void)setObserversAdded:(char)arg1 ;
-(char)observersAdded;
-(void)setLocateInProgress:(int)arg1 ;
-(FMFFollower *)thisFriendAsFollower;
-(void)loadETA;
-(void)setEtaChecked:(char)arg1 ;
-(id)timeDisplayForInterval:(double)arg1 ;
-(id)_locationDescriptionAndAgeForLocation:(id)arg1 age:(id)arg2 ;
-(id)locationUpdateStatus;
-(char)displayShareOptions;
-(id)friendAsFollower;
-(char)isAlsoAPermanentFriend;
-(id)friendInMainList;
-(id)onFence;
-(id)eventsFriendIsIn;
-(id)locationDescriptionAndAge;
-(id)locationDescriptionAndAgeAccessibilty;
-(char)isFirstAutoDeepLocateComplete;
-(void)setIsFirstAutoDeepLocateComplete:(char)arg1 ;
-(char)etaChecked;
-(char)isDeletingFriend;
-(void)setIsDeletingFriend:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)distance;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(FMFMapAnnotation *)annotation;
-(void)setAnnotation:(FMFMapAnnotation *)arg1 ;
-(char)hasLocation;
-(NSString *)eta;
-(void)setEta:(NSString *)arg1 ;
-(void)prepareForDeletion;
-(void)didTurnIntoFault;
-(void)clearFavoriteOrder;
-(void)resetLocateInProgressTimer;
-(void)resetLocateInProgress:(id)arg1 ;
@end
