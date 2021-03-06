/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <libobjc.A.dylib/NSPredicatedStoreRequest.h>

@class NSPredicate, NSDictionary, NSString, NSEntityDescription;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {

	id _entity;
	NSPredicate* _predicate;
	struct {
		unsigned includesSubentities : 1;
		unsigned resultType : 2;
		unsigned entityIsName : 1;
		unsigned secureOperation : 1;
		unsigned _RESERVED : 27;
	}  _flags;
	NSDictionary* _columnsToUpdate;

}

@property (assign,setter=_setSecureOperation:,getter=_secureOperation,nonatomic) char shouldPerformSecureOperation; 
@property (copy,readonly) NSString * entityName; 
@property (readonly) NSEntityDescription * entity;                                                                               //@synthesize entity=_entity - In the implementation block
@property (retain) NSPredicate * predicate;                                                                                      //@synthesize predicate=_predicate - In the implementation block
@property (assign) char includesSubentities; 
@property (assign) unsigned resultType; 
@property (copy) NSDictionary * propertiesToUpdate;                                                                              //@synthesize columnsToUpdate=_columnsToUpdate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)batchUpdateRequestWithEntityName:(id)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(char)includesSubentities;
-(id)initWithEntity:(id)arg1 ;
-(void)_setSecureOperation:(char)arg1 ;
-(void)setShouldPerformSecureOperation:(char)arg1 ;
-(char)shouldPerformSecureOperation;
-(id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id*)arg2 ;
-(void)_setValidatedPropertiesToUpdate:(id)arg1 ;
-(NSDictionary *)propertiesToUpdate;
-(char)_secureOperation;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(unsigned)resultType;
-(NSEntityDescription *)entity;
-(id)initWithEntityName:(id)arg1 ;
-(void)setPropertiesToUpdate:(NSDictionary *)arg1 ;
-(NSString *)entityName;
-(void)setResultType:(unsigned)arg1 ;
-(unsigned)requestType;
-(void)setIncludesSubentities:(char)arg1 ;
@end

