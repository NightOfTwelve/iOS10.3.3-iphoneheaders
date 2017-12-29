/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AEAnnotationProvider;


@protocol AEHelper <NSObject>
@property (nonatomic,readonly) AEAnnotationProvider * annotationProvider; 
@optional
-(void)setMetadata:(id)arg1 forKey:(id)arg2;
-(char)acknowledgeAnnotationProvider:(id)arg1 willMergeAnnotationsWithAssertVersionMismatch:(id)arg2 assetID:(id)arg3 assetURL:(id)arg4;
-(AEAnnotationProvider *)annotationProvider;
-(id)helperViewControllerWithError:(id*)arg1;

@required
-(id)helperCoverImage;
-(id)helperMetadataForKey:(id)arg1;
-(void)helperDeletePersistentCache;
-(void)helperViewControllerWithCompletion:(/*^block*/id)arg1;

@end
