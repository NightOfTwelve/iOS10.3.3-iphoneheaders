/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <UIKit/UIStateRestoring.h>

@class NSString, MFMailComposeViewController;

@interface UIMailActivity : UIActivity <UIStateRestoring> {

	char _keyboardVisible;
	char _sourceIsManaged;
	char _hasAnyAccount;
	char _hasFilteredAccount;
	NSString* _subject;
	NSString* _autosaveIdentifier;
	MFMailComposeViewController* _mailComposeViewController;

}

@property (nonatomic,retain) MFMailComposeViewController * mailComposeViewController;              //@synthesize mailComposeViewController=_mailComposeViewController - In the implementation block
@property (assign,nonatomic) char hasAnyAccount;                                                   //@synthesize hasAnyAccount=_hasAnyAccount - In the implementation block
@property (assign,nonatomic) char hasFilteredAccount;                                              //@synthesize hasFilteredAccount=_hasFilteredAccount - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                     //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) char keyboardVisible;                                                 //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (assign,nonatomic) char sourceIsManaged;                                                 //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,retain) NSString * autosaveIdentifier;                                        //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
+(int)activityCategory;
+(id)applicationBundleID;
-(id)init;
-(void)dealloc;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_cleanup;
-(char)sourceIsManaged;
-(id)activityType;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setSourceIsManaged:(char)arg1 ;
-(id)activityViewController;
-(char)keyboardVisible;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)_setSubject:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(void)setKeyboardVisible:(char)arg1 ;
-(void)setAutosaveIdentifier:(NSString *)arg1 ;
-(id)_mailDraftRestorationURL;
-(void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1 ;
-(id)_stateRestorationDraftIsAvailable;
-(MFMailComposeViewController *)mailComposeViewController;
-(void)setHasAnyAccount:(char)arg1 ;
-(void)setHasFilteredAccount:(char)arg1 ;
-(char)hasAnyAccount;
-(char)hasFilteredAccount;
-(NSString *)autosaveIdentifier;
-(char)_restoreDraft;
-(void)setMailComposeViewController:(MFMailComposeViewController *)arg1 ;
-(void)_saveDraft:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

