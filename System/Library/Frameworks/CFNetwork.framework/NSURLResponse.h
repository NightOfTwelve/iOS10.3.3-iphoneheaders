/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLResponseInternal, NSURL, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;

}

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSString * textEncodingName; 
@property (copy,readonly) NSString * suggestedFilename; 
+(id)getObjectKeyWithIndex:(long)arg1 ;
+(id)_responseWithCFURLResponse:(CFURLResponseRef)arg1 ;
+(char)supportsSecureCoding;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(void)_setMIMEType:(id)arg1 ;
-(id)_lastModifiedDate;
-(char)_mustRevalidate;
-(double)_freshnessLifetime;
-(id)_peerCertificateChain;
-(double)_calculatedExpiration;
-(NSString *)suggestedFilename;
-(CFURLResponseRef)_CFURLResponse;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(NSString *)textEncodingName;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(int)arg3 textEncodingName:(id)arg4 ;
-(long long)expectedContentLength;
@end
