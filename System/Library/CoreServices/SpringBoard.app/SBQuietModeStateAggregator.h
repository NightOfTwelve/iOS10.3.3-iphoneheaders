/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>

@class BBObserver, NSString;

@interface SBQuietModeStateAggregator : NSObject <BBObserverDelegate> {

	char _quietModeEnabled;
	char _quietModeEnabledAndActive;
	unsigned _quietModeState;
	BBObserver* _observer;

}

@property (nonatomic,retain) BBObserver * observer;                                                            //@synthesize observer=_observer - In the implementation block
@property (getter=isQuietModeEnabled,nonatomic,readonly) char quietModeEnabled;                                //@synthesize quietModeEnabled=_quietModeEnabled - In the implementation block
@property (getter=isQuietModeEnabledAndActive,nonatomic,readonly) char quietModeEnabledAndActive;              //@synthesize quietModeEnabledAndActive=_quietModeEnabledAndActive - In the implementation block
@property (nonatomic,readonly) unsigned quietModeState;                                                        //@synthesize quietModeState=_quietModeState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isQuietModeEnabledAndActive;
-(char)isQuietModeEnabled;
-(unsigned)quietModeState;
-(id)init;
-(void)dealloc;
-(void)setObserver:(BBObserver *)arg1 ;
-(BBObserver *)observer;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned)arg2 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(char)arg2 ;
@end

