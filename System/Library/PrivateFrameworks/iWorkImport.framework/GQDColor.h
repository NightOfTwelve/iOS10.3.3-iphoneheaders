/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:34 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class NSString;

@interface GQDColor : NSObject <GQDNameMappable> {

	float mRed;
	float mGreen;
	float mBlue;
	float mAlpha;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
+(id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
+(void)readColorFromProcessor:(id)arg1 reader:(xmlTextReaderRef)arg2 ;
+(id)rgbColorFromReader:(xmlTextReaderRef)arg1 calibrated:(char)arg2 ;
+(id)whiteColorFromReader:(xmlTextReaderRef)arg1 calibrated:(char)arg2 ;
+(id)cmykColorFromReader:(xmlTextReaderRef)arg1 ;
+(id)blackColor;
-(id)initWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(int)htmlRed;
-(int)htmlGreen;
-(int)htmlBlue;
-(NSString *)description;
-(void)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4 ;
-(float)alphaComponent;
-(float)redComponent;
-(float)greenComponent;
-(float)blueComponent;
-(id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2 ;
@end

