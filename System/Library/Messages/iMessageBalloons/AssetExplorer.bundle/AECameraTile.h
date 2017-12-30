/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class UIView, NSString;

@interface AECameraTile : NSObject <PXUIViewBasicTile, PXReusableObject> {

	UIView* _view;

}

@property (setter=_setView:,nonatomic,retain) UIView * view;              //@synthesize view=_view - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)view;
-(void)prepareForReuse;
-(void)becomeReusable;
-(void)_setView:(id)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
@end
