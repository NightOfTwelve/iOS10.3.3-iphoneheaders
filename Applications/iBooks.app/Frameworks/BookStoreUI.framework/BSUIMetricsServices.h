/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookStoreUI.framework/BookStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIApplicationController;

@interface BSUIMetricsServices : NSObject {

	SKUIApplicationController* _applicationController;

}

@property (nonatomic,readonly) SKUIApplicationController * applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
+(void)setupSharedInstanceWithApplicationController:(id)arg1 ;
+(id)sharedInstance;
-(void)reportClickEventWithIdentfier:(id)arg1 targetURL:(id)arg2 ;
-(void)reportSampleClickEventWithIdentfier:(id)arg1 targetURL:(id)arg2 ;
-(void)reportSampleUpsellClickEventWithIdentfier:(id)arg1 buyParameters:(id)arg2 ;
-(void)reportSeeAllClickEventWithIdentfiers:(id)arg1 ;
-(void)reportImpressionsEventWithIdentifiers:(id)arg1 ;
-(void)reportPageEventWithForwardNavigation:(char)arg1 ;
-(SKUIApplicationController *)applicationController;
-(id)initWithApplicationController:(id)arg1 ;
@end
