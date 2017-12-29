/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIGaussianBlurXY : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSigmaX;
	NSNumber* inputSigmaY;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSigmaX; 
@property (nonatomic,retain) NSNumber * inputSigmaY; 
+(id)customAttributes;
-(char)_isIdentity;
-(NSNumber *)inputSigmaX;
-(void)setInputSigmaX:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaY;
-(void)setInputSigmaY:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end
