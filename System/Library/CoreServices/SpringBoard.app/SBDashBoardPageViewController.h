/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardPresentationViewController.h>
#import <SpringBoard/SBDashBoardPageViewControllerProtocol.h>

@protocol SBDashBoardViewControllerProtocol;
@class NSString, NSSet, _UILegibilitySettings, UIColor, NSArray, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardPresentation;

@interface SBDashBoardPageViewController : SBDashBoardPresentationViewController <SBDashBoardPageViewControllerProtocol> {

	id<SBDashBoardViewControllerProtocol> _dashBoardViewController;
	char _transitioning;
	char _authenticated;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) int backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) int idleTimerDuration; 
@property (nonatomic,readonly) int idleTimerMode; 
@property (nonatomic,readonly) int idleWarnMode; 
@property (nonatomic,readonly) int scrollingStrategy; 
@property (nonatomic,readonly) int notificationBehavior; 
@property (nonatomic,readonly) unsigned restrictedCapabilities; 
@property (nonatomic,readonly) int proximityDetectionMode; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) int participantState; 
@property (assign,nonatomic,__weak) id<SBDashBoardViewPresenting> presenter; 
@property (nonatomic,readonly) int presentationStyle; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) int presentationTransition; 
@property (nonatomic,readonly) int presentationPriority; 
@property (nonatomic,readonly) int presentationAltitude; 
@property (nonatomic,copy,readonly) SBDashBoardAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) SBDashBoardBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) SBDashBoardPresentation * externalPresentation; 
@property (assign,nonatomic,__weak) id<SBDashBoardViewControllerProtocol> dashBoardViewController;              //@synthesize dashBoardViewController=_dashBoardViewController - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) char transitioning;                                         //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,readonly) char authenticated;                                                              //@synthesize authenticated=_authenticated - In the implementation block
+(char)isAvailableForConfiguration;
+(Class)viewClass;
+(unsigned)requiredCapabilities;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id)hostedApp;
-(char)isHostingAnApp;
-(void)setDashBoardViewController:(id<SBDashBoardViewControllerProtocol>)arg1 ;
-(int)presentationAltitude;
-(char)canHostAnApp;
-(void)hostedAppWillRotateToInterfaceOrientation:(int)arg1 ;
-(void)willTransitionToVisible:(char)arg1 ;
-(void)updateTransitionToVisible:(char)arg1 progress:(float)arg2 mode:(int)arg3 ;
-(void)didTransitionToVisible:(char)arg1 ;
-(id)view;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)isTransitioning;
-(void)viewDidLoad;
-(id)pageView;
-(char)authenticated;
-(void)setTransitioning:(char)arg1 ;
-(id<SBDashBoardViewControllerProtocol>)dashBoardViewController;
-(void)handleAction:(id)arg1 fromSender:(id)arg2 ;
-(int)participantState;
@end

