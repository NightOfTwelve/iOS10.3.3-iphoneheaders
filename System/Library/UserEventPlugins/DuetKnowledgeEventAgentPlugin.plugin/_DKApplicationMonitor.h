/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/UserEventPlugins/DuetKnowledgeEventAgentPlugin.plugin/DuetKnowledgeEventAgentPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeEventAgentPlugin/_DKMonitor.h>
#import <ADEventListenerPlugin/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSString;

@interface _DKApplicationMonitor : _DKMonitor <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _monitor;
	NSString* _lastIdentifierSet;

}

@property (nonatomic,retain) FBSDisplayLayoutMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) NSString * lastIdentifierSet;                   //@synthesize lastIdentifierSet=_lastIdentifierSet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)_eventFilterBlock;
+(id)_defaultEvent;
+(void)setFocalApplication:(id)arg1 launchReason:(id)arg2 ;
+(id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2 ;
+(id)eventStream;
+(id)entitlements;
-(NSString *)lastIdentifierSet;
-(void)setLastIdentifierSet:(NSString *)arg1 ;
-(void)platformSpecificStart;
-(void)obtainCurrentValue;
-(void)platformSpecificStop;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(FBSDisplayLayoutMonitor *)monitor;
-(void)setMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
@end

