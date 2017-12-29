/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobilePhone/PHVoicemailGreetingPlaybackCellDelegate.h>
#import <MobilePhone/PHVoicemailGreetingModelDelegate.h>

@protocol PHVoicemailGreetingViewControllerDelegate;
@class PHVoicemailGreetingModel, UIBarButtonItem, NSString;

@interface PHVoicemailGreetingViewController : UITableViewController <PHVoicemailGreetingPlaybackCellDelegate, PHVoicemailGreetingModelDelegate> {

	char _presentedFromSetup;
	char _hasRecordedNewGreeting;
	id<PHVoicemailGreetingViewControllerDelegate> _greetingDelegate;
	PHVoicemailGreetingModel* _greetingModel;
	unsigned _selectedGreetingType;
	UIBarButtonItem* _saveItem;
	UIBarButtonItem* _progressItem;

}

@property (assign,nonatomic) char hasRecordedNewGreeting;                                       //@synthesize hasRecordedNewGreeting=_hasRecordedNewGreeting - In the implementation block
@property (nonatomic,retain) PHVoicemailGreetingModel * greetingModel;                          //@synthesize greetingModel=_greetingModel - In the implementation block
@property (assign,nonatomic) unsigned selectedGreetingType;                                     //@synthesize selectedGreetingType=_selectedGreetingType - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveItem;                                        //@synthesize saveItem=_saveItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * progressItem;                                    //@synthesize progressItem=_progressItem - In the implementation block
@property (getter=isPresentedFromSetup) char presentedFromSetup;                                //@synthesize presentedFromSetup=_presentedFromSetup - In the implementation block
@property (assign) id<PHVoicemailGreetingViewControllerDelegate> greetingDelegate;              //@synthesize greetingDelegate=_greetingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)playStopButtonTapped;
-(void)recordStopButtonTapped;
-(void)setGreetingDelegate:(id<PHVoicemailGreetingViewControllerDelegate>)arg1 ;
-(PHVoicemailGreetingModel *)greetingModel;
-(char)isPresentedFromSetup;
-(void)_saveButtonTapped;
-(void)setSaveItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)saveItem;
-(void)setProgressItem:(UIBarButtonItem *)arg1 ;
-(void)setGreetingModel:(PHVoicemailGreetingModel *)arg1 ;
-(void)_selectCell:(id)arg1 ;
-(id<PHVoicemailGreetingViewControllerDelegate>)greetingDelegate;
-(void)setSelectedGreetingType:(unsigned)arg1 ;
-(id)playbackControlsCell;
-(id)sliderCell;
-(char)hasRecordedNewGreeting;
-(id)_titleForCellAtIndexPath:(id)arg1 ;
-(unsigned)selectedGreetingType;
-(UIBarButtonItem *)progressItem;
-(void)setHasRecordedNewGreeting:(char)arg1 ;
-(void)voicemailGreetingAudioControllerDidChangeState:(int)arg1 ;
-(void)voicemailGreetingFailedWithError:(id)arg1 ;
-(void)voicemailGreetingRecordingProgressChanged:(float)arg1 ;
-(void)voicemailGreetingPlayingProgressChanged:(float)arg1 ;
-(void)voicemailGreetingDurationChanged:(double)arg1 ;
-(void)voicemailGreetingDidFinishRecording;
-(void)voicemailGreetingDidSave;
-(id)_selectedCellIndexPath;
-(void)setPresentedFromSetup:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)_cancelButtonTapped;
-(void)_handleDeactivation:(id)arg1 ;
@end
