/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIService.h>
#import <libobjc.A.dylib/AXUIContentViewControllerDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class ZWRootViewController, NSObject, NSString;

@interface ZWUIServer : NSObject <AXUIService, AXUIContentViewControllerDelegate> {

	ZWRootViewController* _zoomRootViewController;
	NSObject*<OS_dispatch_group> _showHideGroup;
	NSObject*<OS_dispatch_queue> _showHideQueue;

}

@property (nonatomic,readonly) ZWRootViewController * zoomRootViewController; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> showHideGroup;                   //@synthesize showHideGroup=_showHideGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> showHideQueue;                   //@synthesize showHideQueue=_showHideQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_waitForControllerShowHideToComplete:(/*^block*/id)arg1 ;
-(void)_showingOrHidingControllerWillEnd;
-(void)_showingOrHidingControllerWillBegin;
-(ZWRootViewController *)zoomRootViewController;
-(void)setShowHideQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setShowHideGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)showHideGroup;
-(NSObject*<OS_dispatch_queue>)showHideQueue;
-(id)init;
-(void)dealloc;
-(float)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(char)arg2 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
@end

