/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <assistivetouchd/SCATCustomFocusingView_ViewControllerSupport.h>

@class SCATElementManager, SCATStyleProvider, NSString;

@interface SCATElementManagerViewController : UIViewController <SCATCustomFocusingView_ViewControllerSupport> {

	SCATElementManager* _elementManager;

}

@property (assign,nonatomic) SCATElementManager * elementManager;              //@synthesize elementManager=_elementManager - In the implementation block
@property (nonatomic,readonly) SCATStyleProvider * styleProvider; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPresentWithDisplayContext:(id)arg1 animated:(char)arg2 ;
-(void)didUpdateWithDisplayContext:(id)arg1 animated:(char)arg2 ;
-(void)didDismiss:(char)arg1 ;
-(void)updateCustomFocusingViewStateForViewsWithElement:(id)arg1 ;
-(id)viewsRequiringStateUpdate;
-(id)initWithElementManager:(id)arg1 ;
-(void)willPresentWithDisplayContext:(id)arg1 animated:(char)arg2 ;
-(void)presentWithDisplayContext:(id)arg1 animted:(char)arg2 ;
-(void)didAddSubviewToDisplayContext:(id)arg1 ;
-(void)willDismiss:(char)arg1 ;
-(SCATElementManager *)elementManager;
-(void)setElementManager:(SCATElementManager *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)dismiss:(char)arg1 ;
-(SCATStyleProvider *)styleProvider;
@end

