/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPreviewActionGroup.h>
#import <UIKit/UIPreviewActionItem.h>

@protocol _MFLazyPreviewActionItemDataSource;
@class NSString;

@interface _MFLazyPreviewActionItem : UIPreviewActionGroup <UIPreviewActionItem> {

	id<_MFLazyPreviewActionItemDataSource> _dataSource;

}

@property (nonatomic,retain) id<_MFLazyPreviewActionItemDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
+(id)previewActionItemWithTitle:(id)arg1 dataSource:(id)arg2 ;
-(void)setDataSource:(id<_MFLazyPreviewActionItemDataSource>)arg1 ;
-(void)dealloc;
-(id<_MFLazyPreviewActionItemDataSource>)dataSource;
-(id)_actions;
-(/*^block*/id)handler;
@end

