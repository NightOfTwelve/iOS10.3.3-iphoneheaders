/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Social.assistantBundle/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <Social/SLAssistantServiceHandler.h>

@protocol SLAssistantPostDelegate;
@class SADomainObjectCommit, ACAccountStore, ACAccount, CLLocationManager, CLLocation, NSString;

@interface SLAssistantPost : NSObject <CLLocationManagerDelegate, SLAssistantServiceHandler> {

	id<SLAssistantPostDelegate> _delegate;
	SADomainObjectCommit* _object;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	CLLocationManager* _locationManager;
	CLLocation* _bestLocation;
	char _checkedForAccount;
	char _updatingLocation;
	char _shouldRetry;
	int _remainingRetryCount;
	/*^block*/id _locationAcquiredHandler;
	char _awaitingAccountCredentialVerification;
	char _accountCredentialsVerified;
	char _awaitingLocationSettingStatus;
	char _locationSettingAllowed;
	char _assistantWantsLocation;

}

@property (assign) id<SLAssistantPostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationPermissionBundleForSiri;
-(void)_stopRetrying;
-(void)_cleanupLocationServices;
-(void)performPostRequestWithObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performCreateWithObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishedPostRequest:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 responseData:(id)arg3 urlResponse:(id)arg4 error:(id)arg5 ;
-(void)_attemptPostRequest:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_checkLocationAndAccountsForObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_makeLocationSwitchVisible;
-(void)_setLocationWithLatitude:(float)arg1 longitude:(float)arg2 ;
-(void)initializeLocationSearch;
-(void)_createAndExecutePostRequestWithStatus:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_checkAccountGeoTagStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)waitUntilLocationAcquiredOrTimeElapsed:(float)arg1 andExecute:(/*^block*/id)arg2 ;
-(void)_processResponseFromServiceWithHandler:(/*^block*/id)arg1 ;
-(void)_checkAccountCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_shouldInitializeLocationSearch;
-(void)_stopUpdatingLocation;
-(void)_callLocationAcquiredHandler;
-(void)setDelegate:(id<SLAssistantPostDelegate>)arg1 ;
-(void)dealloc;
-(id<SLAssistantPostDelegate>)delegate;
-(id)accountStore;
-(id)account;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
@end

