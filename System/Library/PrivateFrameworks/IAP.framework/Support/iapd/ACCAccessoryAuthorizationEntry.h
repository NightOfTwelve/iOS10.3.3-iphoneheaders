/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ACCAccessoryAuthorizationEntry : NSObject {

	char _authorized;
	NSString* _certSerialString;
	NSString* _displayName;

}

@property (nonatomic,retain) NSString * certSerialString;              //@synthesize certSerialString=_certSerialString - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) char authorized;                          //@synthesize authorized=_authorized - In the implementation block
-(NSString *)certSerialString;
-(void)setCertSerialString:(NSString *)arg1 ;
-(void)setAuthorized:(char)arg1 ;
-(id)init;
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(char)authorized;
@end
