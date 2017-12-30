/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UsageSettings/UsageSettings-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, NSString;

@interface SpinnerBezel : UIView {

	UIActivityIndicatorView* _spinner;
	NSString* _bezelText;

}

@property (nonatomic,retain) NSString * bezelText;              //@synthesize bezelText=_bezelText - In the implementation block
-(NSString *)bezelText;
-(void)setBezelText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
@end
