/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InCallService/InCallService-Structs.h>
@class NSMutableSet;

@interface PHInCallUtilities : NSObject {

	char _requestedVCPresentationWithStatusBar;
	NSMutableSet* _inCallStatusBarSuppressionReasons;

}

@property (retain) NSMutableSet * inCallStatusBarSuppressionReasons;                   //@synthesize inCallStatusBarSuppressionReasons=_inCallStatusBarSuppressionReasons - In the implementation block
@property (nonatomic,readonly) char requestedVCPresentationWithStatusBar;              //@synthesize requestedVCPresentationWithStatusBar=_requestedVCPresentationWithStatusBar - In the implementation block
+(void)setSharedInstanceOverride:(id)arg1 ;
+(void)unsetSharedInstanceOverride;
+(CFPhoneNumberRef)newPhoneNumberRefForDestinationID:(id)arg1 useNetworkCountryCode:(char)arg2 ;
+(void)performBlockWithSharedInstanceOverride:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)wifiSettingsURL;
+(id)sharedInstance;
+(id)formattedPhoneNumberFromString:(id)arg1 ;
-(char)faceTimeAudioIsAvailable;
-(char)faceTimeVideoIsAvailable;
-(void)stopSuppressingInCallStatusBarForReason:(id)arg1 ;
-(void)startSuppressingInCallStatusBarForReason:(id)arg1 ;
-(char)isIPadIdiom;
-(char)isSpringBoardPasscodeLocked;
-(char)isInLostMode;
-(char)isLockScreenMessagingAllowed;
-(void)setInCallStatusBarSuppressionReasons:(NSMutableSet *)arg1 ;
-(void)updateInCallStatusBarSuppression;
-(NSMutableSet *)inCallStatusBarSuppressionReasons;
-(char)faceTimeVideoIsSupported;
-(char)faceTimeAudioIsSupported;
-(char)isSpringBoardLocked;
-(void)setRequestedVCPresentationWithStatusBar:(char)arg1 withReasonLog:(id)arg2 ;
-(char)requestedVCPresentationWithStatusBar;
-(id)init;
-(void)dealloc;
-(char)canSendText;
-(char)isAuthorizedToUseAddressBook;
-(char)isSetupAssistantRunning;
@end
