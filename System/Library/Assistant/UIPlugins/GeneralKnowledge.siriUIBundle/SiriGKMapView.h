/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class MKMapView, NSString, MKPointAnnotation;

@interface SiriGKMapView : SiriGKView {

	MKMapView* _mapView;
	float _mapHeight;
	CLLocationCoordinate2D _coordinate;
	NSString* _calloutTitle;
	SCD_Struct_Si1 _boundingRect;
	MKPointAnnotation* _pointAnnotation;

}
-(void)openInMaps;
-(void)setupMap;
-(id)initWithCoodinate:(CLLocationCoordinate2D)arg1 mapSpan:(double)arg2 mapHeight:(float)arg3 calloutTitle:(id)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)isSelectable;
@end

