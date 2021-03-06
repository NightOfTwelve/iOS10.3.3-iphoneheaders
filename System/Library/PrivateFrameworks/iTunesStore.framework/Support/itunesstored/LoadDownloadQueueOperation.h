/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSNumber, NSMutableOrderedSet, NSMutableArray, NSString, SSURLRequestProperties, NSOrderedSet;

@interface LoadDownloadQueueOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSNumber* _accountIdentifier;
	NSMutableOrderedSet* _downloads;
	char _needsAuthentication;
	NSMutableArray* _rangesToLoad;
	int _reason;
	NSString* _requestIdentifier;
	SSURLRequestProperties* _requestProperties;
	NSString* _mdSyncState;

}

@property (readonly) SSURLRequestProperties * requestProperties; 
@property (retain) NSNumber * accountIdentifier; 
@property (assign) char needsAuthentication; 
@property (assign) int reason; 
@property (copy) NSString * requestIdentifier; 
@property (readonly) NSOrderedSet * downloads; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newLoadAutomaticDownloadQueueOperation;
-(char)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2 ;
-(id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 ;
-(char)_runMachineDataOperationWithRequest:(id)arg1 syncState:(id*)arg2 ;
-(char)_shouldSendKeyBagSync;
-(id)_account;
-(id)init;
-(void)run;
-(int)reason;
-(char)needsAuthentication;
-(void)setNeedsAuthentication:(char)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(SSURLRequestProperties *)requestProperties;
-(id)initWithRequestProperties:(id)arg1 ;
-(NSString *)requestIdentifier;
-(NSOrderedSet *)downloads;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setReason:(int)arg1 ;
-(void)_handleResponse:(id)arg1 ;
@end

