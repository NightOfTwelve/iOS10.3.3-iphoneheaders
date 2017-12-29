/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface PHCarPlayGenericViewController : UIViewController {

	char _viewIsInAppearedState;
	char _respondsToEventsWhileInCall;

}

@property (readonly) char viewIsInAppearedState;                  //@synthesize viewIsInAppearedState=_viewIsInAppearedState - In the implementation block
@property (assign) char respondsToEventsWhileInCall;              //@synthesize respondsToEventsWhileInCall=_respondsToEventsWhileInCall - In the implementation block
-(char)shouldRespondToHardwareControlEvent;
-(void)setRespondsToEventsWhileInCall:(char)arg1 ;
-(char)respondsToEventsWhileInCall;
-(char)viewIsInAppearedState;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)hardwareControlEventNotification:(id)arg1 ;
@end
