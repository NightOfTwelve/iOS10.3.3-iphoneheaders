/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/MobileSafari.axbundle/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/__BrowserControllerAccessibility_super.h>

@interface BrowserControllerAccessibility : __BrowserControllerAccessibility_super
+(id)accessibilityFocusedBrowserController;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityActiveTabDocument;
-(id)accessibilityCurrentWebView;
-(void)setShowingReader:(char)arg1 animated:(char)arg2 ;
-(void)sidebarDimmingViewDismiss:(id)arg1 ;
-(void)togglePrivateBrowsingEnabled;
-(void)_axUpdateVisibleContentInsetForScrollView:(id)arg1 ;
-(void)_setContentInsetAdjustments:(UIEdgeInsets)arg1 forScrollView:(id)arg2 ;
-(void)_axUpdateVisibleContentInset;
-(void)dealloc;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)_initSubviews;
-(char)accessibilityPerformEscape;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_accessibilityKeyboardDidHide:(id)arg1 ;
@end
