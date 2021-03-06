/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertDelegate.h>
#import <SpringBoard/SBAlertWindowDelegate.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBAlertManagerDelegate;
@class UIScreen, FBScene, NSSet, FBSScene, SBAlertWindow, NSMutableArray, NSMapTable, NSMutableSet, NSString;

@interface SBAlertManager : NSObject <SBAlertDelegate, SBAlertWindowDelegate, FBSceneLayerManagerObserver, BSDescriptionProviding> {

	UIScreen* _screen;
	FBScene* _alertServerScene;
	NSSet* _alertClientSceneOcclusions;
	FBSScene* _alertClientScene;
	SBAlertWindow* _alertWindow;
	SBAlertWindow* _deferredAlertWindow;
	NSMutableArray* _alerts;
	NSMapTable* _observers;
	NSMutableSet* _removalPendingAlerts;
	char _deactivatingAllAlerts;
	struct {
		unsigned deactivateDismissed : 1;
		unsigned newWindow : 1;
		unsigned defaultShouldAutorotate : 1;
		unsigned defaultPresentationOrientation : 1;
		unsigned defaultSupportedOrientations : 1;
	}  _delegateFlags;
	id<SBAlertManagerDelegate> _delegate;

}

@property (nonatomic,retain) SBAlertWindow * alertWindow;                             //@synthesize alertWindow=_alertWindow - In the implementation block
@property (nonatomic,retain) SBAlertWindow * deferredAlertWindow;                     //@synthesize deferredAlertWindow=_deferredAlertWindow - In the implementation block
@property (assign,nonatomic,__weak) id<SBAlertManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activeAlert;
-(id)allAlerts;
-(char)hasStackedAlerts;
-(char)deactivate:(id)arg1 ;
-(char)containsAlert:(id)arg1 ;
-(id)initWithScreen:(id)arg1 delegate:(id)arg2 ;
-(void)deactivateAlertsAfterLaunch;
-(id)stackedAlertsIncludingActiveAlert:(char)arg1 ;
-(char)defaultShouldAutorotateForAlertWindow:(id)arg1 ;
-(int)defaultInterfaceOrientationForPresentationOfAlertWindow:(id)arg1 ;
-(unsigned)defaultSupportedInterfaceOrientationsForAlertWindow:(id)arg1 ;
-(char)defaultShouldAutorotateForAlert:(id)arg1 ;
-(int)defaultInterfaceOrientationForPresentationOfAlert:(id)arg1 ;
-(unsigned)defaultSupportedInterfaceOrientationsForAlert:(id)arg1 ;
-(void)alertWillDismiss:(id)arg1 ;
-(void)alertIsReadyToBeDeactivated:(id)arg1 ;
-(void)alert:(id)arg1 requestsBackgroundStyleChangeWithAnimationFactory:(id)arg2 ;
-(void)alertDidChangeOrientationEventsEnabled:(id)arg1 ;
-(void)alert:(id)arg1 didChangeFaceContactExpectation:(char)arg2 ;
-(void)alertIsReadyToBeRemovedFromView:(id)arg1 ;
-(void)alertDidChangeOccluding:(id)arg1 ;
-(void)deactivateAll;
-(unsigned)_alertCount;
-(id)_alertAtIndex:(unsigned)arg1 ;
-(void)_noteWillDisplayAlert:(id)arg1 ;
-(void)_deactivate:(id)arg1 ;
-(void)_noteFinishedWithAlert:(id)arg1 atIndex:(unsigned)arg2 ;
-(char)_canAutorotate;
-(void)_noteAlertWillDismiss:(id)arg1 ;
-(void)_updateSceneClientSettings;
-(void)_activate:(id)arg1 ;
-(void)_makeAlertWindowOpaque:(char)arg1 ;
-(void)_resetAlertWindowOpacity;
-(void)_createAlertWindowIfNecessaryForAlert:(id)arg1 ;
-(void)_removeFromView:(id)arg1 oldAlertIndex:(unsigned)arg2 ;
-(void)setDeferredAlertWindow:(SBAlertWindow *)arg1 ;
-(void)alertWantsToForceWallpaperTunnelUpdate:(id)arg1 ;
-(void)setAlertsShouldDeactivateAfterLaunch;
-(void)applicationWillAnimateActivation;
-(void)applicationFinishedAnimatingBeneathAlert;
-(SBAlertWindow *)deferredAlertWindow;
-(id)init;
-(void)setDelegate:(id<SBAlertManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<SBAlertManagerDelegate>)delegate;
-(void)addObserver:(id)arg1 ;
-(id)screen;
-(SBAlertWindow *)alertWindow;
-(void)removeObserver:(id)arg1 ;
-(void)setAlertWindow:(SBAlertWindow *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)sceneLayerManagerWillStartTrackingLayers:(id)arg1 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg1 ;
-(id)contextHostManager;
-(void)activate:(id)arg1 ;
@end

