/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSProfileUnlinkHandleMessage : IDSProfileMessage <NSCopying> {

	NSString* _uri;

}

@property (setter=setURI:,copy) NSString * URI;              //@synthesize uri=_uri - In the implementation block
-(id)messageBody;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)anisetteHeadersTimeout;
-(char)wantsSignature;
-(char)wantsBodySignature;
-(id)additionalMessageHeaders;
-(id)requiredKeys;
-(id)bagKey;
-(NSString *)URI;
-(void)setURI:(NSString *)arg1 ;
@end
