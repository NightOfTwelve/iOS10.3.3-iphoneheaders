/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMAutomaticHistoryDeletionAgent.app/IMAutomaticHistoryDeletionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAutomaticHistoryDeletionAgent/IMHServiceWrapperDelegate.h>
#import <IMAutomaticHistoryDeletionAgent/IMHIDSInterface.h>

@protocol IMHDaemon, IMHService;
@class NSSet, NSArray, NSString;

@interface IMHealthCheckIDSInterface : NSObject <IMHServiceWrapperDelegate, IMHIDSInterface> {

	id<IMHDaemon> _daemon;
	id<IMHService> _idsService;

}

@property (nonatomic,retain) id<IMHService> idsService;                //@synthesize idsService=_idsService - In the implementation block
@property (assign,nonatomic,__weak) id<IMHDaemon> daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) NSSet * destinations; 
@property (nonatomic,readonly) NSArray * devices; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * aliases; 
-(void)replyToTranscript:(id)arg1 withProcessedResponse:(id)arg2 context:(id)arg3 ;
-(void)sendTranscript:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithIMHService:(id)arg1 ;
-(id)allSelfDeviceIDs;
-(id)init;
-(NSSet *)destinations;
-(id<IMHDaemon>)daemon;
-(void)setDaemon:(id<IMHDaemon>)arg1 ;
-(id<IMHService>)idsService;
-(NSArray *)devices;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)setIdsService:(id<IMHService>)arg1 ;
-(NSArray *)aliases;
@end
