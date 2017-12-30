/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitOperationContext.h>

@class NSMapTable, NSString;

@interface CPLDownloadResourcesOperationContext : NSObject <CPLCloudKitOperationContext> {

	NSMapTable* resourceToProgressMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)extendedStatusDescriptionStrings;
-(void)updateProgress:(double)arg1 forResource:(id)arg2 ;
-(void)recordCompletionForResource:(id)arg1 withError:(id)arg2 ;
-(void)addResource:(id)arg1 ;
@end
