/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/PlugIns/VoicemailMessageNotificationExtension.appex/VoicemailMessageNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoicemailMessageNotificationExtension/VoicemailMessageNotificationExtension-Structs.h>
#import <MobilePhone/VMMessageViewController.h>
#import <libobjc.A.dylib/UNNotificationContentExtension.h>

@class UIColor, CNContact, CNContactStore, NSString;

@interface MPVoicemailMessageNotificationViewController : VMMessageViewController <UNNotificationContentExtension> {

	CNContact* _contact;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
-(id)init;
-(void)dealloc;
-(void)reloadData;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(CNContact *)contact;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)didReceiveNotification:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mediaPlay;
-(void)mediaPause;
-(unsigned)mediaPlayPauseButtonType;
-(CGRect)mediaPlayPauseButtonFrame;
-(UIColor *)mediaPlayPauseButtonTintColor;
@end

