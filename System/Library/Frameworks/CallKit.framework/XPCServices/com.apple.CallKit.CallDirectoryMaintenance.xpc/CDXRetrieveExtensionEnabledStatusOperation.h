/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:15:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectoryMaintenance.xpc/com.apple.CallKit.CallDirectoryMaintenance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, CXCallDirectoryStore;

@interface CDXRetrieveExtensionEnabledStatusOperation : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _extensionIdentifier;
	CXCallDirectoryStore* _store;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * extensionIdentifier;                    //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,retain) CXCallDirectoryStore * store;                    //@synthesize store=_store - In the implementation block
-(id)initWithExtensionIdentifier:(id)arg1 queue:(id)arg2 store:(id)arg3 ;
-(id)initWithExtensionIdentifier:(id)arg1 store:(id)arg2 ;
-(NSString *)extensionIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setStore:(CXCallDirectoryStore *)arg1 ;
-(CXCallDirectoryStore *)store;
@end

