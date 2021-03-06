/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICItemsRequest : ICRequest
+(id)requestWithDatabaseID:(unsigned)arg1 metadataFilter:(id)arg2 queryFilter:(id)arg3 purchaseTokens:(id)arg4 includeHiddenItems:(char)arg5 ;
+(id)requestWithDatabaseID:(unsigned)arg1 paginationToken:(id)arg2 ;
-(id)_bodyDataForMetadataFilter:(id)arg1 queryFilter:(id)arg2 purchaseTokens:(id)arg3 includeHiddenItems:(char)arg4 paginationToken:(id)arg5 ;
-(id)initWithDatabaseID:(unsigned)arg1 metadataFilter:(id)arg2 queryFilter:(id)arg3 purchaseTokens:(id)arg4 includeHiddenItems:(char)arg5 paginationToken:(id)arg6 ;
-(double)timeoutInterval;
@end

