/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@class NSConditionLock, NSThread, NSDictionary, MailAccount, DeliveryAccount, NSError;

@interface MCNewEmailAccountPayloadHandler : MCNewPayloadHandler {

	NSConditionLock* _validationLock;
	NSThread* _validationThread;
	NSDictionary* _setAsideAccountInfo;
	char _wasInstalledByMDM;
	MailAccount* _incomingAccount;
	char _incomingAccountUsesSSL;
	DeliveryAccount* _outgoingAccount;
	char _outgoingAccountUsesSSL;
	char _validationDone;
	char _validationResult;
	NSError* _validationError;

}
+(id)unhashedAccountIdentifierWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3 ;
+(id)MCACAccountIdentifierWithIncomingAccountInfo:(id)arg1 ;
+(id)MCACAccountIdentifierWithOutgoingAccountInfo:(id)arg1 ;
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(char)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(char)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(void)_remove;
-(id)_persistentIDForCertificateUUID:(id)arg1 notFoundLocErrorString:(id)arg2 badLocErrorString:(id)arg3 outError:(id*)arg4 ;
-(id)_errorFromValidationError:(id)arg1 ;
-(id)_incomingAccountInfoDictionaryWithUserInput:(id)arg1 isPreflight:(char)arg2 outError:(id*)arg3 ;
-(id)_outgoingAccountInfoDictionaryWithUserInput:(id)arg1 ;
-(id)_incomingAccountWithAccountInfo:(id)arg1 ;
-(id)_outgoingAccountWithAccountInfo:(id)arg1 ;
-(void)_validateIncomingAccountOnThread;
-(id)_installWithIncomingAccountInfo:(id)arg1 outgoingAccountInfo:(id)arg2 isInstalledByMDM:(char)arg3 ;
-(id)_removeAccountWithPersistentResourceID:(id)arg1 fromArray:(id)arg2 outArray:(id*)arg3 ;
-(id)userInputFields;
-(void)remove;
-(char)isInstalled;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(char)arg3 ;
-(id)_authSchemeForAuthenticationMethod:(id)arg1 ;
@end

