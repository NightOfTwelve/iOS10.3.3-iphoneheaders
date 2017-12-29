/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLRemoteUploadCompletion;
@class NSXPCConnection, NSString;

@interface SLUploadCompletionSession : NSObject {

	NSXPCConnection* _connection;
	id<SLRemoteUploadCompletion> _remoteProxy;
	NSString* _serviceName;

}
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(void)completedUploadsWithHandler:(/*^block*/id)arg1 ;
-(void)_connect;
@end
