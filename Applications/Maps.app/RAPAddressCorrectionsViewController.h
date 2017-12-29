/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>
#import <Maps/RAPAddressCellDelegate.h>
#import <Maps/RAPCategoryChooserDelegate.h>
#import <Maps/RAPInstrumentableTarget.h>

@class RAPReport, RAPPlaceCorrectionsQuestion, UIBarButtonItem, ReportAProblemCategoryChooserViewController, RAPPhotoPickerController, RAPMapFeatureTableViewCell, RAPCommentPartHeaderView, NSString;

@interface RAPAddressCorrectionsViewController : UITableViewController <RAPAddressCellDelegate, RAPCategoryChooserDelegate, RAPInstrumentableTarget> {

	RAPReport* _report;
	RAPPlaceCorrectionsQuestion* _question;
	/*^block*/id _completion;
	UIBarButtonItem* _sendButtonItem;
	UIBarButtonItem* _doneBarItem;
	CLLocationCoordinate2D _editedCoordinate;
	ReportAProblemCategoryChooserViewController* _categoryViewController;
	float _verticalBarOffset;
	RAPPhotoPickerController* _photoPicker;
	RAPMapFeatureTableViewCell* _locationCell;
	RAPCommentPartHeaderView* _commentsHeaderView;

}

@property (nonatomic,retain) RAPMapFeatureTableViewCell * locationCell;                  //@synthesize locationCell=_locationCell - In the implementation block
@property (nonatomic,retain) RAPCommentPartHeaderView * commentsHeaderView;              //@synthesize commentsHeaderView=_commentsHeaderView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
-(int)_commentSection;
-(int)analyticTarget;
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)_locationSection;
-(id)_sendButtonItem;
-(id)_doneBarItem;
-(id)_photoPicker;
-(void)categoryChooserViewController:(id)arg1 didReceiveSelectedCategory:(id)arg2 ;
-(void)valueForAddressType:(int)arg1 changedTo:(id)arg2 ;
-(void)rapCellSelectedCountryCell:(id)arg1 ;
-(void)_computeVerticalBarOffset;
-(void)_send;
-(char)_isCommentSection:(int)arg1 ;
-(int)_photosSection;
-(char)_isPhotosSection:(int)arg1 ;
-(char)_isOptionalCorrectableItemSection:(int)arg1 ;
-(char)_hasCorrectableItemSection;
-(int)_optionalCorrectableItemSection;
-(int)_correctableItemSectionOffset;
-(char)_hasLocationSection;
-(char)_isLocationSection:(int)arg1 ;
-(unsigned)_indexOfCorrectableItemForIndexPath:(id)arg1 ;
-(char)_hasNameAndCategorySection;
-(int)_nameAndCategorySection;
-(char)_isNameAndCategorySection:(int)arg1 ;
-(RAPCommentPartHeaderView *)commentsHeaderView;
-(id)rapReportAddressTableViewMultiCell;
-(void)_updateDoneBarItem;
-(id)snapshotOptionsWithQuestion:(id)arg1 ;
-(void)_beginPickingCategoriesForRowAtIndexPath:(id)arg1 ;
-(id)_problemItemForType:(int)arg1 ;
-(RAPMapFeatureTableViewCell *)locationCell;
-(void)setLocationCell:(RAPMapFeatureTableViewCell *)arg1 ;
-(void)setCommentsHeaderView:(RAPCommentPartHeaderView *)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)_done;
@end
