/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@class GLKBaseEffect, EAGLContext, UIDynamicAnimator, GLKView, NSString;

@interface UIDynamicsDebug : NSObject <GLKViewDelegate> {

	unsigned _vertexBuffer;
	SCD_Struct_UI96 _vertices[42000];
	GLKBaseEffect* _effect;
	EAGLContext* _ctx;
	char _enabled;
	char _showPhysics;
	char _showOutlineInterior;
	char _showFields;
	UIDynamicAnimator* _animator;
	GLKView* _debugView;

}

@property (assign,nonatomic,__weak) UIDynamicAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) GLKView * debugView;                              //@synthesize debugView=_debugView - In the implementation block
@property (assign,nonatomic) char enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char showPhysics;                                 //@synthesize showPhysics=_showPhysics - In the implementation block
@property (assign,nonatomic) char showOutlineInterior;                         //@synthesize showOutlineInterior=_showOutlineInterior - In the implementation block
@property (assign,nonatomic) char showFields;                                  //@synthesize showFields=_showFields - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)enabled;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(id)initWithAnimator:(id)arg1 ;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
-(UIDynamicAnimator *)animator;
-(void)_teardownDebugView;
-(void)_setupDebugViewIfNeccessary;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)captureDebugInformation;
-(char)showPhysics;
-(void)setShowPhysics:(char)arg1 ;
-(char)showOutlineInterior;
-(void)setShowOutlineInterior:(char)arg1 ;
-(char)showFields;
-(void)setShowFields:(char)arg1 ;
-(GLKView *)debugView;
-(void)setDebugView:(GLKView *)arg1 ;
@end

