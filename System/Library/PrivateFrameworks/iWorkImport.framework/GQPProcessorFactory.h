/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQPProcessorFactory : NSObject
+(CFStringRef)createUtiForDocument:(CFStringRef)arg1 ;
+(int)applicationForDocumentUti:(CFStringRef)arg1 ;
+(char)isTangierTEFDocumentUti:(CFStringRef)arg1 ;
+(char)isTemplateUti:(CFStringRef)arg1 ;
+(CFURLRef)newEmbeddedSageUrlForTangierDocumentUrl:(CFURLRef)arg1 uti:(CFStringRef)arg2 isBundle:(char*)arg3 ;
+(id)retainedProcessorForDocument:(CFURLRef)arg1 zipArchive:(id)arg2 uti:(CFStringRef)arg3 outputType:(int)arg4 outputPath:(CFStringRef)arg5 previewRequest:(QLPreviewRequestRef)arg6 progressiveHelper:(id)arg7 cryptoKey:(id)arg8 ;
+(id)retainedProcessorForDocument:(CFURLRef)arg1 zipArchive:(id)arg2 uti:(CFStringRef)arg3 outputType:(int)arg4 outputPath:(CFStringRef)arg5 previewRequest:(QLPreviewRequestRef)arg6 progressiveHelper:(id)arg7 ;
@end

