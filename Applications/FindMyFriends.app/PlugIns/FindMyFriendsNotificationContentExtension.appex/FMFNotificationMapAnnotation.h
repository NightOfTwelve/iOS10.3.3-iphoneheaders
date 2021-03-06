/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/PlugIns/FindMyFriendsNotificationContentExtension.appex/FindMyFriendsNotificationContentExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriendsNotificationContentExtension/FindMyFriendsNotificationContentExtension-Structs.h>
#import <libobjc.A.dylib/FMAnnotation.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class FMAccuracyOverlay, UIColor, UIImage, NSString;

@interface FMFNotificationMapAnnotation : NSObject <FMAnnotation, MKAnnotation> {

	char _isBorderEnabled;
	UIColor* tintColor;
	FMAccuracyOverlay* overlay;
	UIImage* largeOverlayIcon;
	UIImage* smallOverlayIcon;
	UIImage* smallAnnotationIcon;
	UIImage* largeAnnotationIcon;
	double horizontalAccuracy;
	double distanceFromUser;
	CLLocationCoordinate2D coordinate;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) char isBorderEnabled;                           //@synthesize isBorderEnabled=_isBorderEnabled - In the implementation block
@property (nonatomic,retain) UIImage * largeAnnotationIcon; 
@property (nonatomic,retain) UIImage * smallAnnotationIcon; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FMAccuracyOverlay * overlay; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (assign,nonatomic) double distanceFromUser; 
@property (nonatomic,retain) UIImage * largeOverlayIcon; 
@property (nonatomic,retain) UIImage * smallOverlayIcon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(id)annotation;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(FMAccuracyOverlay *)overlay;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(char)hasKnownLocation;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)horizontalAccuracy;
-(void)setOverlay:(FMAccuracyOverlay *)arg1 ;
-(char)isThisDevice;
-(double)distanceFromUser;
-(void)setDistanceFromUser:(double)arg1 ;
-(char)isBorderEnabled;
-(UIImage *)largeAnnotationIcon;
-(UIImage *)smallAnnotationIcon;
-(UIImage *)largeOverlayIcon;
-(void)setLargeOverlayIcon:(UIImage *)arg1 ;
-(UIImage *)smallOverlayIcon;
-(void)setSmallOverlayIcon:(UIImage *)arg1 ;
-(void)setIsBorderEnabled:(char)arg1 ;
-(void)setSmallAnnotationIcon:(UIImage *)arg1 ;
-(void)setLargeAnnotationIcon:(UIImage *)arg1 ;
@end

