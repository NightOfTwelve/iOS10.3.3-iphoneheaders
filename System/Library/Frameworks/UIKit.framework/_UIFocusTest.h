/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusTestDelegate;
@class NSString;

@interface _UIFocusTest : NSObject {

	char _isApplicationTest;
	NSString* _identifier;
	int _state;
	id<_UIFocusTestDelegate> _delegate;
	/*^block*/id _runCompletionHandler;

}

@property (assign,nonatomic) int state;                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id runCompletionHandler;                                         //@synthesize runCompletionHandler=_runCompletionHandler - In the implementation block
@property (assign,getter=_isApplicationTest,nonatomic) char isApplicationTest;              //@synthesize isApplicationTest=_isApplicationTest - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusTestDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
+(id)currentTest;
+(void)_setCurrentTest:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<_UIFocusTestDelegate>)arg1 ;
-(id<_UIFocusTestDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)identifier;
-(void)reset;
-(void)stop;
-(void)_start;
-(id)initWithIdentifier:(id)arg1 ;
-(void)main;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRunCompletionHandler:(id)arg1 ;
-(char)_isApplicationTest;
-(void)_finish:(char)arg1 ;
-(id)runCompletionHandler;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIsApplicationTest:(char)arg1 ;
@end

