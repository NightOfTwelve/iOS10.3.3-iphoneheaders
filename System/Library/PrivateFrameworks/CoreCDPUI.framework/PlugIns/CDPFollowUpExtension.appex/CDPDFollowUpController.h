/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:33 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/PlugIns/CDPFollowUpExtension.appex/CDPFollowUpExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FLFollowUpController, CDPDFollowUpFactory;

@interface CDPDFollowUpController : NSObject {

	FLFollowUpController* _followUpController;
	CDPDFollowUpFactory* _followUpFactory;

}
+(id)sharedInstance;
-(id)init;
-(char)postFollowUpItemForContext:(id)arg1 error:(id*)arg2 ;
-(char)clearFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
@end

