/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPCommentQuestion.h>

@class NSData, GEOComposedRouteStep, TransitDirectionsListItem;

@interface RAPInstructionCorrectionQuestion : RAPCommentQuestion {

	NSData* _cellScreenshotImageData;
	GEOComposedRouteStep* _composedRouteStep;
	TransitDirectionsListItem* _listItem;

}

@property (nonatomic,copy) NSData * cellScreenshotImageData;                          //@synthesize cellScreenshotImageData=_cellScreenshotImageData - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * composedRouteStep;              //@synthesize composedRouteStep=_composedRouteStep - In the implementation block
@property (nonatomic,readonly) TransitDirectionsListItem * listItem;                  //@synthesize listItem=_listItem - In the implementation block
-(void)_fillSubmittableProblem:(id)arg1 ;
-(id)_commentsPlaceholderText;
-(void)fillIndexesForResponse:(id)arg1 problemAticRouteIndex:(id)arg2 correction:(id)arg3 ;
-(void)setCellScreenshotImageData:(NSData *)arg1 ;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 composedRouteStep:(id)arg3 listItem:(id)arg4 ;
-(NSData *)cellScreenshotImageData;
-(GEOComposedRouteStep *)composedRouteStep;
-(TransitDirectionsListItem *)listItem;
@end

