/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <Preferences/PSViewController.h>
#import <CarouselLayoutSettings/CSLIconPostionsStoreDelegate.h>
#import <CarouselLayoutSettings/CSLUIHexIconViewFactory.h>
#import <CarouselLayoutSettings/CSLUIHexIconActionDelegate.h>

@class CSLIconPositionsStore, CSLHexAppGraph, CSLUIFieldOfIconsView, UIActivityIndicatorView, UILabel, NSString;

@interface CSLUILayoutViewController : PSViewController <CSLIconPostionsStoreDelegate, CSLUIHexIconViewFactory, CSLUIHexIconActionDelegate> {

	CSLIconPositionsStore* _iconPositionsStore;
	CSLHexAppGraph* _iconGraph;
	CSLUIFieldOfIconsView* _fieldOfIconsView;
	UIActivityIndicatorView* _spinner;
	UILabel* _nameLabel;

}

@property (assign,nonatomic,__weak) UILabel * nameLabel;              //@synthesize nameLabel=_nameLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tappedIconWithBundleIdentifier:(id)arg1 ;
-(float)defaultPixelDiameter;
-(void)store:(id)arg1 initialSyncComplete:(BOOL)arg2 ;
-(void)store:(id)arg1 updatedIconGraph:(id)arg2 ;
-(void)updatedIconGraph:(id)arg1 ;
-(void)createFieldOfIconsView;
-(void)iconsEdited;
-(void)tappedEmptyHex:(Hex)arg1 ;
-(id)createIconViewWithBundleIdentifier:(id)arg1 ;
-(void)resetIconPositions;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)handleLongPress;
@end

