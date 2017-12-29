/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/WebSheet.app/WebSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebSheet/WebSheet-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, WebSheetViewController, NSString;

@interface WebSheetAppDelegate : UIApplication <UIApplicationDelegate> {

	ShowWebSheetContext _showWebSheetContext;
	char _openWiFiPreferencesOnExit;
	WebSheetViewController* _webSheetCont;

}

@property (nonatomic,retain) WebSheetViewController * webSheetCont;              //@synthesize webSheetCont=_webSheetCont - In the implementation block
@property (assign,nonatomic) char openWiFiPreferencesOnExit;                     //@synthesize openWiFiPreferencesOnExit=_openWiFiPreferencesOnExit - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)setOpenWiFiPreferencesOnExit:(char)arg1 ;
-(WebSheetViewController *)webSheetCont;
-(void)remoteSheetDidEnd;
-(void)setWebSheetCont:(WebSheetViewController *)arg1 ;
-(char)openWiFiPreferencesOnExit;
-(void)dealloc;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(char)canShowAlerts;
@end
