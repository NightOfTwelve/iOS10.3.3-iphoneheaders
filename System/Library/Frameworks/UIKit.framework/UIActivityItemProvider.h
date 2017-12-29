/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <Foundation/NSOperation.h>
#import <UIKit/UIActivityItemSource.h>

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {

	id _placeholderItem;
	NSString* _activityType;
	NSString* _status;
	float _progress;
	id _providedItem;

}

@property (nonatomic,copy) NSString * status;                                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) float progress;                                              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id placeholderItem;                                          //@synthesize placeholderItem=_placeholderItem - In the implementation block
@property (nonatomic,retain) id providedItem;                                             //@synthesize providedItem=_providedItem - In the implementation block
@property (setter=_setActivityType:,nonatomic,copy) NSString * activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) id item; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)item;
-(void)setProgress:(float)arg1 ;
-(NSString *)activityType;
-(float)progress;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(void)main;
-(id)placeholderItem;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)setPlaceholderItem:(id)arg1 ;
-(void)setProvidedItem:(id)arg1 ;
-(id)providedItem;
-(void)_setActivityType:(id)arg1 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
@end
