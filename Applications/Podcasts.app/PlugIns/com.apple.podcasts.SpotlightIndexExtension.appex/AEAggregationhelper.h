/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/AEHelper.h>

@class AEAnnotationProvider, NSArray, NSURL, NSDictionary, NSString;

@interface AEAggregationhelper : NSObject <AEHelper> {

	NSArray* _plugins;
	NSURL* _url;
	NSDictionary* _options;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AEAnnotationProvider * annotationProvider; 
-(id)initWithPlugins:(id)arg1 forUrl:(id)arg2 withOptions:(id)arg3 ;
-(id)helperCoverImage;
-(id)helperMetadataForKey:(id)arg1 ;
-(void)setMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)helperDeletePersistentCache;
-(char)acknowledgeAnnotationProvider:(id)arg1 willMergeAnnotationsWithAssertVersionMismatch:(id)arg2 assetID:(id)arg3 assetURL:(id)arg4 ;
-(void)viewControllerFromPluginIndex:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)helperViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(AEAnnotationProvider *)annotationProvider;
-(void)dealloc;
@end
