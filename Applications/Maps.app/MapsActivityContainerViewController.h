/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol ShareItemSource, MapsActivityContainerViewControllerDelegate;
@class MapsActivityViewController, ShareMapRepresentationViewController, UIBarButtonItem;

@interface MapsActivityContainerViewController : UIViewController {

	MapsActivityViewController* _mapsActivityViewController;
	ShareMapRepresentationViewController* _previewMapViewController;
	UIBarButtonItem* _nextButtonItem;
	float _heightActivityView;
	char _sheetShown;
	id<ShareItemSource> _shareItem;
	char _portraitMode;
	id<MapsActivityContainerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) char portraitMode;                                                            //@synthesize portraitMode=_portraitMode - In the implementation block
@property (assign,nonatomic,__weak) id<MapsActivityContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMapsActivityViewController:(id)arg1 shareItem:(id)arg2 ;
-(char)_usePortraitModeForTraitCollection:(id)arg1 ;
-(void)setPortraitMode:(char)arg1 ;
-(char)portraitMode;
-(void)setDelegate:(id<MapsActivityContainerViewControllerDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MapsActivityContainerViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_nextButtonTapped:(id)arg1 ;
@end
