/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSecureWindow.h>

@interface SBIsolationTankWindow : SBSecureWindow
+(char)sb_autorotates;
-(id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5 ;
-(id)isolationTankController;
-(void)dealloc;
-(char)_shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(char)_canBecomeKeyWindow;
-(char)_isConstrainedByScreenJail;
-(int)_orientationForViewTransform;
-(int)_toWindowOrientation;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(char)_usesWindowServerHitTesting;
-(int)_fromWindowOrientation;
-(id)_aboveWindowScrollView;
-(id)_hostingWindow;
-(id)sbui_effectiveWindowForIsolation;
@end

