/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/_SFBookmarkTextEntryTableViewControllerDelegate.h>

@protocol WebClipViewControllerDelegate;
@class TabDocument, UITableViewCell, UIImageView, UIWebClip, NSObject, NSString;

@interface WebClipViewController : UITableViewController <UITextFieldDelegate, _SFBookmarkTextEntryTableViewControllerDelegate> {

	TabDocument* _tabDocument;
	UITableViewCell* _titleCell;
	UITableViewCell* _addressCell;
	UIImageView* _iconImageView;
	char _suspendAfterDismiss;
	char _delegateNotifiedOfResult;
	char _canEditAndSave;
	UIWebClip* _webClip;
	NSObject*<WebClipViewControllerDelegate> _delegate;

}

@property (retain) UIWebClip * webClip;                                                             //@synthesize webClip=_webClip - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<WebClipViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char canEditAndSave;                                                   //@synthesize canEditAndSave=_canEditAndSave - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTabDocument:(id)arg1 ;
-(void)_add;
-(char)_shouldUseTranslucentAppearance;
-(char)_canAddWebClip;
-(void)updateUIAnimated:(char)arg1 ;
-(void)setCanEditAndSave:(char)arg1 ;
-(char)canEditAndSave;
-(void)setDelegate:(NSObject*<WebClipViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(NSObject*<WebClipViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)_cancel;
-(char)_canEditFieldsInCurrentViewController;
-(id)_titleCell;
-(CGPoint)_centerForIconView;
-(void)_updateIconViewFrame;
-(void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2 ;
-(char)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1 ;
-(void)setWebClip:(UIWebClip *)arg1 ;
-(UIWebClip *)webClip;
-(void)_textFieldChanged:(id)arg1 ;
-(void)_updateCells;
@end
