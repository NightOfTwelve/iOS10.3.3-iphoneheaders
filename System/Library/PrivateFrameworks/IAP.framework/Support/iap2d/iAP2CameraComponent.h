/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iap2d/iAP2IdentificationParameter.h>

@class NSNumber, NSString, NSMutableArray;

@interface iAP2CameraComponent : iAP2IdentificationParameter {

	NSNumber* _componentID;
	NSString* _componentName;
	NSMutableArray* _supportedImageCaptureFormatIdentifiers;
	NSMutableArray* _supportedLivePreviewFormatIdentifiers;

}

@property (retain) NSNumber * componentID;                                               //@synthesize componentID=_componentID - In the implementation block
@property (retain) NSString * componentName;                                             //@synthesize componentName=_componentName - In the implementation block
@property (retain) NSMutableArray * supportedImageCaptureFormatIdentifiers;              //@synthesize supportedImageCaptureFormatIdentifiers=_supportedImageCaptureFormatIdentifiers - In the implementation block
@property (retain) NSMutableArray * supportedLivePreviewFormatIdentifiers;               //@synthesize supportedLivePreviewFormatIdentifiers=_supportedLivePreviewFormatIdentifiers - In the implementation block
-(NSNumber *)componentID;
-(void)setComponentID:(NSNumber *)arg1 ;
-(void)addSupportedImageCaptureFormatIdentifier:(id)arg1 ;
-(void)addSupportedLivePreviewFormatIdentifier:(id)arg1 ;
-(NSMutableArray *)supportedImageCaptureFormatIdentifiers;
-(void)setSupportedImageCaptureFormatIdentifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)supportedLivePreviewFormatIdentifiers;
-(void)setSupportedLivePreviewFormatIdentifiers:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)componentName;
-(void)setComponentName:(NSString *)arg1 ;
@end
