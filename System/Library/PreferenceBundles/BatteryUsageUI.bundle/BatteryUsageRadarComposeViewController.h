/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIViewController, NSDictionary, NSString;

@interface BatteryUsageRadarComposeViewController : NSObject <UIAlertViewDelegate> {

	UIViewController* _parentViewController;
	NSDictionary* _currentDictionary;

}

@property (nonatomic,retain) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * currentDictionary;                     //@synthesize currentDictionary=_currentDictionary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)hasRadarCompose;
-(id)initWithParentView:(id)arg1 andDictionary:(id)arg2 ;
-(void)showRadarComposeAlert;
-(id)urlEncodedString:(id)arg1 ;
-(void)setCurrentDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)currentDictionary;
-(UIViewController *)parentViewController;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
@end

