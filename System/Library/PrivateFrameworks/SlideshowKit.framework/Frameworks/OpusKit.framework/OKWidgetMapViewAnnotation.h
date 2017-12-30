/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPointAnnotation.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString;

@interface OKWidgetMapViewAnnotation : MKPointAnnotation <OKSettingsSupport> {

	NSString* _identifier;
	NSString* _actionScript;

}

@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionScript;              //@synthesize actionScript=_actionScript - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)actionScript;
@end
