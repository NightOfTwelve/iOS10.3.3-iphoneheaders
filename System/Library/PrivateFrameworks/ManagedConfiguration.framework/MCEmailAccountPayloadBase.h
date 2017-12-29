/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber, NSString, NSData;

@interface MCEmailAccountPayloadBase : MCPayload {

	char _preventMove;
	char _preventAppSheet;
	char _SMIMEEnabled;
	char _isRecentsSyncingDisabled;
	char _isMailDropEnabled;
	char _SMIMEPerMessageSwitchEnabled;
	NSNumber* _SMIMESigningEnabled;
	NSString* _SMIMESigningIdentityUUID;
	NSNumber* _SMIMEEncryptionEnabled;
	NSString* _SMIMEEncryptionIdentityUUID;
	NSData* _SMIMESigningIdentityPersistentID;
	NSData* _SMIMEEncryptionIdentityPersistentID;
	NSNumber* _preventMoveNum;
	NSNumber* _preventAppSheetNum;
	NSNumber* _SMIMEEnabledNum;
	NSNumber* _isRecentsSyncingDisabledNum;
	NSNumber* _isMailDropEnabledNum;
	NSNumber* _SMIMEPerMessageSwitchEnabledNum;

}

@property (nonatomic,retain) NSNumber * preventMoveNum;                                                                           //@synthesize preventMoveNum=_preventMoveNum - In the implementation block
@property (nonatomic,retain) NSNumber * preventAppSheetNum;                                                                       //@synthesize preventAppSheetNum=_preventAppSheetNum - In the implementation block
@property (setter=MIMEEnabledNum,nonatomic,retain) NSNumber * SMIMEEnabledNum;                                                    //@synthesize SMIMEEnabledNum=_SMIMEEnabledNum - In the implementation block
@property (nonatomic,retain) NSNumber * isRecentsSyncingDisabledNum;                                                              //@synthesize isRecentsSyncingDisabledNum=_isRecentsSyncingDisabledNum - In the implementation block
@property (nonatomic,retain) NSNumber * isMailDropEnabledNum;                                                                     //@synthesize isMailDropEnabledNum=_isMailDropEnabledNum - In the implementation block
@property (setter=MIMEPerMessageSwitchEnabledNum,nonatomic,retain) NSNumber * SMIMEPerMessageSwitchEnabledNum;                    //@synthesize SMIMEPerMessageSwitchEnabledNum=_SMIMEPerMessageSwitchEnabledNum - In the implementation block
@property (assign,nonatomic) char preventMove;                                                                                    //@synthesize preventMove=_preventMove - In the implementation block
@property (assign,nonatomic) char preventAppSheet;                                                                                //@synthesize preventAppSheet=_preventAppSheet - In the implementation block
@property (assign,setter=MIMEEnabled,nonatomic) char SMIMEEnabled;                                                                //@synthesize SMIMEEnabled=_SMIMEEnabled - In the implementation block
@property (assign,nonatomic) char isRecentsSyncingDisabled;                                                                       //@synthesize isRecentsSyncingDisabled=_isRecentsSyncingDisabled - In the implementation block
@property (assign,nonatomic) char isMailDropEnabled;                                                                              //@synthesize isMailDropEnabled=_isMailDropEnabled - In the implementation block
@property (setter=MIMESigningEnabled,nonatomic,retain) NSNumber * SMIMESigningEnabled;                                            //@synthesize SMIMESigningEnabled=_SMIMESigningEnabled - In the implementation block
@property (setter=MIMESigningIdentityUUID,nonatomic,retain) NSString * SMIMESigningIdentityUUID;                                  //@synthesize SMIMESigningIdentityUUID=_SMIMESigningIdentityUUID - In the implementation block
@property (setter=MIMEEncryptionEnabled,nonatomic,retain) NSNumber * SMIMEEncryptionEnabled;                                      //@synthesize SMIMEEncryptionEnabled=_SMIMEEncryptionEnabled - In the implementation block
@property (setter=MIMEEncryptionIdentityUUID,nonatomic,retain) NSString * SMIMEEncryptionIdentityUUID;                            //@synthesize SMIMEEncryptionIdentityUUID=_SMIMEEncryptionIdentityUUID - In the implementation block
@property (setter=MIMESigningIdentityPersistentID,nonatomic,retain) NSData * SMIMESigningIdentityPersistentID;                    //@synthesize SMIMESigningIdentityPersistentID=_SMIMESigningIdentityPersistentID - In the implementation block
@property (setter=MIMEEncryptionIdentityPersistentID,nonatomic,retain) NSData * SMIMEEncryptionIdentityPersistentID;              //@synthesize SMIMEEncryptionIdentityPersistentID=_SMIMEEncryptionIdentityPersistentID - In the implementation block
@property (assign,setter=MIMEPerMessageSwitchEnabled,nonatomic) char SMIMEPerMessageSwitchEnabled;                                //@synthesize SMIMEPerMessageSwitchEnabled=_SMIMEPerMessageSwitchEnabled - In the implementation block
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(char)containsSensitiveUserInformation;
-(NSString *)SMIMESigningIdentityUUID;
-(NSString *)SMIMEEncryptionIdentityUUID;
-(NSData *)SMIMESigningIdentityPersistentID;
-(NSData *)SMIMEEncryptionIdentityPersistentID;
-(char)preventMove;
-(void)setPreventMove:(char)arg1 ;
-(char)preventAppSheet;
-(void)setPreventAppSheet:(char)arg1 ;
-(char)SMIMEEnabled;
-(void)setSMIMEEnabled:(char)arg1 ;
-(char)isRecentsSyncingDisabled;
-(void)setIsRecentsSyncingDisabled:(char)arg1 ;
-(char)isMailDropEnabled;
-(void)setIsMailDropEnabled:(char)arg1 ;
-(NSNumber *)SMIMESigningEnabled;
-(void)setSMIMESigningEnabled:(NSNumber *)arg1 ;
-(void)setSMIMESigningIdentityUUID:(NSString *)arg1 ;
-(NSNumber *)SMIMEEncryptionEnabled;
-(void)setSMIMEEncryptionEnabled:(NSNumber *)arg1 ;
-(void)setSMIMEEncryptionIdentityUUID:(NSString *)arg1 ;
-(void)setSMIMESigningIdentityPersistentID:(NSData *)arg1 ;
-(void)setSMIMEEncryptionIdentityPersistentID:(NSData *)arg1 ;
-(char)SMIMEPerMessageSwitchEnabled;
-(void)setSMIMEPerMessageSwitchEnabled:(char)arg1 ;
-(NSNumber *)preventMoveNum;
-(void)setPreventMoveNum:(NSNumber *)arg1 ;
-(NSNumber *)preventAppSheetNum;
-(void)setPreventAppSheetNum:(NSNumber *)arg1 ;
-(NSNumber *)SMIMEEnabledNum;
-(void)setSMIMEEnabledNum:(NSNumber *)arg1 ;
-(NSNumber *)isRecentsSyncingDisabledNum;
-(void)setIsRecentsSyncingDisabledNum:(NSNumber *)arg1 ;
-(NSNumber *)isMailDropEnabledNum;
-(void)setIsMailDropEnabledNum:(NSNumber *)arg1 ;
-(NSNumber *)SMIMEPerMessageSwitchEnabledNum;
-(void)setSMIMEPerMessageSwitchEnabledNum:(NSNumber *)arg1 ;
-(id)description;
@end
