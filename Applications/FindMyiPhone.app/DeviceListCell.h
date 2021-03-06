/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol UIViewControllerPreviewing;
@class FMIPDevice, UILabel, UIImageView, FMDistanceBadge;

@interface DeviceListCell : UITableViewCell {

	FMIPDevice* _representedDevice;
	UILabel* _deviceNameLabel;
	UILabel* _deviceStatusLabel;
	UIImageView* _statusMarbleImage;
	UIImageView* _deviceIconImage;
	UIImageView* _deviceIconOverlayImage;
	FMDistanceBadge* _distanceBadge;
	id<UIViewControllerPreviewing> _previewHandler;
	id _stopObservingDeviceToken;

}

@property (nonatomic,retain) id stopObservingDeviceToken;                                //@synthesize stopObservingDeviceToken=_stopObservingDeviceToken - In the implementation block
@property (assign,nonatomic,__weak) FMIPDevice * representedDevice;                      //@synthesize representedDevice=_representedDevice - In the implementation block
@property (nonatomic,retain) UILabel * deviceNameLabel;                                  //@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * deviceStatusLabel;                                //@synthesize deviceStatusLabel=_deviceStatusLabel - In the implementation block
@property (nonatomic,retain) UIImageView * statusMarbleImage;                            //@synthesize statusMarbleImage=_statusMarbleImage - In the implementation block
@property (nonatomic,retain) UIImageView * deviceIconImage;                              //@synthesize deviceIconImage=_deviceIconImage - In the implementation block
@property (nonatomic,retain) UIImageView * deviceIconOverlayImage;                       //@synthesize deviceIconOverlayImage=_deviceIconOverlayImage - In the implementation block
@property (nonatomic,retain) FMDistanceBadge * distanceBadge;                            //@synthesize distanceBadge=_distanceBadge - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewing> previewHandler;              //@synthesize previewHandler=_previewHandler - In the implementation block
+(id)spinnerFrames;
+(void)setup;
-(void)updateWithDevice:(id)arg1 ;
-(void)updateDistance;
-(void)setRepresentedDevice:(FMIPDevice *)arg1 ;
-(id<UIViewControllerPreviewing>)previewHandler;
-(void)setPreviewHandler:(id<UIViewControllerPreviewing>)arg1 ;
-(void)updateAccessibilityLabel;
-(UILabel *)deviceStatusLabel;
-(void)setDeviceStatusLabel:(UILabel *)arg1 ;
-(UIImageView *)statusMarbleImage;
-(FMDistanceBadge *)distanceBadge;
-(UIImageView *)deviceIconImage;
-(UIImageView *)deviceIconOverlayImage;
-(void)setStatusMarbleImage:(UIImageView *)arg1 ;
-(void)setDeviceIconImage:(UIImageView *)arg1 ;
-(void)setDeviceIconOverlayImage:(UIImageView *)arg1 ;
-(void)setDistanceBadge:(FMDistanceBadge *)arg1 ;
-(id)stopObservingDeviceToken;
-(void)setStopObservingDeviceToken:(id)arg1 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(UILabel *)deviceNameLabel;
-(void)setDeviceNameLabel:(UILabel *)arg1 ;
-(FMIPDevice *)representedDevice;
@end

