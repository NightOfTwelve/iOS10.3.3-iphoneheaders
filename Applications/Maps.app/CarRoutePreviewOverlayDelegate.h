/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CarRoutePreviewOverlayDelegate <NSObject>
@optional
-(void)routePreviewSignSelectedDestinationHandoff:(id)arg1;

@required
-(void)routePreviewSignSelectedNext:(id)arg1;
-(void)routePreviewSignSelectedPrevious:(id)arg1;
-(void)routePreviewSignSelectedStart:(id)arg1;
-(void)routePreviewSign:(id)arg1 selectedAlternateRouteAtIndex:(unsigned)arg2;
-(void)routePreviewSign:(id)arg1 isShowingAlternates:(char)arg2;

@end
