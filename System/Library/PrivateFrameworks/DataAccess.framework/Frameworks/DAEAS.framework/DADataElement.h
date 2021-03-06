/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DADataElement <NSObject>
@required
-(char)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 account:(id)arg5;
-(void)setLocalItem:(void*)arg1;
-(char)loadLocalItemWithAccount:(id)arg1;
-(char)saveServerIDToExistingItem;
-(char)deleteFromContainer:(void*)arg1;

@end

