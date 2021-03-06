/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCRootViewController.h>
#import <VoiceMemos/RCVerticalEditMemoPresentationViewControllerDelegate.h>

@class RCLayoutMetrics, RCVerticalEditMemoPresentationViewController, NSString;

@interface RCVerticalRootViewController : RCRootViewController <RCVerticalEditMemoPresentationViewControllerDelegate> {

	RCLayoutMetrics* _layoutMetrics;
	RCVerticalEditMemoPresentationViewController* _editingListController;

}

@property (nonatomic,retain) RCVerticalEditMemoPresentationViewController * editingListController;              //@synthesize editingListController=_editingListController - In the implementation block
@property (nonatomic,retain) RCLayoutMetrics * layoutMetrics;                                                   //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)playSelectedRecording;
-(void)selectRecordingWithCompositionController:(id)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)canDismissForIdleEvent;
-(id)presentedWaveformDataSource;
-(id)presentedEditMemoViewController;
-(void)presentEditMemoControllerWithCompositionController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)selectedRecordingCompositionController;
-(void)dismissPresentedEditMemoViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareToDismissWithDismissHandler:(/*^block*/id)arg1 ;
-(void)pauseSelectedRecording;
-(char)isTableViewControllerVisible;
-(void)setTableViewControllerVisible:(char)arg1 ;
-(void)deselectRecordingAnimated:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)editMemoPresentationViewController:(id)arg1 willDismissEditMemoController:(id)arg2 ;
-(void)_presentEditedRecordingWithCompositionController:(id)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(RCVerticalEditMemoPresentationViewController *)editingListController;
-(void)setEditingListController:(RCVerticalEditMemoPresentationViewController *)arg1 ;
-(id)navigationItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setLayoutMetrics:(RCLayoutMetrics *)arg1 ;
-(RCLayoutMetrics *)layoutMetrics;
@end

