/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _BCTransactionCommitRollbackPair : NSObject {

	/*^block*/id _commit;
	/*^block*/id _rollback;

}

@property (nonatomic,copy) id commit;                //@synthesize commit=_commit - In the implementation block
@property (nonatomic,copy) id rollback;              //@synthesize rollback=_rollback - In the implementation block
-(void)setCommit:(id)arg1 ;
-(id)commit;
-(id)rollback;
-(void)setRollback:(id)arg1 ;
@end

