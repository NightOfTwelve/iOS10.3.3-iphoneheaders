/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <Preferences/PSListController.h>

@class NPSManager, NPSDomainAccessor;

@interface COSDNDController : PSListController {

	NPSManager* _npsManager;
	CFDateFormatterRef _timeFormatter;
	NPSDomainAccessor* _domainAccessor;

}

@property (nonatomic,retain) NPSManager * npsManager;                         //@synthesize npsManager=_npsManager - In the implementation block
@property (assign,nonatomic) CFDateFormatterRef timeFormatter;                //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
-(void)setDoNotDisturbMirrorState:(id)arg1 specifier:(id)arg2 ;
-(id)doNotDisturbMirrorState:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CFDateFormatterRef)timeFormatter;
-(void)setTimeFormatter:(CFDateFormatterRef)arg1 ;
-(NPSManager *)npsManager;
-(void)setNpsManager:(NPSManager *)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)specifiers;
@end

