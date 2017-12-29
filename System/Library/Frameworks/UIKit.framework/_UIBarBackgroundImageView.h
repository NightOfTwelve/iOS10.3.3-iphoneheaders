/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIView, UIImageView;

@interface _UIBarBackgroundImageView : UIImageView {

	UIView* _topStripView;
	UIImageView* _customImageContainer;
	char _translucent;

}

@property (assign,getter=isTranslucent,nonatomic) char translucent;              //@synthesize translucent=_translucent - In the implementation block
-(void)setImage:(id)arg1 ;
-(char)isTranslucent;
-(id)image;
-(void)setTranslucent:(char)arg1 ;
-(void)updateTopStripViewCreateIfNecessary;
-(void)removeTopStripView;
-(id)topStripView;
@end
