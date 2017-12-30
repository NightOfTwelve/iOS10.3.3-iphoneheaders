/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKQuery;

@interface CPLCloudKitQueryOptions : NSObject {

	CKQuery* _query;
	int _resultsLimit;

}

@property (nonatomic,readonly) CKQuery * query;               //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) int resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 resultsLimit:(int)arg3 ;
-(CKQuery *)query;
-(int)resultsLimit;
@end
