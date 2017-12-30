/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKPresentationReadinessPrivate.h>
#import <libobjc.A.dylib/OKActionResponder.h>
#import <libobjc.A.dylib/OKPresentationReadiness.h>

@class OKPresentationPage, NSArray, OKNavigatorViewController, OKPresentationViewController, NSString, NSMutableDictionary, NSMutableArray, NSRecursiveLock, OFUIView;

@interface OKPageViewController : OFUIViewController <OKSettingsSupport, OKActionResponderPrivate, OKCollectionProxyDataSource, OKPresentationReadinessPrivate, OKActionResponder, OKPresentationReadiness> {

	char _motionEnabled;
	float _perspective;
	char _motionTiltXEnabled;
	char _motionTiltYEnabled;
	char _motionTiltZEnabled;
	CGSize _motionXMinMax;
	CGSize _motionYMinMax;
	CGSize _motionZMinMax;
	float _lastMotionRotationX;
	float _lastMotionRotationY;
	float _lastMotionRotationZ;
	char _needsApplySettings;
	char _hasSettingsApplied;
	unsigned _prepareMode;
	char _prepareWidgetsManually;
	OKPresentationPage* _page;
	NSArray* _layoutSteps;
	OKNavigatorViewController* _subNavigatorViewController;
	OKPresentationViewController* _presentationViewController;
	OKNavigatorViewController* _navigatorViewController;
	NSArray* _musicURLs;
	NSString* _prepareActionScript;
	NSString* _canPerformActionScript;
	NSString* _willAppearActionScript;
	NSString* _appearingActionScript;
	NSString* _didAppearActionScript;
	NSString* _willDisappearActionScript;
	NSString* _disappearingActionScript;
	NSString* _didDisappearActionScript;
	NSString* _layoutChangedActionScript;
	NSMutableDictionary* _actionBindings;
	UIEdgeInsets _eventsInset;
	char _isReady;
	NSMutableArray* _readyNotificationBlocks;
	NSRecursiveLock* _readyRecursiveLock;

}

@property (assign,nonatomic) OKPresentationViewController * presentationViewController; 
@property (assign,nonatomic) OKNavigatorViewController * navigatorViewController;                    //@synthesize navigatorViewController=_navigatorViewController - In the implementation block
@property (nonatomic,retain) OKNavigatorViewController * subNavigatorViewController;                 //@synthesize subNavigatorViewController=_subNavigatorViewController - In the implementation block
@property (assign,nonatomic) char prepareWidgetsManually;                                            //@synthesize prepareWidgetsManually=_prepareWidgetsManually - In the implementation block
@property (assign,nonatomic) char hasSettingsApplied;                                                //@synthesize hasSettingsApplied=_hasSettingsApplied - In the implementation block
@property (assign,nonatomic) char needsApplySettings;                                                //@synthesize needsApplySettings=_needsApplySettings - In the implementation block
@property (nonatomic,retain) NSArray * layoutSteps;                                                  //@synthesize layoutSteps=_layoutSteps - In the implementation block
@property (nonatomic,retain,readonly) NSArray * musicURLs;                                           //@synthesize musicURLs=_musicURLs - In the implementation block
@property (nonatomic,retain,readonly) OKPresentationPage * page;                                     //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) unsigned prepareMode;                                                 //@synthesize prepareMode=_prepareMode - In the implementation block
@property (nonatomic,readonly) char motionEnabled;                                                   //@synthesize motionEnabled=_motionEnabled - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets eventsInset;                                             //@synthesize eventsInset=_eventsInset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) OFUIView * actionView; 
+(Class)viewClass;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)name;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)commonInit;
-(char)prepareForDisplay;
-(OKPresentationPage *)page;
-(id)initWithPage:(id)arg1 ;
-(id)pageView;
-(char)canPerformAction:(id)arg1 ;
-(OKPresentationViewController *)presentationViewController;
-(void)instantPause;
-(void)setPresentationViewController:(OKPresentationViewController *)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(id)visibleWidgets;
-(void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(/*^block*/id)arg3 forWidgetView:(id)arg4 ;
-(void)setSubNavigatorViewController:(OKNavigatorViewController *)arg1 ;
-(OKNavigatorViewController *)subNavigatorViewController;
-(void)networkStatusDidChange:(int)arg1 ;
-(void)setNeedsApplySettings;
-(unsigned)prepareMode;
-(void)applySettingsIfNeeded;
-(void)resolutionDidChange;
-(void)layoutDidChange;
-(char)hasSettingsApplied;
-(void)applyLayoutSettings;
-(void)removeAllActionBindings;
-(void)setNeedsApplySettings:(char)arg1 ;
-(void)setHasSettingsApplied:(char)arg1 ;
-(id)mediaURLs;
-(char)prepareWidgetsManually;
-(void)updateMotion;
-(char)prepareForWarmup;
-(char)prepareForUnload;
-(void)setNeedsPrepare;
-(void)prepareForMode:(unsigned)arg1 ;
-(void)prepareForRefresh;
-(void)instantResume;
-(char)motionEnabled;
-(void)updateWithMotionTiltRotationX:(float)arg1 tiltRotationY:(float)arg2 tiltRotationZ:(float)arg3 ;
-(OKNavigatorViewController *)navigatorViewController;
-(CGSize)layoutFactor;
-(NSArray *)layoutSteps;
-(unsigned)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)allActionBindings;
-(char)hasWidgetFocused;
-(void)applySettings;
-(void)prepareWidgetsInRect:(CGRect)arg1 ;
-(void)prepareForReload;
-(void)prepareAllWidgets;
-(void)updateLayoutSteps;
-(id)currentRemoteWidgets;
-(void)cancelCouchPotatoPlayback;
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1 ;
-(void)removeAllReadyNotifications;
-(id)displayedPageViewControllers;
-(id)deepestDisplayedPageViewController;
-(char)sendAction:(id)arg1 toTarget:(id)arg2 ;
-(char)isReady:(char)arg1 ;
-(float)readyProgress:(char)arg1 ;
-(void)addActionBinding:(id)arg1 scope:(unsigned)arg2 ;
-(void)removeActionBinding:(id)arg1 ;
-(id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(char)performActionScript:(id)arg1 withAction:(id)arg2 ;
-(char)interactivityEnabled;
-(CGSize)parentLayoutFactor;
-(id)layoutSettingsKeys;
-(void)setSettingPrepareActionScript:(id)arg1 ;
-(void)pageWillAppear:(char)arg1 ;
-(void)pageDidAppear:(char)arg1 ;
-(void)pageWillDisappear:(char)arg1 ;
-(void)pageDidDisappear:(char)arg1 ;
-(void)setNavigatorViewController:(OKNavigatorViewController *)arg1 ;
-(char)supportsReadiness;
-(void)readinessDidChange:(char)arg1 ;
-(void)becomeReady;
-(void)resignReady;
-(void)setSettingCanPerformActionScript:(id)arg1 ;
-(void)setSettingWillAppearActionScript:(id)arg1 ;
-(void)setSettingDidAppearActionScript:(id)arg1 ;
-(void)setSettingWillDisappearActionScript:(id)arg1 ;
-(void)setSettingDidDisappearActionScript:(id)arg1 ;
-(void)setPrepareWidgetsManually:(char)arg1 ;
-(id)actionBindings;
-(void)setSettingActionBindings:(id)arg1 ;
-(void)setSettingPerspective:(double)arg1 ;
-(void)setSettingMotionEnabled:(char)arg1 ;
-(void)setSettingMotionTiltXEnabled:(char)arg1 ;
-(void)setSettingMotionTiltYEnabled:(char)arg1 ;
-(void)setSettingMotionTiltZEnabled:(char)arg1 ;
-(void)setSettingMotionXMinMax:(CGSize)arg1 ;
-(void)setSettingMotionYMinMax:(CGSize)arg1 ;
-(void)setSettingMotionZMinMax:(CGSize)arg1 ;
-(void)setSettingMusic:(id)arg1 ;
-(void)setSettingAppearingActionScript:(id)arg1 ;
-(void)setSettingDisappearingActionScript:(id)arg1 ;
-(void)setSettingLayoutChangedActionScript:(id)arg1 ;
-(void)setSettingLayoutSteps:(id)arg1 ;
-(UIEdgeInsets)settingEventsInset;
-(void)setSettingEventsInset:(UIEdgeInsets)arg1 ;
-(void)pageAppearingWithProgress:(float)arg1 animated:(char)arg2 ;
-(void)pageDisappearingWithProgress:(float)arg1 animated:(char)arg2 ;
-(NSArray *)musicURLs;
-(char)needsApplySettings;
-(void)setLayoutSteps:(NSArray *)arg1 ;
-(UIEdgeInsets)eventsInset;
-(OFUIView *)actionView;
@end
