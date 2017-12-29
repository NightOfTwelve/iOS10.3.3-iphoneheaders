/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UINamedLayerImage <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) float opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (assign,nonatomic) char fixedFrame; 
@optional
-(id)imageObj;
-(char)fixedFrame;
-(void)setFixedFrame:(char)arg1;

@required
-(CGRect)frame;
-(NSString *)name;
-(float)opacity;
-(int)blendMode;

@end
