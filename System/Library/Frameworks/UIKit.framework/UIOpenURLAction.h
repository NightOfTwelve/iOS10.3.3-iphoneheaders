/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSURL;

@interface UIOpenURLAction : BSAction

@property (nonatomic,copy,readonly) NSURL * url; 
-(int)UIActionType;
-(NSURL *)url;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)initWithURL:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
@end

