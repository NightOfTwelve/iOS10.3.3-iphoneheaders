/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>

@class NSString;

@interface SLFacebookRegistrationNamePrompt : SLFacebookRegistrationInfoPrompt {

	NSString* _firstName;
	NSString* _lastName;
	char _lastNameOnTop;

}
-(char)isReadyToValidate;
-(void)updateRegistrationInfo;
-(void)setFirstName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)firstNameWithSpecifier:(id)arg1 ;
-(void)setLastName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)lastNameWithSpecifier:(id)arg1 ;
-(char)validate;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(id)specifiers;
@end

