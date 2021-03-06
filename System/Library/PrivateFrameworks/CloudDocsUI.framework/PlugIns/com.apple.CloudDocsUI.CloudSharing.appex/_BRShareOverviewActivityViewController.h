/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:28 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/PlugIns/com.apple.CloudDocsUI.CloudSharing.appex/com.apple.CloudDocsUI.CloudSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <com.apple.CloudDocsUI.CloudSharing/MFMessageComposeViewControllerDelegate.h>

@protocol BRShareOverviewActivityViewControllerDelegate;
@class UIViewController, NSString;

@interface _BRShareOverviewActivityViewController : UIActivityViewController <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate> {

	UIViewController* _vcForActivityPresentation;
	id<BRShareOverviewActivityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) UIViewController * vcForActivityPresentation;                            //@synthesize vcForActivityPresentation=_vcForActivityPresentation - In the implementation block
@property (assign,nonatomic,__weak) id<BRShareOverviewActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVcForActivityPresentation:(UIViewController *)arg1 ;
-(void)setupActivityDelegate;
-(UIViewController *)vcForActivityPresentation;
-(void)setDelegate:(id<BRShareOverviewActivityViewControllerDelegate>)arg1 ;
-(id<BRShareOverviewActivityViewControllerDelegate>)delegate;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)mailComposeController:(id)arg1 shouldSendMail:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

