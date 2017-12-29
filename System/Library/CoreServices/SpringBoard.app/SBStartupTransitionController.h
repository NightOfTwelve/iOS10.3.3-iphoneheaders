/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>

@protocol SBStartupTransition;
@class SBInitialRestartState, SBStartupTransitionContextPersistence, SBStartupTransitionFactory, BSTransaction, BSTransactionBlockObserver, NSSet, NSString;

@interface SBStartupTransitionController : NSObject <BSTransactionObserver, BSDescriptionProviding, BSTransactionObserver> {

	SBInitialRestartState* _initialRestartState;
	SBStartupTransitionContextPersistence* _transitionContextPersistence;
	SBStartupTransitionFactory* _transitionFactory;
	BSTransaction*<SBStartupTransition> _transition;
	BSTransactionBlockObserver* _transitionObserver;
	char _ranOnce;
	NSSet* _renderOverlayDismissActions;

}

@property (setter=_setTransitionFactory:,getter=_transitionFactory,nonatomic,retain) SBStartupTransitionFactory * transitionFactory;                                                          //@synthesize transitionFactory=_transitionFactory - In the implementation block
@property (setter=_setTransitionContextPersistence:,getter=_transitionContextPersistence,nonatomic,retain) SBStartupTransitionContextPersistence * transitionContextPersistence;              //@synthesize transitionContextPersistence=_transitionContextPersistence - In the implementation block
@property (nonatomic,readonly) BSTransaction*<SBStartupTransition> startupTransition;                                                                                                         //@synthesize transition=_transition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInitialRestartState:(id)arg1 ;
-(void)initializeAndRunStartupTransition:(/*^block*/id)arg1 ;
-(BSTransaction*<SBStartupTransition>)startupTransition;
-(void)_saveContextFromTransitionContext:(id)arg1 ;
-(id)_transitionContextPersistence;
-(void)_setTransitionContextPersistence:(id)arg1 ;
-(id)_transitionFactory;
-(void)_setTransitionFactory:(id)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)transactionDidBegin:(id)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
@end
