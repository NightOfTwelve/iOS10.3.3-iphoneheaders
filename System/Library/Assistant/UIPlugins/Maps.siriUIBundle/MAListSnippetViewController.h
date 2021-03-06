/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MABaseSnippetViewController.h>
#import <Maps/MAListSnippetViewDelegate.h>

@class NSString;

@interface MAListSnippetViewController : MABaseSnippetViewController <MAListSnippetViewDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_headerLocationForSearchCenter:(id)arg1 location:(CLLocationCoordinate2D)arg2 forMapItem:(id)arg3 ;
-(id)_nearCityString:(id)arg1 ;
-(int)analyticsUITarget;
-(void)listView:(id)arg1 didChooseMapItem:(id)arg2 accessoryButtonTapped:(char)arg3 ;
-(void)_updateTitleAndSubtitleWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_listSnippetView;
-(id)_titleForList:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(char)isMemoryIntensive;
@end

