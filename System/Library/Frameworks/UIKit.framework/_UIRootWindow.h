/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@interface _UIRootWindow : UIWindow {

	char _mainDisplay;
	char _isExternal;

}
-(void)dealloc;
-(id)initWithScreen:(id)arg1 ;
-(char)_isWindowServerHostingManaged;
-(char)_wantsSceneAssociation;
-(char)_isConstrainedByScreenJail;
-(void)setScreen:(id)arg1 ;
-(void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2 ;
-(void)_configureContextOptions:(id)arg1 ;
-(char)_touchesInsideShouldHideCalloutBar;
-(char)_transformLayerIncludesScreenRotation;
-(id)_context;
-(id)initWithDisplay:(id)arg1 ;
-(void)_noteScreenDidChangeMode:(id)arg1 ;
@end

