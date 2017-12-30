/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:42 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/PlugIns/com.apple.DiagnosticExtensions.Baseband.appex/com.apple.DiagnosticExtensions.Baseband
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.DiagnosticExtensions.Baseband/com.apple.DiagnosticExtensions.Baseband-Structs.h>
#import <DiagnosticExtensions/DEExtensionProvider.h>

@protocol OS_dispatch_group;
@class NSObject, NSURL;

@interface DEBasebandExtension : DEExtensionProvider {

	BOOL logDumpTriggered;
	CFStringRef logDumpPrefix;
	NSObject*<OS_dispatch_group> trackLogDump;
	NSURL* _basebandRootURL;

}

@property (nonatomic,retain) NSURL * basebandRootURL;              //@synthesize basebandRootURL=_basebandRootURL - In the implementation block
+(id)groupNameForURL:(id)arg1 ;
-(void)logDumpStarted:(CFDictionaryRef)arg1 ;
-(void)logDumpCompleted:(CFDictionaryRef)arg1 ;
-(void)setBasebandRootURL:(NSURL *)arg1 ;
-(NSURL *)basebandRootURL;
-(id)init;
-(void)dealloc;
-(id)attachmentsForParameters:(id)arg1 ;
-(id)attachmentList;
@end
