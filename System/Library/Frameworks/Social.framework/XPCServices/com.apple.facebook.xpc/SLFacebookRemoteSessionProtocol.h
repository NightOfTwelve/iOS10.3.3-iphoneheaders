/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:32:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.facebook.xpc/com.apple.facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLFacebookRemoteSessionProtocol <SLRemoteUploadCompletion>
@required
-(void)tokenSecretForEntitledClientWithHandler:(/*^block*/id)arg1;
-(void)doTestCallWithDict:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)injectCompletedUploadWithCompletion:(/*^block*/id)arg1;
-(void)uploadPost:(id)arg1 withXPCTransferCompletion:(/*^block*/id)arg2;
-(void)uploadPost:(id)arg1 forPID:(id)arg2 withXPCTransferCompletion:(/*^block*/id)arg3;
-(void)uploadPost:(id)arg1 suppressAlerts:(id)arg2 withPostCompletion:(/*^block*/id)arg3;
-(void)uploadsInProgress:(/*^block*/id)arg1;
-(void)cancelUploadWithIdentifier:(id)arg1;
-(void)revokeAccessTokenForAppWithID:(id)arg1;
-(void)revokeAllAccessTokensForDeviceWithCompletion:(/*^block*/id)arg1;
-(void)uploadProfileImageData:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)likeURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)unlikeURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completion:(/*^block*/id)arg3;

@end
