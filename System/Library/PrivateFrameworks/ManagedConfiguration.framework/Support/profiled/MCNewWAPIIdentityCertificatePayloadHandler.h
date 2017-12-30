/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:07 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewCertificatePayloadHandler.h>

@interface MCNewWAPIIdentityCertificatePayloadHandler : MCNewCertificatePayloadHandler
-(char)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)_cannotStoreCertificateError;
-(id)_malformedCertificateError;
-(id)_cannotStorePEMDataError;
-(char)_storePEMDataInKeychain:(id)arg1 UUID:(id)arg2 outError:(id*)arg3 ;
-(void)remove;
@end
