/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStarkSessionConfiguring.h>

@class AVExternalDevice, FBSDisplay, UIScreen, UITraitCollection, NSString, CRVehicleInformation, CRCarPlayAppPolicyEvaluator, NSMutableDictionary, NSSet;

@interface SBStarkSessionConfiguration : NSObject <SBStarkSessionConfiguring> {

	CRVehicleInformation* _vehicleInformation;
	AVExternalDevice* _device;
	unsigned _interactionAffordances;
	int _layoutJustification;
	FBSDisplay* _display;
	UIScreen* _screen;
	float _screenScale;
	char _screenSupportsFocus;
	CGRect _screenBounds;
	UITraitCollection* _traitCollection;
	char _connectedWirelessly;
	char _knownVehicle;
	char _OEMIconVisible;
	char _pairedVehicle;
	CRCarPlayAppPolicyEvaluator* _appPolicyEvaluator;
	NSMutableDictionary* _appPolicyForBundleID;
	char _acBackSupported;
	NSString* _layoutId;

}

@property (assign,getter=isACBackSupported,nonatomic) char acBackSupported;                                      //@synthesize acBackSupported=_acBackSupported - In the implementation block
@property (assign,getter=isGeoSupported,nonatomic) char geoSupported; 
@property (assign,getter=isKnownVehicle,nonatomic) char knownVehicle; 
@property (assign,getter=isPairedVehicle,nonatomic) char pairedVehicle; 
@property (nonatomic,retain) NSString * layoutId;                                                                //@synthesize layoutId=_layoutId - In the implementation block
@property (nonatomic,retain) NSSet * simulatedAccessoryProtocols; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AVExternalDevice * device; 
@property (nonatomic,readonly) unsigned interactionAffordances; 
@property (nonatomic,readonly) int layoutJustification; 
@property (nonatomic,readonly) char screenSupportsFocus; 
@property (nonatomic,readonly) FBSDisplay * display; 
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) CGRect screenBounds; 
@property (nonatomic,readonly) float screenScale; 
@property (nonatomic,copy,readonly) UITraitCollection * traitCollection; 
@property (getter=isAmbientBrightnessNighttime,nonatomic,readonly) char ambientBrightnessNighttime; 
@property (getter=isConnectedWirelessly,nonatomic,readonly) char connectedWirelessly; 
@property (getter=isOEMIconVisible,nonatomic,readonly) char OEMIconVisible; 
+(id)configurationForSettingsLayoutWithId:(id)arg1 onScreen:(id)arg2 ;
+(id)configurationForSettingsLayoutWithId:(id)arg1 ;
-(char)isPairedVehicle;
-(id)policyForApp:(id)arg1 ;
-(unsigned)interactionAffordances;
-(int)layoutJustification;
-(char)screenSupportsFocus;
-(char)isACBackSupported;
-(char)isAmbientBrightnessNighttime;
-(char)isConnectedWirelessly;
-(char)isKnownVehicle;
-(char)isOEMIconVisible;
-(NSString *)layoutId;
-(id)initWithVehicleInformation:(id)arg1 device:(id)arg2 screen:(id)arg3 display:(id)arg4 ;
-(void)setKnownVehicle:(char)arg1 ;
-(void)setPairedVehicle:(char)arg1 ;
-(NSSet *)simulatedAccessoryProtocols;
-(void)setSimulatedAccessoryProtocols:(NSSet *)arg1 ;
-(void)setAcBackSupported:(char)arg1 ;
-(void)setLayoutId:(NSString *)arg1 ;
-(UITraitCollection *)traitCollection;
-(id)_init;
-(UIScreen *)screen;
-(FBSDisplay *)display;
-(CGRect)screenBounds;
-(float)screenScale;
-(char)isGeoSupported;
-(void)setGeoSupported:(char)arg1 ;
-(AVExternalDevice *)device;
@end
