/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumberFormatter;

@interface MCUIFormatterVendor : NSObject {

	NSNumberFormatter* _numberFormatter;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)numberFormatter;
-(void)_localeDidChange:(id)arg1 ;
@end
