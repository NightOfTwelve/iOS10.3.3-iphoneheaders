/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RestaurantReservationRequesterDelegate.h>

@protocol PlaceCardExtensionControllerDelegate;
@class _MXExtension, RestaurantReservationRequester, INRestaurantReservationUserBooking, NSUserActivity, SSLookupItem, MKMapItem, NSNumberFormatter, RestaurantReservationAnalyticsBookingSession, NSString;

@interface PlaceCardExtensionController : NSObject <RestaurantReservationRequesterDelegate> {

	char _shouldUpdateSecondaryButton;
	char _extensionDiscoveryCompleted;
	char _activeEventDiscoveryCompleted;
	char _appDiscoveryCompleted;
	unsigned _extensionType;
	id<PlaceCardExtensionControllerDelegate> _delegate;
	unsigned _extensionMode;
	_MXExtension* _extension;
	RestaurantReservationRequester* _restaurantReservationRequester;
	INRestaurantReservationUserBooking* _activeRestaurantUserBooking;
	NSUserActivity* _activeRestaurantUserBookingActivity;
	SSLookupItem* _appItem;
	/*^block*/id _actionButtonUpdateBlock;
	MKMapItem* _mapItem;
	NSNumberFormatter* _numberFormatter;
	RestaurantReservationAnalyticsBookingSession* _activeBookingSession;

}

@property (assign,nonatomic) char shouldUpdateSecondaryButton;                                                 //@synthesize shouldUpdateSecondaryButton=_shouldUpdateSecondaryButton - In the implementation block
@property (assign,nonatomic) char extensionDiscoveryCompleted;                                                 //@synthesize extensionDiscoveryCompleted=_extensionDiscoveryCompleted - In the implementation block
@property (assign,nonatomic) unsigned extensionType;                                                           //@synthesize extensionType=_extensionType - In the implementation block
@property (assign,nonatomic) unsigned extensionMode;                                                           //@synthesize extensionMode=_extensionMode - In the implementation block
@property (nonatomic,retain) _MXExtension * extension;                                                         //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) RestaurantReservationRequester * restaurantReservationRequester;                  //@synthesize restaurantReservationRequester=_restaurantReservationRequester - In the implementation block
@property (assign,nonatomic) char activeEventDiscoveryCompleted;                                               //@synthesize activeEventDiscoveryCompleted=_activeEventDiscoveryCompleted - In the implementation block
@property (nonatomic,retain) INRestaurantReservationUserBooking * activeRestaurantUserBooking;                 //@synthesize activeRestaurantUserBooking=_activeRestaurantUserBooking - In the implementation block
@property (nonatomic,retain) NSUserActivity * activeRestaurantUserBookingActivity;                             //@synthesize activeRestaurantUserBookingActivity=_activeRestaurantUserBookingActivity - In the implementation block
@property (assign,nonatomic) char appDiscoveryCompleted;                                                       //@synthesize appDiscoveryCompleted=_appDiscoveryCompleted - In the implementation block
@property (nonatomic,retain) SSLookupItem * appItem;                                                           //@synthesize appItem=_appItem - In the implementation block
@property (nonatomic,copy) id actionButtonUpdateBlock;                                                         //@synthesize actionButtonUpdateBlock=_actionButtonUpdateBlock - In the implementation block
@property (assign,nonatomic,__weak) MKMapItem * mapItem;                                                       //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                                              //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) RestaurantReservationAnalyticsBookingSession * activeBookingSession;              //@synthesize activeBookingSession=_activeBookingSession - In the implementation block
@property (assign,nonatomic,__weak) id<PlaceCardExtensionControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char hasActiveRestaurantUserBooking; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requesterReservationDefaultsRequestDidComplete:(id)arg1 ;
-(void)requesterUserCurrentBookingRequestDidComplete:(id)arg1 ;
-(void)requester:(id)arg1 userCurrentBookingRequestDidFailWithError:(id)arg2 ;
-(id)initWithMapItem:(id)arg1 actionButtonUpdateBlock:(/*^block*/id)arg2 delegate:(id)arg3 ;
-(id)controllerForSecondaryAction;
-(void)setNeedsUpdateSecondaryButton;
-(char)hasActiveRestaurantUserBooking;
-(char)shouldPresentExtensionPermission;
-(char)shouldPresentReservationFlow;
-(char)shouldPresentAppSheet;
-(id)reservationControllerToPresent;
-(id)alertControllerForExtensionPermission;
-(id)alertControllerForAppInstall;
-(RestaurantReservationAnalyticsBookingSession *)activeBookingSession;
-(id)_createBookingSession;
-(void)_updateActiveBookingSession;
-(id)reservationExtensionFlowViewController;
-(void)setExtensionDiscoveryCompleted:(char)arg1 ;
-(void)setActiveEventDiscoveryCompleted:(char)arg1 ;
-(void)setActiveRestaurantUserBooking:(INRestaurantReservationUserBooking *)arg1 ;
-(void)setAppDiscoveryCompleted:(char)arg1 ;
-(RestaurantReservationRequester *)restaurantReservationRequester;
-(void)updateSecondaryButton;
-(void)updateSecondaryButtonForType:(unsigned)arg1 ;
-(void)updateSecondaryButtonForActiveRestaurantReservation:(id)arg1 ;
-(void)discoverExtension;
-(char)hasActiveEvent;
-(void)discoverActiveEvent;
-(void)discoverDefaults;
-(void)discoverAvailableBookings;
-(void)discoverGuest;
-(void)discoverActiveReservationEvents;
-(void)discoverApp;
-(id)debugAppDiscoveryIdentifierForIdentifier:(id)arg1 ;
-(unsigned)extensionType;
-(void)setExtensionType:(unsigned)arg1 ;
-(char)shouldUpdateSecondaryButton;
-(void)setShouldUpdateSecondaryButton:(char)arg1 ;
-(char)extensionDiscoveryCompleted;
-(unsigned)extensionMode;
-(void)setExtensionMode:(unsigned)arg1 ;
-(void)setRestaurantReservationRequester:(RestaurantReservationRequester *)arg1 ;
-(char)activeEventDiscoveryCompleted;
-(INRestaurantReservationUserBooking *)activeRestaurantUserBooking;
-(NSUserActivity *)activeRestaurantUserBookingActivity;
-(void)setActiveRestaurantUserBookingActivity:(NSUserActivity *)arg1 ;
-(char)appDiscoveryCompleted;
-(SSLookupItem *)appItem;
-(void)setAppItem:(SSLookupItem *)arg1 ;
-(id)actionButtonUpdateBlock;
-(void)setActionButtonUpdateBlock:(id)arg1 ;
-(void)setActiveBookingSession:(RestaurantReservationAnalyticsBookingSession *)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(void)setDelegate:(id<PlaceCardExtensionControllerDelegate>)arg1 ;
-(id<PlaceCardExtensionControllerDelegate>)delegate;
-(_MXExtension *)extension;
-(void)setExtension:(_MXExtension *)arg1 ;
-(id)lookupPolicy;
-(void)updateType;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
@end

