/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSRestrictionsService : NSObject {

	char _disableService;
	NSString* _name;

}

@property (assign) char disableService;              //@synthesize disableService=_disableService - In the implementation block
@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)disableService;
-(void)setDisableService:(char)arg1 ;
@end
