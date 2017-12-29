/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSLayoutYAxisAnchor, NSLayoutDimension;


@protocol UILayoutSupport <NSObject>
@property (nonatomic,readonly) float length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
@required
-(float)length;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutDimension *)heightAnchor;

@end
