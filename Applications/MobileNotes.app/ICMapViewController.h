/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol MKAnnotation;
@class MKMapView, MKMapItem, MKLocalSearch, NSString;

@interface ICMapViewController : UIViewController <MKMapViewDelegate> {

	id<MKAnnotation> _annotation;
	MKMapView* _mapView;
	MKMapItem* _mapItem;
	MKLocalSearch* _localSearch;

}

@property (nonatomic,retain) id<MKAnnotation> annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                      //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                      //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) MKLocalSearch * localSearch;              //@synthesize localSearch=_localSearch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalSearch:(MKLocalSearch *)arg1 ;
-(void)selectPin;
-(void)_toolbarItemPressed:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(char)wantsFullScreenLayout;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)previewActionItems;
-(id<MKAnnotation>)annotation;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(MKLocalSearch *)localSearch;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithAnnotation:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(MKMapView *)mapView;
@end
