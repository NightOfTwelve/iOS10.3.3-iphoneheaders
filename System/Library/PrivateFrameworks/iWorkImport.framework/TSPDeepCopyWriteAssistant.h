/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPEncoderWriteCoordinatorDelegate.h>

@class TSPObjectContext, TSPDeepCopyObjectMap, NSString;

@interface TSPDeepCopyWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate> {

	TSPObjectContext* _context;
	TSPDeepCopyObjectMap* _objectMap;
	char _resetObjectUUIDs;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)objectTargetType;
-(int)componentWriterMode;
-(id)createMetadataForRootObject:(id)arg1 dataArchiver:(id)arg2 archivedObjects:(id)arg3 componentObjectUUIDMap:(id)arg4 externalReferences:(id)arg5 weakExternalReferences:(id)arg6 lazyReferences:(id)arg7 dataReferences:(id)arg8 error:(id*)arg9 ;
-(char)skipMetadataObjectSerialization;
-(id)initWithContext:(id)arg1 objectMap:(id)arg2 ;
-(void)encodeDeepCopyOfObject:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
@end

