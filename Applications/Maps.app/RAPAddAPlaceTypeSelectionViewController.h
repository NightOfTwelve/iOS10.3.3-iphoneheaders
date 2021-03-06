/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/RAPInstrumentableTarget.h>

@class RAPAddNewPlaceQuestion, NSString;

@interface RAPAddAPlaceTypeSelectionViewController : UITableViewController <RAPInstrumentableTarget> {

	RAPAddNewPlaceQuestion* _question;
	/*^block*/id _cancelBlock;
	/*^block*/id _selectionBlock;

}

@property (nonatomic,retain) RAPAddNewPlaceQuestion * question;              //@synthesize question=_question - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                   //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,copy) id selectionBlock;                                //@synthesize selectionBlock=_selectionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
-(void)setQuestion:(RAPAddNewPlaceQuestion *)arg1 ;
-(RAPAddNewPlaceQuestion *)question;
-(int)analyticTarget;
-(void)coreRoutineEnabledStateChanged:(id)arg1 ;
-(id)initWithAddNewPlaceQuestion:(id)arg1 onCancel:(/*^block*/id)arg2 onSelection:(/*^block*/id)arg3 ;
-(void)_captureAnalyticsForSelectedType:(int)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id)selectionBlock;
-(void)setSelectionBlock:(id)arg1 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
@end

