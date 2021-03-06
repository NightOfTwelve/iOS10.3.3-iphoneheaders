/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iaptransportd/iaptransportd-Structs.h>
#import <iaptransportd/CRCarPlayPreferencesDelegate.h>

@class CRCarPlayPreferences, NSString;

@interface IAPCarPlayConnectionObserver : NSObject <CRCarPlayPreferencesDelegate> {

	char _isStarkPossibleByCarPlaySettings;
	CRCarPlayPreferences* _carPreferences;
	CIapPortIOKit* _parentUSBPort;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPort:(CIapPortIOKit*)arg1 ;
-(void)handleCarPlayAllowedDidChange;
@end

