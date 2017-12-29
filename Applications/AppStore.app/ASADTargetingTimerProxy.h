/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/ASADTargetingTimerProxyFireable.h>

@protocol ASADTargetingTimerProxyFireable;
@class NSString;

@interface ASADTargetingTimerProxy : NSObject <ASADTargetingTimerProxyFireable> {

	id<ASADTargetingTimerProxyFireable> _timerTarget;

}

@property (assign,nonatomic,__weak) id<ASADTargetingTimerProxyFireable> timerTarget;              //@synthesize timerTarget=_timerTarget - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ASADTargetingTimerProxyFireable>)timerTarget;
-(void)as_ADTargetingTimerProxyTimerFired:(id)arg1 ;
-(void)setTimerTarget:(id<ASADTargetingTimerProxyFireable>)arg1 ;
@end
