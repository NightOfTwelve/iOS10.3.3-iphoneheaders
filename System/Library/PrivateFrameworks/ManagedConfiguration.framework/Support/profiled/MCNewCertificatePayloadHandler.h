/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/profiled-Structs.h>
#import <profiled/MCNewPayloadHandler.h>

@interface MCNewCertificatePayloadHandler : MCNewPayloadHandler {

	char _isSetAside;

}

@property (nonatomic,readonly) char isSetAside;              //@synthesize isSetAside=_isSetAside - In the implementation block
-(void)unsetAside;
-(void)setAside;
-(SecIdentityRef)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id*)arg2 ;
-(void)remove;
-(char)isSetAside;
@end

