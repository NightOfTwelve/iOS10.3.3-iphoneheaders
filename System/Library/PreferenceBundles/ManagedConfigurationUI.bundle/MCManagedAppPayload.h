/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCManagedAppPayload : MCPayload {

	NSString* _managedAppID;

}

@property (nonatomic,retain) NSString * managedAppID;              //@synthesize managedAppID=_managedAppID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)title;
-(id)initWithManagedAppID:(id)arg1 profile:(id)arg2 ;
-(NSString *)managedAppID;
-(void)setManagedAppID:(NSString *)arg1 ;
@end
