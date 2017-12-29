/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class SAFmfGeoFence, MKMapView, UILabel, CNAvatarViewController, UIImageView, NSString;

@interface FMFAFGeoFenceTableViewCell : UITableViewCell <MKMapViewDelegate> {

	SAFmfGeoFence* aceFmfGeoFence;
	MKMapView* mapView;
	UILabel* nameLabel;
	UILabel* fenceLabel;
	CNAvatarViewController* friendAvatarView;
	UIImageView* geoFenceIconImageView;
	float zoomLevel;

}

@property (nonatomic,retain) UILabel * nameLabel; 
@property (nonatomic,retain) UILabel * fenceLabel; 
@property (nonatomic,retain) CNAvatarViewController * friendAvatarView; 
@property (nonatomic,retain) UIImageView * geoFenceIconImageView; 
@property (nonatomic,retain) SAFmfGeoFence * aceFmfGeoFence; 
@property (nonatomic,retain) MKMapView * mapView; 
@property (assign,nonatomic) float zoomLevel; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)friendEmail;
-(UIImageView *)geoFenceIconImageView;
-(UILabel *)fenceLabel;
-(id)friendHandle;
-(id)friendPhone;
-(id)friendName;
-(void)setFriendAvatarView:(CNAvatarViewController *)arg1 ;
-(CNAvatarViewController *)friendAvatarView;
-(void)setFenceLabel:(UILabel *)arg1 ;
-(void)setGeoFenceIconImageView:(UIImageView *)arg1 ;
-(void)updateMap;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setZoomLevel:(float)arg1 ;
-(SAFmfGeoFence *)aceFmfGeoFence;
-(void)setAceFmfGeoFence:(SAFmfGeoFence *)arg1 ;
-(float)zoomLevel;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
@end
