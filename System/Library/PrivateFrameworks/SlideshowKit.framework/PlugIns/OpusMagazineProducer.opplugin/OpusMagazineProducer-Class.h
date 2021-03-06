/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducer.h>

@class NSMutableArray, OKAutoLayout;

@interface OpusMagazineProducer : OKProducer {

	long _randomSeed;
	NSMutableArray* _synopsisGroups;
	double _audioPlaylistDuration;
	NSMutableArray* _pageDurations;
	int _pageDurationsIndex;
	double _transitionDuration;
	OKAutoLayout* _autoLayoutEngine;

}
+(void)setupJavascriptContext:(id)arg1 ;
-(char)_authorFinish:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)_authorProduce:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)_authorImport:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)_resolveThumbnailPageWidgetForWidget:(id)arg1 ;
-(void)_initDurationsForPageInfos:(id)arg1 ;
-(char)_authorBootstrap:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)_allLayoutsFromTileEngine:(id)arg1 ;
-(char)_authorCluster:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)_setupResolutions:(id)arg1 ;
-(id)_configPanoramaSettings:(id)arg1 panDuration:(double)arg2 ;
-(id)_configPageWidgetsSettings:(id)arg1 mediaItemMediaAttributes:(id)arg2 textItems:(id)arg3 pageItems:(id)arg4 pageInfo:(id)arg5 properties:(id)arg6 progressBlock:(/*^block*/id)arg7 error:(id*)arg8 ;
-(char)_addPageWithPageInfo:(id)arg1 primaryResolutionKey:(id)arg2 progressBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)_addPageTemplateToPresentation:(id)arg1 templateName:(id)arg2 withSettings:(id)arg3 zOrder:(id)arg4 ;
-(void)_initTemplatesAndScript:(id)arg1 ;
-(void)_initNavigatorSettings;
-(void)_initCouchPotatoSettings;
-(void)_addAnimationsToLayout:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)supportsLiveAuthoring;
-(char)author:(char)arg1 progressBlock:(/*^block*/id)arg2 requiresProducer:(inout char*)arg3 error:(id*)arg4 ;
-(char)liveAuthorInitialBootstrap:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)needsLiveAuthoring;
-(id)liveAuthorNextChunk:(/*^block*/id)arg1 error:(id*)arg2 ;
-(float)currentLiveAuthoringProgress;
-(unsigned)totalNumberOfLiveAuthoringItems;
-(float)liveAuthoringProgressForMediaItem:(id)arg1 ;
-(char)resetLiveAuthoring;
-(void)didPanMediaForWidget:(id)arg1 toState:(id)arg2 ;
-(void)didChangeTextForWidget:(id)arg1 toSettings:(id)arg2 ;
-(float)_croppedFractionforRectAspectRatio:(float)arg1 photoAspectRatio:(float)arg2 ;
@end

