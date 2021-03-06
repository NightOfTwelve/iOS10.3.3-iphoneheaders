/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface WiFiPasswordController : PSListController <UITextFieldDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateDefaultPassword;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)emptySetter:(id)arg1 specifier:(id)arg2 ;
-(id)wifiPassword:(id)arg1 ;
-(id)specifiers;
@end

