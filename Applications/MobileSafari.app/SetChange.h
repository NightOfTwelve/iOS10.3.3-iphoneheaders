/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, NSSet;

@interface SetChange : NSObject {

	char _empty;
	char _singleDelete;
	char _insertAll;
	char _deleteAll;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _deletedIndexes;
	NSIndexSet* _modifiedIndexes;
	NSSet* _moves;

}

@property (nonatomic,readonly) NSIndexSet * insertedIndexes;                         //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * deletedIndexes;                          //@synthesize deletedIndexes=_deletedIndexes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * modifiedIndexes;                         //@synthesize modifiedIndexes=_modifiedIndexes - In the implementation block
@property (nonatomic,readonly) NSSet * moves;                                        //@synthesize moves=_moves - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) char empty;                            //@synthesize empty=_empty - In the implementation block
@property (getter=isSingleDelete,nonatomic,readonly) char singleDelete;              //@synthesize singleDelete=_singleDelete - In the implementation block
@property (getter=isInsertAll,nonatomic,readonly) char insertAll;                    //@synthesize insertAll=_insertAll - In the implementation block
@property (getter=isDeleteAll,nonatomic,readonly) char deleteAll;                    //@synthesize deleteAll=_deleteAll - In the implementation block
+(id)emptyChange;
-(NSIndexSet *)modifiedIndexes;
-(NSSet *)moves;
-(char)isSingleDelete;
-(char)isDeleteAll;
-(id)initWithInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2 modifiedIndexes:(id)arg3 moves:(id)arg4 ;
-(char)isEqualToChange:(id)arg1 ;
-(id)initAsInsertAllWithIndexes:(id)arg1 ;
-(id)initAsDeleteAllWithIndexes:(id)arg1 ;
-(char)isInsertAll;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isEmpty;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;
@end

