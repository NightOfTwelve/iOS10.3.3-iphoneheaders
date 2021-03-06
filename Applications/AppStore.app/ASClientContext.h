/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIClientContext.h>

@class NSBundle, SKUILocalizedStringDictionary;

@interface ASClientContext : SKUIClientContext {

	NSBundle* _bundle;
	SKUILocalizedStringDictionary* _localizedStrings;

}
+(id)localizedStringForKey:(id)arg1 inBundles:(id)arg2 inTable:(id)arg3 ;
-(void)showSearchPage:(char)arg1 ;
-(void)_sendVideoSubscriberChangedNotificationToTheJavaScript;
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(void)getDefaultMetricsControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)localizedAlertWithError:(id)arg1 ;
-(char)storeViewController:(id)arg1 shouldDisplayDefaultDarButton:(int)arg2 ;
@end

