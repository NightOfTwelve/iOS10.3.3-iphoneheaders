/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBSServiceFacilityClient, NSString;

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable> {

	SBSServiceFacilityClient* _client;

}

@property (nonatomic,readonly) SBSServiceFacilityClient * client; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)serviceFacilityClientClass;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(SBSServiceFacilityClient *)client;
@end
