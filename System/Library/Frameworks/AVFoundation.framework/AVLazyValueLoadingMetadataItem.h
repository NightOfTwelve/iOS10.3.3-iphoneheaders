/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVMetadataItem.h>

@class AVLazyValueLoadingMetadataItemInternal;

@interface AVLazyValueLoadingMetadataItem : AVMetadataItem {

	AVLazyValueLoadingMetadataItemInternal* _lazyMetadataItem;

}
+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)value;
-(id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(char)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(int)_valueStatus;
-(void)_valueRequestDidFinish;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finalize;
@end
