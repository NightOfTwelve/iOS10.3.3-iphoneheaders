/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMesaUnlockBehavior;
@class SBAuthenticationFeedback;

@interface _SBPendingMesaUnlockBehaviorUnlockRequest : NSObject {

	id<SBMesaUnlockBehavior> _behavior;
	id _request;
	SBAuthenticationFeedback* _feedback;

}

@property (nonatomic,readonly) id<SBMesaUnlockBehavior> behavior;                //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) id request;                                       //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) SBAuthenticationFeedback * feedback;              //@synthesize feedback=_feedback - In the implementation block
-(id)initWithBehavior:(id)arg1 request:(id)arg2 feedback:(id)arg3 ;
-(id)request;
-(id<SBMesaUnlockBehavior>)behavior;
-(SBAuthenticationFeedback *)feedback;
@end

