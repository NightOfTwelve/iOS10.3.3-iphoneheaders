/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCERewriteTableIDInfo : NSObject {

	UUIDMap<TSP::UUIDMap>* _tableIDMap;

}
-(void)saveToMessage:(RewriteTableIDInfoArchive*)arg1 ;
-(id)initFromMessage:(const RewriteTableIDInfoArchive*)arg1 ;
-(id)initWithTableIDMap:(const UUIDMap<TSP::UUIDMap>*)arg1 ;
-(const UUIDMap<TSP::UUIDMap>*)tableIDMap;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)originalTableIDs;
-(id)extendMappingWithTableIDs:(const UUIDMap<TSP::UUIDMap>*)arg1 calcEngine:(id)arg2 ;
-(void)tableWasAdded:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)rollbackMappings:(id)arg1 ;
-(id)description;
@end

