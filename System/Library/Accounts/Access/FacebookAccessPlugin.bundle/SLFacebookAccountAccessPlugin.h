/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/Access/FacebookAccessPlugin.bundle/FacebookAccessPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookAccessPlugin/FacebookAccessPlugin-Structs.h>
#import <CloudKitAccessPlugin/ACDAccountAccessPlugin.h>

@class NSSet, NSString;

@interface SLFacebookAccountAccessPlugin : NSObject <ACDAccountAccessPlugin> {

	NSSet* _permissionCategories;
	NSSet* _basicReadPermissions;
	NSSet* _extendedReadPermissions;
	NSSet* _writePermissions;
	NSSet* _managePermissions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsAccountTypeWithIdentifier:(id)arg1 ;
-(id)_accountOfType:(id)arg1 withStore:(id)arg2 ;
-(char)_validateOptionsDictionary:(id)arg1 ;
-(id)_audienceFromOptionsDictionary:(id)arg1 ;
-(id)_permissionsFromOptionsDictionary:(id)arg1 ;
-(void)_getServerAuthorizationForClient:(id)arg1 withAppID:(id)arg2 permissions:(id)arg3 audience:(id)arg4 account:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_appIDFromOptionsDictionary:(id)arg1 ;
-(id)_writePermissions;
-(id)_persistentDictionaryForOptions:(id)arg1 ;
-(void)_handleUserResponse:(char)arg1 toRequestForClient:(id)arg2 withAppID:(id)arg3 persistentOptions:(id)arg4 onAccount:(id)arg5 ofType:(id)arg6 existingPermissions:(id)arg7 newPermissions:(id)arg8 audience:(id)arg9 isFirstTimeRequest:(char)arg10 shouldSkipServer:(char)arg11 store:(id)arg12 completion:(/*^block*/id)arg13 ;
-(void)_promptUserToApproveRequestForPermissions:(id)arg1 withAudience:(id)arg2 fromClient:(id)arg3 account:(id)arg4 completion:(/*^block*/id)arg5 ;
-(char)_shouldIgnoreAccessRequest;
-(id)_constructUserMessageForPermissions:(id)arg1 audience:(id)arg2 appName:(id)arg3 account:(id)arg4 ;
-(void)_showAlertWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_serverAudienceStringForAudience:(id)arg1 ;
-(void)_saveCredentialForClient:(id)arg1 onAccount:(id)arg2 usingAccessToken:(id)arg3 ;
-(id)_basicReadPermissions;
-(id)_extendedReadPermissions;
-(id)_managePermissions;
-(id)_allReadPermissions;
-(id)_predicateForPermissions:(id)arg1 ofCategory:(NSString*)arg2 audience:(id)arg3 ;
-(id)_allPermissionsInCategory:(NSString*)arg1 ;
-(id)_appendDescriptionOfUnknownPermissions:(id)arg1 toUserMessage:(id)arg2 forAppWithName:(id)arg3 audience:(id)arg4 account:(id)arg5 ;
-(id)_fetchDescriptionForUnknownPermissions:(id)arg1 audience:(id)arg2 account:(id)arg3 ;
-(id)_userObjectsRequestedByPermissions:(id)arg1 ;
-(id)_friendObjectsRequestedByPermissions:(id)arg1 ;
-(id)_userFriendlyAudienceString:(id)arg1 ;
-(id)_objectNameForManagePermission:(id)arg1 ;
-(id)_userProfileReadPermissions;
-(id)_objectNameForReadPermission:(id)arg1 ;
-(id)_commaSeparatedListWithFormat:(id)arg1 forObjectNames:(id)arg2 ;
-(void)_showUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(id)init;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_csvStringFromSet:(id)arg1 ;
@end
