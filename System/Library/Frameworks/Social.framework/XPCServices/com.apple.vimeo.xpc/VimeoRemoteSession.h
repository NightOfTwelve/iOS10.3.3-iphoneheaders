/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:32:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.vimeo.xpc/com.apple.vimeo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.vimeo/com.apple.vimeo-Structs.h>
#import <VUSocialUpload/VURemoteSession.h>
#import <libobjc.A.dylib/VimeoRemoteSessionProtocol.h>
#import <com.apple.vimeo/VimeoPostDelegate.h>

@class NSString;

@interface VimeoRemoteSession : VURemoteSession <VimeoRemoteSessionProtocol, VimeoPostDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertWithDictionary:(CFDictionaryRef)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)uploadPost:(id)arg1 withXPCTransferCompletion:(/*^block*/id)arg2 ;
-(id)account;
-(void)vimeoPost:(id)arg1 uploadProgressDidChange:(float)arg2 ;
-(void)vimeoPostUploadSucceeded:(id)arg1 ;
-(void)vimeoPost:(id)arg1 warningDuringUpload:(int)arg2 ;
-(void)vimeoPost:(id)arg1 uploadFailedWithError:(id)arg2 ;
@end
