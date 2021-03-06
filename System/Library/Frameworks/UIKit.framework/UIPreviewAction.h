/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPreviewActionItem_Internal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIPreviewActionItem.h>

@class NSString, UIColor, UIImage;

@interface UIPreviewAction : NSObject <UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem> {

	NSString* _title;
	UIImage* _image;
	NSString* _identifier;
	UIColor* _color;
	int _style;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                                     //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) int style;                                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
+(id)actionWithTitle:(id)arg1 style:(int)arg2 handler:(/*^block*/id)arg3 ;
+(id)_checkmarkImage;
+(id)_actionWithPreviewMenuItem:(id)arg1 ;
+(id)_actionWithTitle:(id)arg1 style:(int)arg2 color:(id)arg3 image:(id)arg4 handler:(/*^block*/id)arg5 ;
+(id)_actionWithTitle:(id)arg1 style:(int)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)_actionWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(int)style;
-(UIImage *)image;
-(id)_color;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)_setColor:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)_effectiveColor;
-(id)_effectiveImage;
@end

